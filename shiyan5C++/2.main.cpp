#include <iostream>   
using namespace std;
#include "student.h"
int main()
{
    Student stud;                
    int num; char name[20]; char sex;
    cin >> num >> name >> sex;
    stud.set_value(num,name,sex);
    stud.display();
    return 0;
}