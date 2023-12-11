#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int a;
	int sum = 0;
	a = strlen(hexString);
	int * list=new int[a];
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
			list[i] = ((hexString[i]) - 55) * (pow(16, a - 1 - i));
		else
			list[i] = (hexString[i] - 48) * pow(16, a - i - 1);
		sum = sum + list[i];
	}
	return sum;
}
int main()
{
	const int size = 999;
	char s[size];
	cout << "Please enter a number in hexChar : \n";
	cin.getline(s, size);
	cout << "Tne number " << s << " in hexChar is " << parseHex(s) << " in decimal\n";
	return 0;
}