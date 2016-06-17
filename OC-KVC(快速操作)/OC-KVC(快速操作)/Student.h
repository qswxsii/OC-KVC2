//
//  Student.h
//  OC-KVC(快速操作)
//
//  Created by qingyun on 16/4/11.
//  Copyright © 2016年 QingYun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Student : NSObject
@property(nonatomic,assign)double score;
-(instancetype)initWithScore:(double)score;
@end
