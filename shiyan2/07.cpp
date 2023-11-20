#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for (i = 0; i < 5; i++)
	{
		cout << endl;
		for (j = 0; j < i+1; j++)
		{
			cout << "*";
		}
	}
	return 0;
}