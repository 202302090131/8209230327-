#include<iostream>
using namespace std;
int main()
{
	double a = 0.8;
	int day = 0; int number = 2; int sum;
	for (number = 2,sum=0; number < 100; number = number * 2 )
	{
		sum = sum + number;
		day++;
	}
	double money = (a * sum)/day;
	cout << "平均价格为：" << money << endl;

}