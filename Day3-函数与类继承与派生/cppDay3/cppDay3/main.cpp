//
//  main.cpp
//  cppDay3
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include <iostream>
#include "A.h"
#include "CInternet.h"

using namespace std;

//方法外面，声明一个静态的属性变量
//一定要给 static 修饰的属性赋值
int A::iVar = 10;

int main(int argc, const char * argv[])
{
    /*
    //Demo1 输出静态 属性值
    //用类名直接访问 static 属性值  A::iVar
    cout << "A 类中静态属性 iVal = "<<A::iVar<<endl;
    //定义连个对象
    A obja,objb;
    obja.iVar = 20; //用对象也可以访问 static 属性值  obj.iVal
    cout<<"objb 中的静态属性值 iVal = "<<objb.iVar<<endl;
    */
    
    
    //Demo2  演示友元
    CInternet  c("网易", "www.163.com");
    //调用普通方法，必须通过对象
    //c.show1(c);
    //友元 方法，直接调用，与类和对象没有关系
    show2(c);
    
    return 0;
}







