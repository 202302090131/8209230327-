#include<iostream>
using namespace std;
int main()
{
	double a, xn,x0;
	cin >> a;
	cout << "������һ�����֣�" << a << endl;
	if (a > 0)
	{
		int i = 0;
		x0 = a;
		for (i = 0;; i++)
		{
			xn = (x0 + a / x0) / 2;
			if (xn - x0 < 1.0e-5 && xn - x0>-1.0e-5)
				break;
			else x0 = xn;
		}
		cout << "��������ƽ����Ϊ��" << xn << endl;
	}
		
	
	if (a < 0)
	{
		cout << "false" << endl;
	}
	if (a==0)
	{
		cout << "��������ƽ����Ϊ��"<<'0' << endl;
	}
	
}