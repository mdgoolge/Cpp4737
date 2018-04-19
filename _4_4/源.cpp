#include<iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	void Setxy(int a, int b){ x = a; y = b; }
	void Move(int a, int b){ x += a; y += b; };
	void Display()
	{
		cout << x << "," << y << endl;
	}
	int Getx(){ return x; }
	int Gety(){ return y; }

};

void print(Point *a){
	a->Display();
}
void print(Point&a){
	a.Display();
}
void main(){
	Point A, B, *p;
	Point&RA = A;
	A.Setxy(25, 55);
	B = A;
	p = &B;
	p->Setxy(112, 115);
	print(p);
	p->Display();
	RA.Move(-80, 23);
	print(A);
	print(&A);
}