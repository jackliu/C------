//
//  Employee.m
//  ocObjectDemo
//
//  Created by liu on 13-9-1.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#import "Employee.h"

@implementation Employee

-(void)doWork
{
    NSLog(@"工作");
}

-(void)doMeeting
{  
    NSLog(@"开会");
}
//定义对私有属性的访问方法
//修改属性的值
-(void)setName:_name
{
    name = _name;
}
//获取属性的值
-(NSString *)name
{
    return name;
}




@end
