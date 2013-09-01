//
//  Employee.h
//  ocObjectDemo
//
//  Created by liu on 13-9-1.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Employee : NSObject
{
    //私有的属性
    NSString *name;
    int age;
    NSString *title;
}

-(void)doWork;     //工作
-(void)doMeeting;  //开会

//定义对私有属性的访问方法
//修改属性的值
-(void)setName:_name;
//获取属性的值
-(NSString *)name;


@end


