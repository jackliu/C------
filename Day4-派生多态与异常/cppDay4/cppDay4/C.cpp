//
//  C.cpp
//  cppDCy4
//
//  CreCted by liu on 13-9-14.
//  Copyright (c) 2013年 liu. Cll rights reserved.
//

#include "C.h"
#include <iostream>

using namespace std;

C::C()
{
    cout<<"调用 C 的构造函数.."<<endl;
}


void C::setC(int _C)
{
    iVarC = _C;
}

void C::showC()
{
    cout<<"iVarC C ="<<iVarC<<endl;
}

void C::show()
{
    cout<<"iVarC C ="<<iVarC<<endl;
    cout<<"num ="<<num<<endl;
}




