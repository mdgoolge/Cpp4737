#include<iostream>
#include<string>

using namespace std;

void swap(string, string);

void main()
{
	string str1("����"), str2("��ȥ");
	swap(str1, str2);

	cout << "���غ�str1=" << str1 << " str2=" << str2 << endl;
}
void swap(string s1, string s2){
	string temp = s1; s1 = s2; s2 = temp;
	cout << "����Ϊ��str1=" << s1 << " str2=" << s2 << endl;

}