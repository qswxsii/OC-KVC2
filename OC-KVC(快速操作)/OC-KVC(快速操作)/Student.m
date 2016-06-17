//
//  Student.m
//  OC-KVC(快速操作)
//
//  Created by qingyun on 16/4/11.
//  Copyright © 2016年 QingYun. All rights reserved.
//

#import "Student.h"

@implementation Student
-(instancetype)initWithScore:(double)score
{
    if (self=[super init])
    {
        _score=score;
    }
    return self;
}
@end
