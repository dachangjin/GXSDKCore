//
//  GXDeviceToken.h
//  GXSDK
//
//  Created by wangwei on 2018/3/12.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 远程推送token
 */
@interface GXDeviceToken : NSObject

/**
 token字符串
 */
@property (nonatomic, strong, readonly)NSString *token;

/**
 是否开发模式
 */
@property (nonatomic, assign, readonly)BOOL dev;

/**
 构造函数

 @param token token字符串
 @param dev 是否开发模式
 @return GXDeviceToken对象
 */
- (id)initWithToken:(NSString *)token
                dev:(BOOL)dev ;
@end
