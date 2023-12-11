#include<iostream>
using namespace std;
int main()
{
	int array[10];
	cout << "Enter ten numbers£º";
	for (int i = 0; i < 10; i++)
		cin >> array[i];
	cout << "The distinct numbers are£º";
	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (array[i] == array[j])
			{
				break; bool p = 0;
			}
			if (array[i] != array[j])
			{
				if (j == 9) cout << array[i] << '\t';
				else continue;
			}
		}
		if (bool p = 0) break;
	}
	cout << array[9];
}