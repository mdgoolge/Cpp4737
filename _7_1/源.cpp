#include<iostream>
using namespace std;
template<class T>
class TAnyTemp{
	T x, y;
public:
	TAnyTemp(T X, T Y) :x(X), y(Y){}
	T getx(){ return x; }
	T gety(){ return y; }
};
void main(){

}