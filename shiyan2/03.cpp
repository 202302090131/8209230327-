#include<iostream>
using namespace std;
float zhouchang(float a, float b, float c)
{
	float x = a + b + c;
	return x;
}
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	cout << "����������������" << a << "��" << b << "��" << c  << endl;
	if ((a + b > c) || (a + c > b) ||(b + c > a))
	{
		cout << "�����ε��ܳ�Ϊ��" << zhouchang(a, b, c) << endl;
		if ((a == b&&b!= c) || (a == c&&c!= b) || (b == c&&c!= a))
			cout << "��������Ϊ����������" << endl;
	}
	else 
		cout << "�������������" << endl;
}