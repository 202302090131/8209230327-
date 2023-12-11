#include<iostream>
using namespace std;
void question(bool a[])
{
	for (int i = 2; i <= 100; i++)
	{
		for (int k = i; k < 101; k += i)
		{
			a[k] = !a[k];
		}
	}
}
int main()
{
	bool a[101];
	for (int i = 0; i < 101; i++)
	{
		a[i] = true;
	}
	question(a);

	for (int i = 1; i <= 100; i++)
	{
		if (a[i])
			cout << "L" << i << ",";
	}
	return 0;
}