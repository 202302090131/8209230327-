#include<iostream>
using namespace std;
#include<cstring>
#include<string>
int main()
{
	string sentence;
	getline(cin, sentence);
	int letter = 0, space = 0, number = 0, elsea = 0;
	cout << "������һ���ַ��� " << sentence << endl;
	int size = sentence.size();
	for(int i=0;i<size;i++)
	{
		char a = sentence[i];
		if ((a >= 'a' && a <= 'z')&&(a>='A'&&a>='Z'))
		{
			letter++;
		}
		if (a == ' ')
		{
			space++;
		}
		if (a >= '0' && a <= '9')
		{
			number++;
		}
		else
		{
			elsea++;
		}
	}
	cout << "Ӣ����ĸ�ĸ���Ϊ��" << letter << endl;
	cout << "�ո�ĸ���Ϊ��" << space << endl;
	cout << "���ֵĸ���Ϊ��" << number << endl;
	cout << "�����ַ��ĸ���Ϊ��" << elsea << endl;
}