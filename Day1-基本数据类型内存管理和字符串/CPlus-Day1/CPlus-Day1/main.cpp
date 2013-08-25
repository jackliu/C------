//
//  main.cpp
//  CPlus-Day1
//
//  Created by liu on 13-8-25.
//  Copyright (c) 2013年 liu. All rights reserved.
//


//C 语言的标准输入输出库
#include <stdio.h>

//C++标准输入输出库，包含 C 输入输出库
#include <iostream>
//简化命名空间的代码
//本代码中所有 C++ 对象前面都加 std::
using namespace std;


int main(int argc, const char * argv[])
{

    // insert code here...
    /*
    //对象输出
    //std::cout << "Hello, World!\n";
    //<< 调用符号  System.out.print("hello");
    //[cout print:"hello"];
    cout<<"hello world\n";
    cout<<"hello world"<<endl; //endLine换行
    //函数输出
    printf("hello world \n");
    
    
    
    
    //定义一个整数类型变量
    int i = sizeof(char);
    //查看整数类型所占的内存空间大小
    printf("int 类型占内存空间大小 %d \n",i);
    
    int j = sizeof(char);
    cout<<"int 类型占内存空间大小"<<j<<endl;
    
    //C++ 中定义专门的类型，表示 true false
    bool flag = 2>3;
    if (flag) {
        
    }
     */
    
    /*
    int i,j;
    cout<<"请输入 i 和 j 的值"<<endl;
    //cin>>i>>j;  //scanf("%d%d",&i,&j);
    cin>>i;
    cin>>j;
    
    cout<<"i ="<<i<<" , j="<<j<<endl;
    */
    /*
    char str[20];
    cin.getline(str, 20);
    cout<<str<<endl;
    */
    
    int aa;
    while (true) {
        cin>>aa;
        cout<<"----"<<endl;
        cin.clear();   //清理标志位
        cin.ignore(255); //忽略掉255个字节长度的字符
    }
    
    
     
    return 0;
}






