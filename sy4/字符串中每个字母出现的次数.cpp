#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			counts[s[i] - 'a']++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			counts[s[i] - 'A']++;
		}
	}
}
int main()
{
	int a=1000;
	char *s=new char[a];
	char cl;
	int counts[26]={0};
	cout << "Enter a string£º";
	cin.getline(s, a);
	count(s, counts);
	for (int j = 0; j < 27; j++)
	{
		if (counts[j] > 0)
		{
			cl = 'a' + j;
			cout << cl << " : " << counts[j] << " times" << endl;
		}
	}
	delete[]s;
}