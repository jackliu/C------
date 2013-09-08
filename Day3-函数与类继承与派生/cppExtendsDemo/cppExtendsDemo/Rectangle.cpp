//
//  Rectangle.cpp
//  cppExtendsDemo
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setIHigh(int _h)
{
    iHigh = _h;
}

void Rectangle::setIWidth(int _w)
{
    iWidth = _w;
}

void Rectangle::showHW()
{
    cout<<"heigh  = "<<iHigh<<", width ="<<iWidth<<endl;
}






