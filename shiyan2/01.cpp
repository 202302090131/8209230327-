#include<iostream>
using namespace std;
int main()
{
	char ab;
	cin >> ab;
	cout << "������һ���ַ� " <<ab<< endl;
	if ('a'<=ab&&ab<='z')
	{
		ab-=32;
			cout<<"ת������ַ�Ϊ "<<ab<<endl;
	}

	else 
	{
		cout << "���ַ��ĺ��ASKII��Ϊ " << int(ab)+1 << endl;
	}
}