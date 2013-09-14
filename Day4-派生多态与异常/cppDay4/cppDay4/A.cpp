//
//  A.cpp
//  cppDay4
//
//  Created by liu on 13-9-14.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include "A.h"
#include <iostream>

using namespace std;

//实现构造函数
/*
A::A(int _a)
{
    iVarA = _a;
    cout<<"调用构造函数 A 给属性 iVarA 赋值 "<<endl;
}
*/
A::A()
{
    cout<<"调用 A 的构造函数.."<<endl;
}

void A::setA(int _a)
{
    iVarA = _a;
}

void A::showA()
{
    cout<<"iVar A ="<<iVarA<<endl;
}


void A::show()
{
    cout<<"iVar A ="<<iVarA<<endl;
    cout<<"num ="<<num<<endl;
}





