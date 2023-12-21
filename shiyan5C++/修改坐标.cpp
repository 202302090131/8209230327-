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
	cout << "修改前的坐标为：";
	Point p1;
	int i, j;
	cin >> i >> j;
	p1.setPoint(i,j);
	cout << "修改后的坐标为：";
	p1.display();
}