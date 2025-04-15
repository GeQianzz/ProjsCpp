#include <iostream>
#include <string.h>
using namespace std;


class Student
{
  public:
     Student(int pid,char *pname,float s);
     void display();
     static int number(){return total;}
                                //静态成员函数
  private:
     int id;
     char *name; 
     float score;
     static int total;//静态数据成员的声明
};    
int Student::total=0; //静态数据成员的初始化
Student::Student(int pid,char *pname,float s)
{
     id=pid; 
     name=new char[strlen(pname)+1]; 
                    //动态申请内存单元
     strcpy(name,pname);
     score=s;
     total++;
}

void Student::display()
{
    cout<<"   id:"<<id<<endl;
    cout<<" name:"<<name<<endl;
    cout<<"score:"<<score<<endl;
}
int main()
{
    Student stud1(1,"Wang Xin",92);
    stud1.display();
    cout<<stud1.number()<<endl;
                 //访问静态成员函数
    Student stud2(2,"Liu Xiao",88);
    stud2.display();
    cout<<Student::number()<<endl; 
                     //访问静态成员函数
    return 0;
}
