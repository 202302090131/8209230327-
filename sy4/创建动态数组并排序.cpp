#include<iostream>
using namespace std;
int sort(int p[],int num)
{
		for (int i = 0; i < num; i++)
		{
			for (int k = 0; k < num -1 - i; k++)
			{
				if (p[k] > p[k + 1])
				{
					int t = p[k];
					p[k] = p[k + 1];
					p[k + 1] = t;
				}
			}
		}
		return 0;
}
int main()
{
	int num; cout << "����Ԫ�ظ���Ϊ��";
	cin >> num; 
	int* p = new int[num];
	cout << "����ǰ������Ϊ��"; 
	for (int i = 0; i < num; i++)
		cin >> *(p+i);
	cout << "���ԣ�" << endl;
	int a;
	cin >> a;
	cout << "p[" << a - 1 << "] = " << *(p + a - 1) << endl;
	cout << "����������Ϊ��";
	sort(p, num);
	for (int i = 0; i < num; i++)
		cout << *(p + i) << " ";
	delete[]p;
}