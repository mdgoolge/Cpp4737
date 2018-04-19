#include<iostream>
using namespace std;
class Point
{
private:
	double x, y;
public:
	Point(){}
	Point(double a, double b)
	{
		x = a; y = b;
	}
	void Setxy(double a, double b)
	{
		x = a; y = b;
	}
	void Display()
	{
		cout << x << "\t" << y << endl;
	}

};

void main(){
	Point a;
	Point b(13.6, 38.5);
	a.Setxy(19.6, 18.5);
	a.Display();
	b.Display();
}