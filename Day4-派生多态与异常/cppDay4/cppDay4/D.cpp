//
//  D.cpp
//  cppDay4
//
//  Created by liu on 13-9-14.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include "D.h"
#include <iostream>

using namespace std;

D::D()
{
    cout<<"调用 D 的构造函数.."<<endl;
}


void D::setD(int _D)
{
    iVarD = _D;
}


void D::show()
{
    cout<<"iVarD D ="<<iVarD<<endl;
}

