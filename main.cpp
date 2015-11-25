//
//  main.cpp
//  201511251
//
//  Created by 20141105049 on 15/11/25.
//  Copyright © 2015年 20141105049. All rights reserved.
//
#include <iostream>
using namespace std;
class student
{public:
    student(int n,string nam,int ag,string s,float c):num(n),name(nam),age(ag),sex(s),score(c){}
    void display()
    {
        cout << "num:" << num << endl;
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "sex:" << sex << endl;
        cout << "score:" << score << endl;
    }
protected:
    int num;
    string name;
    int age;
    string sex;
    float score;
};
class teacher:public student
{public:
    teacher(int n,string nam,int ag,string s,float c,int w):student(n,nam,ag,s,c),wage(w){}
    void display1()
    {
        display();
        cout << "wage:" << wage << endl;
    }
private:
    int wage;
};
int main()
{
    teacher teach(1001,"wuchao",20,"m",98.9,89);
    teach.display1();
    return 0;
}


