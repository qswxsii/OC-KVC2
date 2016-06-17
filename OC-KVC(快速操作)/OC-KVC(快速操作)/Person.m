//
//  Person.m
//  OC-KVC(快速操作)
//
//  Created by qingyun on 16/4/11.
//  Copyright © 2016年 QingYun. All rights reserved.
//

#import "Person.h"

@implementation Person
//-(Student *)student
//{
//    if (_student==nil)
//    {
//        _student=[Student new];
//    }
//    return _student;
//}
-(instancetype)initWithDic:(NSDictionary *)dic
{
    if (self=[super init])
    {
        [self setValuesForKeysWithDictionary:dic];
    }
    return self;
}
@end
