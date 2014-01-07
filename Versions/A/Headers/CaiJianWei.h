//
//  CaiJianWei.h
//  CaiJianWei
//
//  Created by 田地 on 14-1-7.
//  Copyright (c) 2014年 com.isoftstone. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CaiJianWei : NSObject

#pragma mark ---数组排序

+(NSArray *)sortNSArray:(NSArray *) array;

#pragma mark ---数组排序 以大写开头为字典
+(NSDictionary *) dictionaryForNSArrayToDaXieZhiMu:(NSArray *) chineseArraySort;



@end
