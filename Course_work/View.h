#include <SFML\Graphics.hpp>
using namespace sf;

View view;

View getPlayerCoordForView(double x, double y) {
	int tempX = x, tempY = y;
	if (x < 320) tempX = 320;
	if (y < 240) tempY = 240;
	if (y > 554) tempY = 554;

	view.setCenter(tempX, tempY);
	return view;
}

View changeView() {
	if (Keyboard::isKeyPressed(Keyboard::Q))
	{
		view.setSize(640, 480);
		//view.reset(FloatRect(0, 0, 640, 480));
		view.setRotation(0);
	}
	if (Keyboard::isKeyPressed(Keyboard::R))
	{
		view.rotate(1);
	}
	return view;
}