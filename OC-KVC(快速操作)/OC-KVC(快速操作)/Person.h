//
//  Person.h
//  OC-KVC(快速操作)
//
//  Created by qingyun on 16/4/11.
//  Copyright © 2016年 QingYun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
@property(nonatomic,copy)NSString *name;
@property(nonatomic,assign)int age;
@property(nonatomic,strong)NSDate *birthday;
@property(nonatomic,assign)double salary;
@property(nonatomic,strong)NSMutableArray *friends;
-(instancetype)initWithDic:(NSDictionary *)dic;
//@property(strong,nonatomic)Student *student;
@end
