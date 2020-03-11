//
//  UC_BaseResult.h
//  HappySDK
//
//  Created by ZhengYudi on 16/8/4.
//  Copyright © 2016年 cyjh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UC_BaseResult : NSObject

@property (nonatomic,assign) BOOL Success;
@property (nonatomic,assign) long ErrorCode;
@property (nonatomic,strong) NSString *ErrorMessage;
@property (nonatomic,strong) id Data;

@end
