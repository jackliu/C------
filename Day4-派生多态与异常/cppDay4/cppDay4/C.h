//
//  C.h
//  cppDay4
//
//  Created by liu on 13-9-14.
//  Copyright (c) 2013年 liu. All rights reserved.
//
#include "A.h"
#include "B.h"

#ifndef cppDay4_C_h
#define cppDay4_C_h

//多重继承
//派生类、子类
class C :virtual public B,virtual  public A
{
private:
    //A objA;
    int iVarC;
public:
    //通过 C 构造得到父类中属性的值
    //通过哪个父类对象，把这个属性值传递给父类
    //C(int _c,int _a,A _objA):A(_a),objA(_objA);
    C();
    
    void setC(int _c);
    void showC();
    void show();
    int num;
    
};

#endif






