#include<iostream>
using namespace std;
class Point
{
private:int x; int y;
public:
	Point() 
	{
		x = 60; y = 80; 
		cout << "(" << x << "," << y << ")" << endl;
	}
	void setPoint(int i, int j)
	{
		x = x + i; y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	cout << "�޸�ǰ������Ϊ��";
	Point p1;
	int i, j;
	cin >> i >> j;
	p1.setPoint(i,j);
	cout << "�޸ĺ������Ϊ��";
	p1.display();
}