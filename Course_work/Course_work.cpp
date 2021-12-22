#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "map.h"
#include "Entity.h"
#include "Enemy.h"
#include "View.h"
#include "Player.h"
#include "mission.h"
using namespace sf;
using namespace std;

int main()
{
    RenderWindow window(VideoMode(640, 480), "SFML works!"/*, Style::Fullscreen*/);
    view.reset(FloatRect(0, 0, 640, 480));
    //view.setCenter


    ///////////////////////////////////MAP///////////////////////////////
    Image map_image;
    map_image.loadFromFile("images/map.png");
    Texture map_texture;
    map_texture.loadFromImage(map_image);
    Sprite map_sprite;
    map_sprite.setTexture(map_texture);
    //Map mp("map.png");

    //////////////////////////////PLAYER/////////////////////////////////
    Image pImage;
    pImage.loadFromFile("images/hero.png");
    Player lion(pImage, 100, 700, 96, 54, "Player");

    //////////////////////////////ENEMY/////////////////////////////////
    Image eImage;
    eImage.loadFromFile("images/Enemy.png");
    Enemy enemy1(eImage, 600, 720, 25, 47, "Enemy");
    Enemy enemy2(eImage, 600, 270, 25, 47, "Enemy");
    vector<Enemy> enemies = { enemy1 , enemy2 };

    //////////////////////////////////////TEXT/////////////////////////
    Font font;
    font.loadFromFile("CyrilicOld.ttf");
    Text textScore("", font, 20);
    //textScore.setColor(Color::Black);
    textScore.setStyle(Text::Bold);
    textScore.setFillColor(Color::Black);
    Text textHealth("", font, 20);
    textHealth.setStyle(Text::Bold);
    textHealth.setFillColor(Color::Black);
    Text quest_text("", font, 20);
    quest_text.setStyle(Text::Bold);

    /////////////////////////////QUEST IMG//////////////////////////
    Image quest_img;
    quest_img.loadFromFile("images/missionbg.jpg");
    Texture quest_texture;
    quest_texture.loadFromImage(quest_img);
    Sprite quest_sprite;
    quest_sprite.setTexture(quest_texture);
    quest_sprite.setTextureRect(IntRect(0, 0, 340, 510));
    quest_sprite.setScale(0.5, 0.5);

    bool showQuestText = true;
    /////////////////////////////CLOCK/////////////////////////////////
    Clock clock;
    double CurrentFrame = 0;
    //window.setFramerateLimit(60);
    //window.setVerticalSyncEnabled(true);

    while (window.isOpen())
    {
        float time = clock.getElapsedTime().asMicroseconds();
        clock.restart();
        time = time / 7000;

        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            //event.mouseWheel.delta returns 1 or -1
            switch (event.mouseWheel.delta)
            {
            case -1: view.zoom(1.1); break;
            case 1: view.zoom(0.9); break;
            default: break;
            }

            if (event.type == Event::KeyPressed) {
                switch (event.key.code)
                {
                case Keyboard::Escape: window.close(); break;
                case Keyboard::Tab:
                    switch (showQuestText)
                    {
                    case true: {
                        quest_text.setString(getTextMission(getCurrentMission(lion.getplayercoordinateX())));
                        quest_text.setFillColor(Color::Black);
                        //quest_text.setPosition(view.getCenter().x - quest_sprite.getTextureRect().width / 7, view.getCenter().y - quest_sprite.getTextureRect().height / 5);
                        //quest_sprite.setPosition(view.getCenter().x - quest_sprite.getTextureRect().width / 4, view.getCenter().y - quest_sprite.getTextureRect().height / 4);
                        showQuestText = false;
                        break;
                    }
                    case false:
                        quest_text.setString("");
                        showQuestText = true;
                        break;
                    }
                    break;
                default:
                    break;
                }
            }
        }
        float coordinatePlayerX, coordinatePlayerY = 0;
        coordinatePlayerX = lion.getplayercoordinateX();
        coordinatePlayerY = lion.getplayercoordinateY();

        /////////////////////////////MAP DRAW///////////////////////////////////////
        changeView();
        lion.update(time);
        ///if !life
        for (int i = 0; i < enemies.size();)
        {
            enemies[i].update(time);
            if (!enemies[i].life)
            {
                enemies[i] = enemies[enemies.size() - 1];
                enemies.pop_back();
            }
            else i++;
        }
        //die
        for (int i = 0; i < enemies.size(); i++)
        {
            if (enemies[i].getRect().intersects(lion.getRect()))
            {
                if (enemies[i].name == "Enemy")
                {
                    if (lion.dy > 0 && !lion.onGround)
                    {
                        enemies[i].dx = 0;
                        lion.dy = -2;
                        enemies[i].health = 0;
                        lion.playerScore++;
                    }
                }
            }
        }
        window.setView(view);
        window.clear(Color(215, 190, 155));

        char s;
        for (int i = 0; i < HEIGHT_MAP; i++)
            for (int j = 0; j < WIDTH_MAP; j++)
            {
                s = TileMap[i][j];
                switch (s)
                {
                case ' ': map_sprite.setTextureRect(IntRect(0, 0, 32, 32)); break;
                case 's': map_sprite.setTextureRect(IntRect(32, 0, 32, 32)); break;
                case '0': map_sprite.setTextureRect(IntRect(64, 0, 32, 32)); break;
                case 'f': map_sprite.setTextureRect(IntRect(96, 0, 32, 32)); break;
                case 'h': map_sprite.setTextureRect(IntRect(128, 0, 32, 32)); break;
                case 'e': map_sprite.setTextureRect(IntRect(160, 0, 32, 32)); break;
                default:
                    break;
                }
                map_sprite.setPosition(j * 32, i * 32);
                //if ((lion.sprite.getPosition().x + 32 * 15 > map_sprite.getPosition().x) && //отрисовка только в зоне видимости
                //    (lion.sprite.getPosition().x - 32 * 13 < map_sprite.getPosition().x) &&
                //    (lion.sprite.getPosition().y + 32 * 15 > map_sprite.getPosition().y) &&
                //    (lion.sprite.getPosition().y - 32 * 15 < map_sprite.getPosition().y)){
                //        window.draw(map_sprite);
                //}
                window.draw(map_sprite);
            }

        //////////////////////////////SET TEXTS/////////////////////////////
        //cout << lion.health << endl;
        textScore.setString("Score: " + /*std::*/to_string(lion.playerScore));
        textScore.setPosition(view.getCenter().x - 300, view.getCenter().y - 230);
        textHealth.setString("Health: " + to_string(lion.health));
        textHealth.setPosition(view.getCenter().x - 300, view.getCenter().y - 200);

        ////////////////////////////////DRAW///////////////////////////////
        if (!showQuestText) {
            quest_text.setPosition(view.getCenter().x + 180, view.getCenter().y - 220);
            quest_sprite.setPosition(view.getCenter().x + 140, view.getCenter().y - 235);
            window.draw(quest_sprite); window.draw(quest_text);
        }
        window.draw(textScore);
        window.draw(textHealth);

        window.draw(map_sprite);
        for (int i = 0; i < enemies.size(); i++)
        {
            window.draw(enemies[i].sprite);
        }
        window.draw(lion.sprite);
        window.display();
    }

    return 0;
}