//
//  Rectangle.h
//  cppExtendsDemo
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include "Location.h"

#ifndef cppExtendsDemo_Rectangle_h
#define cppExtendsDemo_Rectangle_h

//C++ 继承的要点
class Rectangle:public Location
{
private:
    int iHigh,iWidth;
public:
    void setIHigh(int _h);
    void setIWidth(int _w);
    
    void showHW();
    
};


#endif




