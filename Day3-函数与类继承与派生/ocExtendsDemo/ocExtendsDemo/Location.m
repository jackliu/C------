//
//  Location.m
//  ocExtendsDemo
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#import "Location.h"

@implementation Location

//给属性设置值的方法
-(void)setIPoint_x:(int) x
{
    iPoint_x = x;
}

-(void)setIPoint_y:(int) y
{
    iPoint_y = y;
}

//显示属性值
-(void)showPoint
{
    NSLog(@"x = %d, y = %d  \n",iPoint_x,iPoint_y);
}


@end



