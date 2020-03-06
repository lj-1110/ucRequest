//
//  NSString+HPUtil.h
//  http_resignDemo
//
//  Created by 陈亮 on 2016/12/29.
//  Copyright © 2016年 陈亮. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (UcEncry)

NS_ASSUME_NONNULL_BEGIN

//用户中心des加解密
- (nullable NSString *)kp_sdk_desEncodeForUc;
- (nullable NSString *)kp_sdk_desDecodeForUc;

NS_ASSUME_NONNULL_END

@end
