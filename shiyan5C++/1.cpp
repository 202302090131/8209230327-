#include<iostream>
using namespace std;
class Time            
{
public:int hour;
	  int minute;
	  int sec;
public:              
	void setHour(int Hour)
	{
		hour = Hour;
	}
	void showHour()
	{
		cout << hour << ":";
	}
	void setMinute(int Minute)
	{
		minute=Minute;
	}
	void showMinute()
	{
		cout << minute << ":";
	}
	void setSec(int Sec)
	{
		sec=Sec;
	}
	void showSec()
	{
		cout << sec << endl;
	}
};
int main()
{
	Time t1;  
	int a, b, c;
	cin >> a >> b >> c;
	t1.setHour(a); t1.setMinute(b); t1.setSec(c);
	t1.showHour(); t1.showMinute(); t1.showSec();
	return 0;
}