#include<iostream>
using namespace std;

class Point{
private:
	int x, y;
	int acount;
public:
	Point(){ cout << "structor default call" << endl; }
	Point(const Point&p){ x = p.x; y = p.y; cout << "structor copy call" << endl; }
	void Setxy(int a, int b){ x = a; y = b; cout << "Setxy call" << endl; }
	void Display(){ cout << "Display  call" << "x=" << x << ",y=" << y << endl; }
	int& Getx(){ return x; }
	int* Getxp(){ return &x; }
	~Point(){ cout << "destructor  call" << endl; }

};

void main()
{
	Point A, B;
	A.Setxy(25, 55);
	B = A;
	A.Display();
	B.Display();

	int &x = A.Getx();
	x = 100;
	A.Display();

	int *xp = &A.Getx();
	*xp = 50;
	cout << xp << endl;
	A.Display();

	xp = A.Getxp();
	*xp = 99;
	cout << xp << endl;
	A.Display();
}