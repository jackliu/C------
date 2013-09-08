//
//  CInternet.cpp
//  cppDay3
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include "CInternet.h"
#include <string.h>
#include <iostream>
using namespace std;

//构造函数
CInternet::CInternet()
{

}
//访问互联网上的 指定名称和地址
CInternet::CInternet(const char *_name,const char *_address)
{
    //使用 C 函数进行赋值
    strcpy(CInternet::m_name, _name);
    strcpy(CInternet::m_address, _address);
}


//不带 友元
void CInternet::show1(CInternet &obj)
{
    cout<<obj.m_name<<endl;
}

//定义 友元函数  可以在函数内，访问 private 属性
void show2(CInternet &obj)
{
    //通过对象，访问私有的属性
    cout<<obj.m_name<<endl;
}













