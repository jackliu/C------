//
//  Student.h
//  cppDay4
//
//  Created by liu on 13-9-14.
//  Copyright (c) 2013年 liu. All rights reserved.
//
#include "People.h"

#ifndef cppDay4_Student_h
#define cppDay4_Student_h

//派生类，继承了 基类中所有的方法
class Student:public People
{
public:
    //派生类、"重写"了基类中的方法
    void eat();
};


#endif





