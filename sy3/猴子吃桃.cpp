#include<iostream>
using namespace std;
int f(int x)
{
	int n;
	if (x == 10)
		n=1;
	else
		n = 2 * f(x + 1) + 2;
	return n;
}
int main()
{
	cout<<"猴子第一天摘了"<<f(1)<<"个桃子";
}