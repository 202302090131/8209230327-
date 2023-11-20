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
	cout << "华氏温度为:" << Hua << endl;
	cout << "摄氏温度为:" << change(Hua)<< endl;
}