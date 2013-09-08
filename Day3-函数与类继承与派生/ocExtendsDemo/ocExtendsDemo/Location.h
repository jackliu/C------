//
//  Location.h
//  ocExtendsDemo
//
//  Created by liu on 13-9-8.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Location : NSObject
{
    //横线与竖线 交叉，确定一个点
    int iPoint_x,iPoint_y;
}

//给属性设置值的方法
-(void)setIPoint_x:(int) x;
-(void)setIPoint_y:(int) y;

//显示属性值
-(void)showPoint;

@end




