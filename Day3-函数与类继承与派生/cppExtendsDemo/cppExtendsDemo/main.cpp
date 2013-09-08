//
//  main.cpp
//  cppExtendsDemo
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Location.h"
#include "Rectangle.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    Rectangle rect;
    //调用父类中的方法，定一个起点
    rect.setIPoint_x(10);
    rect.setIPoint_y(20);
    //调用子类中的方法，定两条边
    rect.setIHigh(300);
    rect.setIWidth(500);
    
    rect.showHW();  //调用子类中定义的方法
    rect.showXY();  //调用父类中定义的方法
    
    return 0;
}






