//
//  Rectangle.m
//  ocExtendsDemo
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#import "Rectangle.h"

@implementation Rectangle


//设置宽度、高度
-(void)setIHigh:(int) h
{
    iHigh = h;
}


-(void)setIWidth:(int) w
{
    iWidth = w;
}

//打印宽度和高度
-(void)showHW
{
    NSLog(@"iHigh = %d , iWidth = %d \n",iHigh,iWidth);
    
     NSLog(@"x = %d, y = %d  \n",iPoint_x,iPoint_y);
}

@end


