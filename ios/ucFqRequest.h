//
//  ucFqRequest.h
//  BabyGod
//
//  Created by mac on 2020/1/19.
//  Copyright © 2020年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ucBaseRequest.h"

typedef NS_ENUM(NSInteger, FqEnvironment) {
    FqEnvironment_sandbox,  //沙盒
    FqEnvironment_product   //正式
};

NS_ASSUME_NONNULL_BEGIN

@interface ucFqRequest : NSObject

/**
 苹果支付验证接口
 
 @param Ucid 用户id
 @param busOrderID sdk订单号
 @param receiptData 苹果收据
 @param transactionID 苹果交易id
 @param responseDataBlock 回调
 */
+ (void)uc_appleFqValidateWithUcid:(NSString *)Ucid busOrderID:(NSString *)busOrderID receiptData:(NSData *)receiptData transactionID:(NSString *)transactionID url:(NSString *)url appid:(NSString *)appid responseBlock:(ResponseHandler)responseDataBlock;


/**
 自动续费
 
 @param receiptData 票据
 @param responseDataBlock 回调
 */
+ (void)uc_appleAutoRenewalWithReceiptData:(NSData *)receiptData environment:(FqEnvironment)e url:(NSString *)url responseBlock:(ResponseHandler)responseDataBlock;

@end

NS_ASSUME_NONNULL_END
