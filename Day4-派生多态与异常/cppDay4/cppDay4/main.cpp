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

#include "People.h"
#include "Student.h"
#include "Employee.h"

using namespace std;


//异常处理机制，能够预防 由代码生成的错误
//如果真的出现后，我们可以按照提前设定的代码进行处理
/*
 try{
 //可能出现异常的代码
 //出现第一种错误  整数运算错误
 //.......
 //出现第二种错误  数组调用错误
 //异常一般能够自动抛出,下面代码停止运行
 //.......
 //出现第三种错误  对象引用错误
 //满足某个条件，手动抛出异常
 throw
 //.......
 }catch(int ){
 //一个catch 只能处理一种错误
 //处理的是   整数运算的错误
 }catch(People *){
 
 }catch(int arr[]){
 
 }
 */

//声明一个可能会出现异常的方法
double hmean(double a,double b)
{
    if (a == -b) {
        throw "当 两个值相反的时候 出错，需要你处理这个异常";
    }
    //除数不能为 0
    return 2.0*a*b/(a+b);
}


int main(int argc, const char * argv[])
{
    double x,y,z;
    cout<<"请输入两个数字"<<endl;
    while (cin>>x>>y) {
        try {
            z = hmean(x, y);
        } catch (const char *str) {
            cout<<str<<endl;
            cout<<"重新输入两个数字"<<endl;
            continue;
        }
        
        cout<<"计算结果 :"<<z<<endl;
        
    }
    
    
    
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
    /*
    C c;
    c.num = 100;
    c.show();
    */
    
    //创建 多层继承的对象，查看创建的顺序
    //D d;
    
    
    /*
    //演示多态
    //如果  People 是抽象类。指针和引用的定义方式
    //People *pa;
    //People &pb;
    
    //抽象类，不能创建对象
    //People objP;
    //objP.eat();
    
    //抽象类，只能通过指针访问方法  ->
    People *pObj;
    Student stu;     //子类对象
    pObj = &stu;     //子类对象的地址赋值给指针
    //People 中方法是虚函数，就自动调用重写过的方法
    pObj->eat();       /////////
    
    People *pObj2;
    Employee emp;
    pObj2 = &emp;
    pObj2->eat();     //////////
    */
    
        
    
    
    
    return 0;
}








