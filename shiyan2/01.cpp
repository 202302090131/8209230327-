#include<iostream>
using namespace std;
int main()
{
	char ab;
	cin >> ab;
	cout << "请输入一个字符 " <<ab<< endl;
	if ('a'<=ab&&ab<='z')
	{
		ab-=32;
			cout<<"转换后的字符为 "<<ab<<endl;
	}

	else 
	{
		cout << "该字符的后继ASKII码为 " << int(ab)+1 << endl;
	}
}