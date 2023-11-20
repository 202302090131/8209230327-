#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b;
	cout << "请输入两个数字：" << a << ',' << b << endl;
	if (a > b)
	{
		int i; c = b, d = a;
		if ((a % b) || (b % b))
		{

			for (i = 0;; i++)
			{
				c = c - 1;
				if ((a % c) || (b % c))
					c = c - 1;
				else break;
			}
			cout << "最大公约数为：" << c << endl;
		}
		else cout << "最大公约数为：" << b << endl;
		if ((a % b) || (b % b))
		{

			for (i = 0;; i++)
			{
				d = d + 1;
				if ((d % a) || (d % b))
					d = d + 1;
				else break;
			}
			cout << "最小公倍数为：" << d << endl;
		}
		else cout << "最小公倍数为：" << a << endl;
	}

	if (a < b)
	{
		int i; c = a,d=b;
		if ((b % c) || (a % c))
		{

			for (i = 0;; i++)
			{
				c = c - 1;
				if ((b % c) || (a % c))
					c = c - 1;
				else break;
			}
			cout << "最大公约数为：" << c << endl;
		}
		else cout << "最大公约数为：" << a << endl;
		if ((b % a) || (a % a))
		{

			for (i = 0;; i++)
			{
				d = d + 1;
				if ((d % a) || (d % b))
					d = d + 1;
				else break;
			}
			cout << "最小公倍数为：" << d << endl;
		}
		else cout << "最小公倍数为：" << b << endl;
	}
	if (a == b)
	{
		cout << "最小公倍数为：" << a << endl;
		cout << "最大公约数为：" << a << endl;
	}
}		
		
		


	
