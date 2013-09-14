//
//  D.h
//  cppDay4
//
//  Created by liu on 13-9-14.
//  Copyright (c) 2013年 liu. All rights reserved.
//

#include "C.h"

#ifndef cppDay4_D_h
#define cppDay4_D_h

//第一层 A  B
//第二层子类  C
//第三层子类  D
//继承不要超过 4 层
class D:public C
{
private:
    int iVarD;
public:
    D();
    
    void setD(int _d);
    void show();
    
};


#endif
