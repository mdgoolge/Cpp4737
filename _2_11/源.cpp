#include<iostream>
#include<string>
#include<algorithm>
#include<functional>

using namespace std;

void main()
{
	string str1 = "wearehere!", str2(str1);
	reverse(str1.begin(), str1.end());
	cout << str1 << endl;
	copy(str1.begin(), str1.end(), str2.begin());
	sort(str1.begin(), str1.end());
	cout << str1 << endl;
	cout << str2 << endl;
}