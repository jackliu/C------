//
//  People.h
//  cppDay4
//
//  Created by liu on 13-9-14.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#ifndef cppDay4_People_h
#define cppDay4_People_h

//人，基类
//抽象类
class People
{
public:
    //基类中的方法，不是虚函数，不能实现多态
    //添加 virtual 关键字，说明函数是虚函数，被子类重写后实效
    //=0 说明，该函数完全不用在这里实现，由子类来实现，纯虚函数
    virtual void eat()=0;
    
    //如果下面定义的全部是纯虚函数，这个类就是 抽象类
};


#endif







