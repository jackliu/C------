//
//  main.m
//  ocExtendsDemo
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Location.h"
#import "Rectangle.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        NSLog(@"演示 OC 中的继承 \n");
        
        //Rectangle 中没有定义的，通过继承，可以调用父类中定义的属性
        Rectangle *rect =[[Rectangle alloc]init];
        //设置值
        [rect setIHigh:200];
        [rect setIWidth:100];
        
        [rect setIPoint_x:10];
        [rect setIPoint_y:30];
        
        //打印
        [rect showHW];
        
        
    }
    return 0;
}







