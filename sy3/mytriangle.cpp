#include<iostream>
#include "mytriangle.h"
#include"cmath"
using namespace std;
double area(double side1,double side2,double side3)
{
	double mianji;
	double s = (side1 + side2 + side3) / 2;
	mianji = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	if (mianji == 0)return 0;
	return mianji;
}
bool is_valid(double side1, double side2, double side3)
{
		if ((side1 + side2 > side3) || (side1 + side3 > side2) || (side3 + side2 > side1))
			return 1;
		else return 0;
}

int main()
{
	double side1, side2, side3;
	cout << "请输入三边：" ;
	cin >> side1 >> side2 >> side3;
	bool i = is_valid(side1, side2, side3);
	if (i == 0) { cout << "不能组成三角形" << endl; }
	if (i == 1)
	{
		area(side1, side2, side3);
		if(area(side1, side2, side3)==0)  cout << "不能组成三角形" << endl;
		else cout<< "三角形的面积为：" <<area(side1, side2, side3);
	}
}