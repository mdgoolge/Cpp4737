#include<iostream>
#include<string>

using namespace std;

void swap(string, string);

void main()
{
	string str1("现在"), str2("过去");
	swap(str1, str2);

	cout << "返回后：str1=" << str1 << " str2=" << str2 << endl;
}
void swap(string s1, string s2){
	string temp = s1; s1 = s2; s2 = temp;
	cout << "交换为：str1=" << s1 << " str2=" << s2 << endl;

}