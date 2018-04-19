#include<iostream>
using namespace std;
class A{
public:
	void func(){ cout << "a.func" << endl; }

};
class B{
public:
	void func(){ cout << "b.func" << endl; }
	void gunc(){ cout << "b.gunc" << endl; }
};
class C :public A, public B{
public:
	void gunc(){ cout << "c.gunc" << endl; }
	//void hunc(){ func(); }//具有二义性
	void hun1(){ A::func(); }
	void hun2(){ B::func(); }
};
void main(){
	C obj;
	obj.A::func();
	obj.B::func();
	obj.B::gunc();
	obj.C::gunc();
	obj.gunc();
	obj.hun1();
	obj.hun2();

	C c;
	C*c1 = new C;
	c.C::gunc();
	c1->C::gunc();
	c.B::func();
	c1->A::func();
}

