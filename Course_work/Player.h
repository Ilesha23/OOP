#include "Entity.h"
class Player : public Entity {

public:
	int playerScore;
	double currentFrame = 0;
	enum { left, right, up, down, jump, stay } state;

	Player(Image& image, float X, float Y, float W, float H, String n) : Entity(image, X, Y, W, H, n) {
		playerScore = 0; state = stay;
		isMove = false;
		if (name == "Player")
			sprite.setTextureRect(IntRect(0, 138, w, h));
	}
	void control(float time) {
		//double run = 1;
		if (Keyboard::isKeyPressed(Keyboard::LShift)) run = 2;
		if (Keyboard::isKeyPressed(Keyboard::Left)) {
			state = left;
			speed = run;
		}
		if (Keyboard::isKeyPressed(Keyboard::Right)) {
			state = right;
			speed = run;

		}

		if ((Keyboard::isKeyPressed(Keyboard::Up)) && (onGround)) {
			state = jump; dy = -3; onGround = false;//то состояние равно прыжок,прыгнули и сообщили, что мы не на земле
			currentFrame += 0.05 * time;
			if (currentFrame > 3) currentFrame -= 3;
		}

		if (Keyboard::isKeyPressed(Keyboard::Down)) {
			state = down;
			speed = run;
		}
	}
	void update(float time)
	{
		control(time);//функция управления персонажем
		switch (state)//тут делаются различные действия в зависимости от состояния
		{
		case right:
			dx = speed;
			currentFrame += 0.05 * run * time;
			if (currentFrame > 3) currentFrame -= 3;
			sprite.setTextureRect(IntRect(96 * int(currentFrame), 232, w, h));
			break;//состояние идти вправо
		case left:
			dx = -speed;
			currentFrame += 0.05 * run * time;
			if (currentFrame > 3) currentFrame -= 3;
			sprite.setTextureRect(IntRect(96 * int(currentFrame), 135, 96, 54));
			break;//состояние идти влево
		case up: break;//будет состояние поднятия наверх (например по лестнице)
		case down: break;//будет состояние во время спуска персонажа (например по лестнице)
		case jump:
			currentFrame += 0.05 * time;
			if (currentFrame > 3) currentFrame -= 3;
			sprite.setTextureRect(IntRect(96 * int(currentFrame), 307, w, h));
			break;//здесь может быть вызов анимации
		case stay:
			dx = 0;
			break;//и здесь тоже		
		}
		x += dx * time;
		checkCollisionWithMap(dx, 0);//обрабатываем столкновение по Х
		y += dy * time;
		checkCollisionWithMap(0, dy);//обрабатываем столкновение по Y
		if (!isMove) speed = 0;
		sprite.setPosition(x + w / 2, y + h / 2); //задаем позицию спрайта в место его центра
		if (health <= 0) { life = false; }
		dy = dy + 0.05 * time;//делаем притяжение к земле
		if (life) getPlayerCoordForView(getplayercoordinateX(), getplayercoordinateY());
		state = stay;
		run = 1;
		isGettingDamage = false;
	}

	float getplayercoordinateX() {
		return x;
	}
	float getplayercoordinateY() {
		return y;
	}

	void checkCollisionWithMap(float Dx, float Dy)//ф ция проверки столкновений с картой
	{
		for (int i = y / 32; i < (y + h) / 32; i++)//проходимся по элементам карты
			for (int j = x / 32; j < (x + w) / 32; j++)
			{
				switch (TileMap[i][j])
				{
				case '0':
					if (Dy > 0) { y = i * 32 - h;  dy = 0; onGround = true; }//по Y вниз=>идем в пол(стоим на месте) или падаем. В этот момент надо вытолкнуть персонажа и поставить его на землю, при этом говорим что мы на земле тем самым снова можем прыгать
					if (Dy < 0) { y = i * 32 + 32;  dy = 0; }//столкновение с верхними краями карты(может и не пригодиться)
					if (Dx > 0) { x = j * 32 - w; }//с правым краем карты
					if (Dx < 0) { x = j * 32 + 32; }// с левым краем карты
					break;
				case 's':
					playerScore++;
					TileMap[i][j] = ' ';
					break;
				case 'f':
					health -= 10;
					TileMap[i][j] = ' ';
					break;
				case 'h':
					if (health <= 90) {
						health += 10;
						TileMap[i][j] = ' ';
					}
					else if (health > 90 && health < 100) {
						health = 100;
						TileMap[i][j] = ' ';
					}
					else if (health >= 100) {
						TileMap[i][j] = 'h';
					}
					break;
				case 'e':

					break;
				default:
					break;
				}
			}
	}

	void checkCollisionWithEnemy(float Dx, float Dy) {

	}
};