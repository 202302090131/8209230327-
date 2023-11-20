#include<iostream>
#include<iomanip>
using namespace std;
const double PI = 3.14;
double tiji (double r,double h)
{
	double v;
	v =  PI * r * r * h/3;
	return v;
}
int main()
{
	double r, h, v;
	cin >> r >> h;
	cout << "圆锥底的半径为 " << r << endl;
	cout << "圆锥体的高为 " << h<<endl;
	
	cout << "圆锥体的体积为 "<<tiji(r, h) << endl;
}