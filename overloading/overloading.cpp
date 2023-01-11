#include<iostream>
using namespace std;
class point
{

    public:
	double X;
	double Y;

	point()
	{
		X = 0.0;
		Y = 0.0;
	}
	point(double x, double y)
	{
		X = x;
		Y = y;
	}
	double getX()
	{
		return X;
	}
	double getY()
	{
		return Y;
	}
	void setX(double x)
	{
		X = x;
	}
	void setY(double y)
	{
		Y = y;
	}
};