#include<iostream>
using namespace std;
int max_factor(int a, int b)//�������
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
int min_multiple(int a, int b)//��С������
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
	cout << "��������������";
	cin >> a >> b;
	cout << "���Լ��Ϊ��" << max_factor(a, b) << endl;
	cout << "��С������Ϊ��" << min_multiple(a, b) <<endl;
}