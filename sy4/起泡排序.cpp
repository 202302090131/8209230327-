#include<iostream>
using namespace std;
double change(double array[10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 9 - i; k++)
		{
			if (array[k] > array[k + 1])
			{
				double t = array[k];
				array[k] = array[k + 1];
				array[k + 1] = t;
			}
		}
	}
	return 0;
}
int main()
{
	const int n = 10;
	double array[n];
	for (int i = 0; i < 10; i++)
		cin >> array[i];
	cout << "����ǰ��" << endl;
	for (int i = 0; i < 10; i++)
		cout<< array[i]<<'\t';
	cout << endl;
	change(array);
	cout << "�����" << endl;
	for (int i = 0; i < 10; i++)
		cout << array[i] << '\t';
}
