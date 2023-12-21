#include<iostream>
using namespace std;
class Student
{

public:
	int num; int score;
	int max(Student* p)
	{
		int t;
		int max_score = p[0].score;
		for (int i = 0; i < 5; i++)
		{
			if ((p[i].score) > max_score)
			{
				max_score = p[i].score; t = i;
			}
		}
		return p[t].num;
	}
};
int main()
{
	cout << "请输入学生的学号和成绩：" << endl;
	Student students[5];
	for (int i = 0; i < 5; i++)
		cin >> students[i].num >> students[i].score;
	Student* p;
	p = &students[0];
	cout << "成绩最高的学生学号为：" << students[5].max(p);
}