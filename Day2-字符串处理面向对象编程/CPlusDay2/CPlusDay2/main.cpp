//
//  main.cpp
//  CPlusDay2
//
//  Created by liu on 13-9-1.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include <iostream>
//使用 C 语言中的字符函数，必须导入 C 语言的头文件
#include <string.h>
//使用 C++ 语言的字符串
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    /*
    cout << "Demo 1 声明 C 语言数组 !\n";
    //C 字符串的定义 carr
    //C 字符串的赋值
    //一 先定义变量，后赋值
    char carr[15];
    //carr = {'h','e','l','l','o',' ','w','o','r','l','d','\0','?','?','?'}  //错误
    //carr = "hello world";  //错误
    //原因： = 是一个赋值符号，carr 分配的 15 长度连续内存，{'h',...'\0'}是另一块连续内存，= 不能把两个首地址连接在一起
    strcpy(carr,"hello world");  //正确
    
    //二 定义变量的同时，直接赋值
    char barr[15]={'h','e','l','l','o',' ','w','o','r','l','d','\0',};
    char darr[15] = "hello world";
    cout<<"第一种赋值方式 :"<<carr<<"    第二种赋值方式 :"<<barr<<endl;
    */
    
    
    /*
    cout << "Demo 1 用指针声明 C 语言数组 !\n";
    //用指针好处可以动态的分配内存长度
    char *parr = "hello world";  //parr 数组首地址,*parr
    while (*parr!='\0') {
        cout<<*parr<<endl;
        parr++;
    }
    
    
    //1 用 new 动态分配内存长度
    //sizeof(char)  --> 1
    //char *aa = new char[15];  //-->1*15 个字节长度
    //int *aaa = new int[15];   //-->4*15 个字节长度
    char *aa;
    aa = (char *)malloc(15);
    //2 检验是否分配成功
    if(NULL == aa){
        //分配内存失败
        return -1;
    }
    
    aa = "hello world";  //aa  = &"hello world";
    cout<<aa<<endl;
    
    //释放分配的内存空间
    //delete aa;
    //free(aa);
    //防止 指针 aa 变成野指针
    aa = NULL;
    */
    
    /*
    cout<<"Demo3  字符串的比较 "<<endl;
    
    char s1[] = "a";
    char s2[] = "b";
    bool flag1 = strcmp(s1,s2);
    bool flag2 = strcmp(s2,s1);
    cout<<"比较结果 :"<<flag1<<endl;
    if (strcmp(s1, s2)==0) {
        cout<<"s1  与 s2 相同"<<endl;
    }else{
        cout<<"s1  与 s2 不相同"<<endl;
    }
    
    
    char s3[] = "abcdefg";
    char s4[] = "cde";
    char *p = strstr(s3, s4);
    cout<<*p<<endl;
    cout<<"cde 在 abcdefg 中所处的开始位置 :"<<p-s3+1<<endl;
    */
    
    /*
    cout<<"Demo 4 定义 C++ 的字符串构造函数 "<<endl;
    //C++ 字符串不用考虑地址，不用考虑结束 \0
    string s1;      //调用默认构造
    const char lit[] = "hello world";  //C 语言字符串
    string s2(lit); //调用带参构造 ，把 C 字符串转换为 C++ 字符串
    string s3(lit,5);//取前 5 个字符，构成新的字符串
    string s4(s2);  //用 C++ 字符串，定义一个 新的 C++ 字符串
    string s5(s2,2,6);//得到 "llo w"; 从2 开始取 6 个字符
    string s6(7,'c'); //得到 "ccccccc" 制定字符的重复次数
    
    cout<<"s2 ="<<s2<<", s3="<<s3<<"  s5="<<s5<<endl;
    
    cout<<"Demo 5 给 C++ 中的字符串赋值 "<<endl;
    //=
    string ss1 = "abc"; //直接赋值给一个 字符串对象
    string ss2 = ss1;   //把另一个C++对象，赋给新的 字符串对象
    //assing()
    string ss3,ss4;
    ss3.assign("abc");
    ss4.assign(ss3);
    
    //append()   --  strcat()
    string ss5= "abc";
    ss5.append("defg");
    
    //插入、删除
    //str.insert(1,str2);  //"hello"   1 "abc"  "habcello"
    //str.erase(2,lenght); //从 2 开始，删除 length 长度的内容
    //查找
    //str.find(str1);//"hello" 中查找 "ll"
    //替换
    //str.replace(first,last,str1);  //str.replace(2,3,"oo");
    //字符串的长度
    //str.empty()
    //str.size()
    //str.length();
     */
    
    
    //C++ 的字符串，转换为  C 的字符数组
    //给定"afua78sdfjk23mnuj&*skdf23nSD&F8k2"
    //问大写字母、小写字母、数字、符号的个数
    string str = "abcdef";
    char a[10];
    strcpy(a, str.c_str());
    int n1 = 0;//小写字母个数
    int n2 = 0;//大写字母个数
    for (int i=0; i<strlen(a); i++) {
        cout<<a[i]<<endl;
        char c = a[i];
        if (c <'z' && c>'a') {
            n1++;
        }
        
        
    }
    
    return 0;
}




