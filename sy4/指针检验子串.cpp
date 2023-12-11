#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
		int a = strlen(s1);
		int b = strlen(s2);
		int t1, i, j, k, l;
		int total = 0;
		bool* p = new bool[b];
		for (int i = 0; i < b; i++)
			p[i] = 0;
		for (i = 0, j = 0; j < b - a + 1; j++)      
		{
			if (s1[i] == s2[j])  p[j] = 1;
		}
		for (j = 0; j < b - a + 1; j++)   
		{
			if (p[j] == 1)
			{
				t1 = j;
				for (k = 1, l = t1 + 1; k < a; k++, l++)
				{
					if (s1[k] == s2[l])
					{
						if (l == t1 + a - 1)  return t1;
					}
					if (s1[k] != s2[l]) p[j] = 0;
				}
			}
		}
		for (int i = 0; i < b; i++)
		{
			if (p[i] == 0) total++;
		}
		if (total == b) return -1;
}
	int main()
	{
		const int a = 1000;
		char* s1=new char[a];
		char* s2 = new char[a];
		cout << "Enter the first string£º";
		cin.getline(s1, a);
		cout << "Enter the second string£º";
		cin.getline(s2, a);
		cout << "indexOf (\"" << s1 << "\",\"" << s2 << "\") is " << indexof(s1, s2) << endl;
		delete[]s1; delete[]s2;
	}

