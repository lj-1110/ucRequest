//
//  KLBaseRequest.h
//  KaoLa
//
//  Created by 陈亮 on 2017/2/13.
//  Copyright © 2017年 陈亮. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

typedef NS_ENUM(NSInteger,ucRequestType) {
    ucRequestTypeGet,
    ucRequestTypePost
};

typedef void (^ResponseHandler)(id dataObj, NSError *error);


@interface ucBaseRequest : NSObject

/**
 基础请求

 @param type 请求类型 get post
 @param url 请求地址
 @param parameter 参数
 @param responseBlock 回调
 */
+ (NSURLSessionDataTask *)httpRequestWithType:(ucRequestType)type requestUrl:(NSString *)url parameter:(NSDictionary *)parameter responseBlock:(ResponseHandler)responseBlock;


@end
