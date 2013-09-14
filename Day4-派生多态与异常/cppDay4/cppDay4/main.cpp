//
//  main.cpp
//  cppDay4
//
//  Created by liu on 13-9-14.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"

using namespace std;

int main(int argc, const char * argv[])
{
    /*
    //查看 子类能够调用多个父类中的方法
    C objc;
    objc.setA(10);
    objc.setB(20);
    objc.setC(30);
    objc.showA();
    objc.A::showA();
    objc.showB();
    objc.showC();
    
    cout<<"如果多个基类中，有同名的方法，叫二义性"<<endl;
    objc.A::show();
    objc.B::show();
    objc.show();
     */
    
    //C 的对象，C 继承了两个父类
    /*
     -------------         --------------
     |  A show()  |        |  B show()   |
     -------------         --------------
     
             ------------
             |   C show()|
             -------------
     */
    //上面图中，实际在内存中分配了内存，调用时会出现二义性
    //可以通过，方法名前面添加 A::  解决二义性
    //还可以用一个 关键字，告诉内存，在创建基类时，不真正的分配内存
    //虚 基类   virtual B
    /*
          ---------------
          | Base  show() |       分配内存，存放属性值
     -----------------------
     |A show() | B show()  |     不存放属性值，调用 Base 内存值
     |    -----|---------  |
     -----|  C show()   |---     调用 Base 中的属性值
          --------------- 
     */
    C c;
    c.num = 100;
    c.show();
    
    
    //创建 多层继承的对象，查看创建的顺序
    //D d;
    
    
    
    return 0;
}








