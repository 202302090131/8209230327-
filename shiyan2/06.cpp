#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b;
	cout << "�������������֣�" << a << ',' << b << endl;
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
			cout << "���Լ��Ϊ��" << c << endl;
		}
		else cout << "���Լ��Ϊ��" << b << endl;
		if ((a % b) || (b % b))
		{

			for (i = 0;; i++)
			{
				d = d + 1;
				if ((d % a) || (d % b))
					d = d + 1;
				else break;
			}
			cout << "��С������Ϊ��" << d << endl;
		}
		else cout << "��С������Ϊ��" << a << endl;
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
			cout << "���Լ��Ϊ��" << c << endl;
		}
		else cout << "���Լ��Ϊ��" << a << endl;
		if ((b % a) || (a % a))
		{

			for (i = 0;; i++)
			{
				d = d + 1;
				if ((d % a) || (d % b))
					d = d + 1;
				else break;
			}
			cout << "��С������Ϊ��" << d << endl;
		}
		else cout << "��С������Ϊ��" << b << endl;
	}
	if (a == b)
	{
		cout << "��С������Ϊ��" << a << endl;
		cout << "���Լ��Ϊ��" << a << endl;
	}
}		
		
		


	
