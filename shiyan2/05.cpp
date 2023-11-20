#include<iostream>
using namespace std;
#include<cstring>
#include<string>
int main()
{
	string sentence;
	getline(cin, sentence);
	int letter = 0, space = 0, number = 0, elsea = 0;
	cout << "请输入一行字符： " << sentence << endl;
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
	cout << "英文字母的个数为：" << letter << endl;
	cout << "空格的个数为：" << space << endl;
	cout << "数字的个数为：" << number << endl;
	cout << "其他字符的个数为：" << elsea << endl;
}