#include<iostream>
using namespace std;
bool is_prime(int num)
{   
	if (num == 1) { return 0; }
	if (num != 1)
	{
		for (int i = num - 1;; i--)
		{
			if ((num % i == 0) && (num % num == 0))
			{
				if (i == 1)
					num = 1;
				else
					num = 0;
				break;
			}
		}
		return (bool)num;
	}
}
int main()
{
	const int a = 200;
	int b = 0;
	for (int num = 1;; num++)
	{
		if (is_prime(num))
		{
			cout << num << '\t';
			b++;
			if (b % 10 == 0)
				cout << endl;
			if (b == 200) break;
		}
	}
}