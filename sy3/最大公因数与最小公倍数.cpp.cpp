#include<iostream>
using namespace std;
int max_factor(int a, int b)//最大公因数
{
	int n, t;
	if (a < b) {t = a;a = b;b = t;}
	for (int n = b;; n--)
	{
		if ((a % n == 0) && (b % n == 0))
		{
			return n;
		}
	}
}
int min_multiple(int a, int b)//最小公倍数
{
	int n, t;
	if (a < b) {t = a;a = b;b = t;}
	for (int n = a;; a++)
	{
		if ((n % a == 0) && (n % b == 0))
		{
			return n;
		}
	}
}
int main()
{
	int a, b;
	cout << "请输入两个数：";
	cin >> a >> b;
	cout << "最大公约数为：" << max_factor(a, b) << endl;
	cout << "最小公倍数为：" << min_multiple(a, b) <<endl;
}