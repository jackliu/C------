//
//  B.cpp
//  cppDay3
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include "B.h"
#include <iostream>
using namespace std;

//构造函数
B::B(int _data)
{
    data = _data;
}

void B::Set(int _data)
{
    data  = _data;
}

//常量函数 show() ,只能访问 data 的值，但是不能改 data 值
void B::show() const
{
    cout<<"data :"<<data<<endl;
    //data++; //对 data 做修改，在当前函数中不运行
}




