//
//  GXConnectionConfig.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 登录连接相关配置类
 */
@interface GXConnectionConfig : NSObject

/**
 登录Url
 */
@property(nonatomic ,copy)NSString *loginUrl;

/**
 初始化密码Url
 */
@property(nonatomic ,copy)NSString *initializePasswordUrl;

/**
 验证手机Url
 */
@property(nonatomic ,copy)NSString *verifyMobileUrl;

/**
 获取验证码Url
 */
@property(nonatomic ,copy)NSString *getVerificationCodeUrl;

/**
 验证手机号和密码Url
 */
@property(nonatomic ,copy)NSString *verifyMobileAndPasswordUrl;

/**
 登录端口
 */
@property (nonatomic ,assign)UInt16 port;

/**
 im服务器地址
 */
@property(nonatomic ,copy)NSString *server;

/**
 是否支持ssl
 */
@property (nonatomic ,assign)BOOL isEnableSSL;

/**
 登录或请求超时时间（单位:秒）
 */
@property (nonatomic ,assign)UInt16 responseTimeOut;

/**
 消息闲置时间
 @discussion 若超过两次叠加时间socket未收到消息，或未往socket写入消息，socket将断开并且自动重连。socket心跳为每60秒一次。idelTimeOut默认为60(单位:秒)。
 */
@property (nonatomic ,assign)UInt16 idelTimeOut;

@end
