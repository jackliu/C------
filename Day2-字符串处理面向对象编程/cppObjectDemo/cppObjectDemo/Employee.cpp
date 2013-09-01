//
//  Employee.cpp
//  cppObjectDemo
//
//  Created by liu on 13-9-1.
//  Copyright (c) 2013年 liu. All rights reserved.
//

//同名文件，自动导入
#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

//实现所有头文件中，声明过的方法
//构造函数
Employee::Employee()
{
    //没有写出来，也存在
}

//带参数的构造函数
Employee::Employee(string _name,int _age,string _title)
{
    name = _name;
    age = _age;
    title = _title;
}


//析构函数，清理内存
//由编译器自动调用，不能手动调用
//~Employee::Employee()  错误
Employee::~Employee()
{
    //把代码中占用到的内存，全部释放
    //name = NULL;
    //age = 0;
    //title = null;
}


//::  域描述符，说明 doWork 是哪个类中声明的方法
void Employee::doWork(void)
{
    cout<<"工作"<<endl;
}

//Employee::void doMeeting()   错误
void Employee::doMeeting()
{
    cout<<"开会"<<endl;
}


//打印所有的属性值
void Employee::show()
{
    cout<<"name :"<<name<<",age :"<<age<<",title :"<<title<<endl;
    
}



void Employee::setName(string s)
{   //设置名称属性
    name =s;
}

string Employee::getName()
{
    //获取名称属性
    return name;
}















