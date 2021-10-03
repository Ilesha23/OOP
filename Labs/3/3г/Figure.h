#include <math.h>
#include <corecrt_math_defines.h>
using namespace std;
class Figure
{
public:
	int x, y;
	Figure() {
		
	}

	/*void set(int xx, int yy) {
		x = xx;
		y = yy;
	}*/

	virtual void show() = 0;
};