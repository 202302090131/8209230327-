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
	cout << "Բ׶�׵İ뾶Ϊ " << r << endl;
	cout << "Բ׶��ĸ�Ϊ " << h<<endl;
	
	cout << "Բ׶������Ϊ "<<tiji(r, h) << endl;
}