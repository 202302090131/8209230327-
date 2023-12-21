#include<iostream>
using namespace std;
class Cylinder
{
private:int length, width, height;
public:void set_value(int Length,int Width,int Height);
	  int tiji(int length, int width, int height);
};
void Cylinder::set_value(int Length, int Width, int Height)
{
	length = Length;
	width = Width;
	height = Height;
}
int Cylinder::tiji(int length, int width, int height)
{
	return length * width * height;
}
int main()
{
	Cylinder c1; Cylinder c2; Cylinder c3;
	int a, b, c;
	cout << "请输入第一个长方柱的长、宽、高：";
	cin >> a >> b >> c;
	c1.set_value(a, b, c);
	cout << "第一个长方柱的体积为：" << c1.tiji(a, b, c) << endl;;

	int d, e, f;
	cout << "请输入第二个长方柱的长、宽、高：";
	cin >> d >> e >> f;
	c2.set_value(d, e, f);
	cout << "第二个长方柱的体积为：" << c2.tiji(d, e, f) << endl;;

	int g, h, i;
	cout << "请输入第三个长方柱的长、宽、高：";
	cin >> g >> h >> i;
	c3.set_value(g, h, i);
	cout << "第三个长方柱的体积为：" << c3.tiji(g, h, i) << endl;
	return 0;
}