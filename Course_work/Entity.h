#pragma once
using namespace sf;
class Entity {
public:
	double x, y, dx, dy, speed, run = 1;
	int w, h, health;
	bool life, isGettingDamage, isMove, onGround;
	Texture texture;
	Sprite sprite;
	String name;

	Entity(Image& image, double X, double Y, int W, int H, String n) {
		x = X; y = Y; w = W; h = H; name = n;
		dx = dy = 0; speed = 0; health = 100;
		life = true; isGettingDamage = false; onGround = false;
		texture.loadFromImage(image);
		sprite.setTexture(texture);
		sprite.setOrigin(w / 2, h / 2);
		//sprite.setTextureRect(IntRect(x, y, w, h));
	}

	FloatRect getRect() {
		return FloatRect(x, y, w, h);
	}
};