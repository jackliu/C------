//
//  B.h
//  cppDay3
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#ifndef cppDay3_B_h
#define cppDay3_B_h

//演示 常量修饰符号 const
class B
{
    int data;
    
public:
    //构造函数
    B(int _data);
    
    void Set(int _data);

    //常量函数 show() ,只能访问 data 的值，但是不能改 data 值
    void show() const;

};


#endif







