#include<iostream>

using namespace std;

void swap(int[]);

void main()
{
	int a[] = { 3, 8 };
	swap(a);
	cout << "���غ�a=" << a[0] << " b=" << a[1] << endl;

}
void swap(int a[]){
	int temp = a[0]; a[0] = a[1]; a[1] = temp;
	cout << "����Ϊ��a=" << a[0] << " b=" << a[1] << endl;
}