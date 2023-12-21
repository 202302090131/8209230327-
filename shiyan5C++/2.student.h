#pragma once
class Student              
{
public:                   
    void display();
    void set_value(int Num, char Name[20], char Sex);
private:
    int num;
    char name[20];
    char sex;
};
