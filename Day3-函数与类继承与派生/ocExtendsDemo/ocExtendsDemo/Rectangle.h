//
//  Rectangle.h
//  ocExtendsDemo
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#import "Location.h"

//矩形需要一个 起始点，加上 宽、高
@interface Rectangle : Location
{
    int iHigh,iWidth;
}

//设置宽度、高度
-(void)setIHigh:(int) h;
-(void)setIWidth:(int) w;

//打印宽度和高度
-(void)showHW;

@end













