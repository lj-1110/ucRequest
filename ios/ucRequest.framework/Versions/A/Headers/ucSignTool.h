//
//  ucSignTool.h
//  BabyGod
//
//  Created by mac on 2020/1/19.
//  Copyright © 2020年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ucSignTool : NSObject

+ (NSDictionary *)UC_GenerateSign:(id)parm Ingore:(BOOL)ingore IsOrderBy:(BOOL)isOrderBy;

@end

NS_ASSUME_NONNULL_END
