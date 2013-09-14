//
//  B.cpp
//  cppDBy4
//
//  CreBted by liu on 13-9-14.
//  Copyright (c) 2013年 liu. Bll rights reserved.
//

#include "B.h"
#include <iostream>

using namespace std;

/*
B::B(int _b)
{
    iVarB = _b;
    cout<<"调用构造函数 B 给属性 iVarB 赋值 "<<endl;
}
*/
B::B()
{
    cout<<"调用 B 的构造函数.."<<endl;
}


void B::setB(int _B)
{
    iVarB = _B;
}

void B::showB()
{
    cout<<"iVarB B ="<<iVarB<<endl;
}


void B::show()
{
    cout<<"iVarB B ="<<iVarB<<endl;
    cout<<"num ="<<num<<endl;
}



