#include<iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point();
	Point(int, int);
	~Point();
};

Point::Point() :x(0), y(0)
{
	cout << "Initializing default" << endl;
}
Point::Point(int a, int b) : x(a), y(b)
{
	cout << "Initializing" << a << "," << b << endl;
}
Point::~Point(){
	cout << "Destructor is active" << endl;
}
Point global(5, 7);
void main(){

	Point A;
	cout << endl;
	Point B(15, 25);
	cout << endl;
	Point C[2];
	cout << endl;
	Point D[2] = { Point(5, 7), Point(8, 12) };

	cout << "4.6" << endl;
	Point *ptr1 = new Point;
	Point*ptr2 = new Point(5, 78);
	delete ptr1;
	delete ptr2;

}