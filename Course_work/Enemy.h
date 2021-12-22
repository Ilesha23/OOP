#pragma once
using namespace sf;
class Enemy :public Entity {
public:
	enum { left, right, stay } state;
	Enemy(Image& image, double X, double Y, int W, int H, String Name) :Entity(image, X, Y, W, H, Name) {
		if (Name == "Enemy")
		{
			sprite.setTextureRect(IntRect(196, 96, W, H));//26, 47
			dx = 1;
		}
	}

	void checkCollisionWithMap(float Dx, float Dy)//ф ция проверки столкновений с картой
	{
		for (int i = y / 32; i < (y + h) / 32; i++)//проходимся по элементам карты
			for (int j = x / 32; j < (x + w) / 32; j++)
			{
				if (TileMap[i][j] == '0')
				{
					if (Dy > 0) { y = i * 32 - h; }//по Y вниз=>идем в пол(стоим на месте) или падаем. В этот момент надо вытолкнуть персонажа и поставить его на землю, при этом говорим что мы на земле тем самым снова можем прыгать
					if (Dy < 0) { y = i * 32 + 32; }//столкновение с верхними краями карты(может и не пригодиться)
					if (Dx > 0) { x = j * 32 - w; dx = -1; sprite.scale(-1, 1); }//с правым краем карты
					if (Dx < 0) { x = j * 32 + 32; dx = 1; sprite.scale(-1, 1); }// с левым краем карты
				}
			}
	}

	void update(float time)
	{
		if (name == "Enemy")
		{
			checkCollisionWithMap(dx, 0);
			x += dx * time;
			sprite.setPosition(x + w / 2, y + h / 2);
			if (health <= 0)
			{
				life = false;
			}
		}
	}
};