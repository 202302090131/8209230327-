#include<iostream>
using namespace std;
float change(float a)
{
	float b;
	b = a * 1.8 + 32;
	return b;
}
int main()
{
	float Hua, She;
	cin >> Hua;
	cout << "�����¶�Ϊ:" << Hua << endl;
	cout << "�����¶�Ϊ:" << change(Hua)<< endl;
}