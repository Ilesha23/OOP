class Area {
public:
	double area(double x, double y = 0.0) {
		if (y == 0.0)
		{
			return x * x;
		}
		else
		{
			return x * y;
		}
	}
};