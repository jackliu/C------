//
//  CInternet.h
//  cppDay3
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#ifndef cppDay3_CInternet_h
#define cppDay3_CInternet_h

//演示 友元
class CInternet
{
private:
    char m_name[20];    //网址
    char m_address[20]; //IP
    
    
public:
    //构造函数
    CInternet();
    //访问互联网上的 指定名称和地址
    CInternet(const char *_name,const char *_address);
    
    //该函数是类的一部分，调用必须加命名空间 CInternet::
    void show1(CInternet &obj);
    
    
    //friend 修饰的方法，不是属于这个类的
    //外部访问时，不可以加 命名空间  CInternet::
    //定义 友元函数  可以在函数内，访问 private 属性
    friend void show2(CInternet &obj);
    
};




#endif








