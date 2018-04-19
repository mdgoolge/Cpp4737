#include<iostream>
using namespace std;
class Point
{
protected:
	int x, y;
public:
	Point(int a, int b){ x = a; y = b; };
	void Show(){ cout << "x=" << x << ",y=" << y << endl; }
};
class Rectangle :public Point{
private:
	int H, W;
public:
	Rectangle(int a, int b, int h, int w);
	void Show(){ cout << "x=" << x << ",y=" << y << ",H=" << H << ",W=" << W << endl; }
};

Rectangle::Rectangle(int a, int b, int h, int w) :Point(a, b)
{
	H = h; W = w;
}
void main()
{
	Point a(1, 2);
	Rectangle b(3, 4, 5, 6);
	a.Show();
	b.Show();
	Point&ra = b;
	ra.Show();
	Point*p = &b;
	p->Show();
	Rectangle*pb = &b;
	pb->Show();
	a = b;
	a.Show();

}