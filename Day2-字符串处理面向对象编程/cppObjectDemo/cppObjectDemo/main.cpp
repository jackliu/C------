//
//  main.cpp
//  cppObjectDemo
//
//  Created by liu on 13-9-1.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include <iostream>
//重复导入头文件问题
#include "Employee.h"
#include "Employee.h"

using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
    cout << "演示 C++ 对象的创建和调用 !\n";
    
    //1 创建一个对象
    //类名   对象名
    //调用默认构造函数
    Employee emp;
    //2 调用一个 对象的方法
    emp.doWork();
    
    
    //创建一个带参构造函数定义的对象
    Employee emp2("liu",30,"PM");
    emp2.doMeeting();
    emp2.show();
    
    
    return 0;
}








