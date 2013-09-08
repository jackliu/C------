//
//  A.cpp
//  cppDay3
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include "A.h"
#include "B.h"
//导入系统输入输出库
#include <iostream>

//声明系统的命名空间
using namespace std;

//构造函数，给属性赋值
//A::  表示，后面的 A() 是在 class A{}中声明的
A::A()
{
    
}

A::A(int _idata)
{
    idata = _idata;
}

void A::show1()
{
    //输出 iVar
    cout<<"非静态方法，A 类中的 静态属性值为 iVar ="<<A::iVar<<endl;
}

//显示 static int iVar 的值
void A::show2()
{
    //输出 iVar
    cout<<"静态方法中,A 类中的 静态属性值为 iVar ="<<iVar<<endl;
}






