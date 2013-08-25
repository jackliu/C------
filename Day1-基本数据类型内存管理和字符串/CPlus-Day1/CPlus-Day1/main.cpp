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

//声明函数
void forMethod();
void whileMethod(int z,int f);

//数组和指针的内存分配
//用返回值解决，不同作用域，内存分配问题
char * GetMemory(char *p, int num);
void Test1(void);

//用指针解决，不同作用域，内存分配问题
void GetMemory2(char **p, int num);
void Test2(void);




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
    
    /*
    int aa;
    while (true) {
        cin>>aa;
        cout<<"----"<<endl;
        cin.clear();   //清理标志位
        cin.ignore(255); //忽略掉255个字节长度的字符
    }
     */
    
    
    /*
    //循环10次，输出 10 个变量值，输入 0  终止
    //判断正数、负数个数
    int zNum=0;  //正数个数
    int fNum=0;  //负数个数
    
    forMethod();  //调用函数，不传参数
    
    
    cout<<"main zNum :"<<zNum<<endl;
    cout<<"main fNum :"<<fNum<<endl;
    */

    //数组的内存分配
    //Test1();
    Test2();
    
    /*
    //演示内存耗尽的情况如何处理
    float *p = NULL;
    while (true) {
        p = new float[1000000];
        cout<<"吃掉内存"<<endl;
        //内存耗尽，就无法得到内存，所以 p 的地址为 NULL
        if (p==NULL) {
            exit(1);
        }
    }
    */
    
    
    return 0;
}



//实现方法
void forMethod()
{
    int zNum=0;  //正数个数
    int fNum=0;  //负数个数
    int inputNum;
    
    for (int i=0; i<10; i++) {
        cin>>inputNum;
        cout<<"i ="<<inputNum<<endl;
        
        if (inputNum == 0) {
            break;
        }
        
        if (inputNum>0) {
            zNum++;
        }
        if (inputNum<0) {
            fNum++;
        }
    }
    
    cout<<"正数个数为 :"<<zNum<<endl;
    cout<<"负数个数为 :"<<fNum<<endl;
}


void whileMethod(int z,int f)
{
    int aa ;
    cin>>aa;
    while (aa != 0) {
        cin>>aa;
        cout<<"aa ="<<aa<<endl;
        
        if (aa>0) {
            z++;
        }
        if (aa<0) {
            f++;
        }
    }
    
    cout<<"正数个数为 :"<<z<<endl;
    cout<<"负数个数为 :"<<f<<endl;
    
}


char *  GetMemory(char *p, int num)
{
    //*p -> NULL
    //p 在当前函数内部有效
    p = (char *)malloc(sizeof(char) * num);
    //成功给 p 分配了 400 的内存空间
    return  p;
}

void Test1(void)
{
    char *str = NULL;
   str =  GetMemory(str, 100);   // str 仍然为 NULL
    //用 c 函数给 str 内存中赋值
    strcpy(str, "hello");        // 运行错误
    cout<<str<<endl;
}




//用指针解决，不同作用域，内存分配问题
void GetMemory2(char **p, int num)
{
    *p = (char *)malloc(sizeof(char) * num);
}


void Test2(void)
{
    char *str = NULL;
    GetMemory2(&str, 100);   // str 仍然为 NULL
    //用 c 函数给 str 内存中赋值
    strcpy(str, "hello");        // 运行错误
}









