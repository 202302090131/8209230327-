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
	cout << "请输入三角形三边" << a << "、" << b << "、" << c  << endl;
	if ((a + b > c) || (a + c > b) ||(b + c > a))
	{
		cout << "三角形的周长为：" << zhouchang(a, b, c) << endl;
		if ((a == b&&b!= c) || (a == c&&c!= b) || (b == c&&c!= a))
			cout << "该三角形为等腰三角形" << endl;
	}
	else 
		cout << "不能组成三角形" << endl;
}