//
//  A.h
//  cppDay3
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#ifndef cppDay3_A_h
#define cppDay3_A_h

//定义一个类，使用 static 关键字
class A
{
private:
    //私有属性，外部不能访问
    //int idata;
public:
    int idata;

    //构造函数，给属性赋值
    A();
    A(int _idata);
    
    static int iVar;

    //非静态函数
    void show1();
    //显示 static int iVar 的值
    static void show2();
    
};   //类要用  ;  结束



#endif













