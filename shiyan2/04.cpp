#include<iostream>
using namespace std;
int main()
{
	double a, b, x;
	char c;
	cin >> a >> b>>c;
	if (c == '+')
	{
		x = a + b;
		cout << a << '+' << b << "=" << x << endl;
	}
	else if (c == '-')
	{
		x = a - b;
		cout << a << '-' << b << "=" << x << endl;
	}
	else if (c == '*')
	{
		x = a * b;
		cout << a << '*' << b << "=" << x << endl;
	}
	else if (c == '/')
	{
		if (b == 0)
			cout << "false,��������Ϊ0" << endl;
		else
		{
			x = a / b;
			cout << a << '/' << b << "=" << x << endl;
		}
	}
	else if (c == '%')
	{
		x = (int)a % (int)b;
		cout << a << '%' << b << "=" << x << endl;
	}
	else cout << "false" << endl;
	return 0;
}