#include <iostream>
using namespace std;
#include"student.h"  
void Student::set_value(int Num, char Name[20], char Sex)
{
    num = Num;
    sex = Sex;
    for (int i = 0; i < 20; i++)
    {
        name[i] = Name[i];
    }
}
void Student::display()         
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}


