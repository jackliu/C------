//
//  Employee.h
//  cppObjectDemo
//
//  Created by liu on 13-9-1.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//C 语言防止重复导入的宏定义代码
#ifndef cppObjectDemo_Employee_h
#define cppObjectDemo_Employee_h

//定义一个类
class Employee
{
    //{
    
    //}
    //private 私有的、私人的
private:
    string name;
    int age;
    string title;
    
    //public 公开的
public:
    //构造函数
    Employee(); //没有写出来，也存在
    Employee(string _name,int _age,string _title);//带参数的构造函数
    //析构函数，清理内存
    ~Employee();
    
    
    //void 表示“不需要”
    void doWork(void);     //工作
    void doMeeting();      //开会
    void show();           //打印属性值
    
    
    void setName(string s); //设置名称属性
    string getName();         //获取名称属性
    
    
};   //类定义，以  ;  结束





#endif
