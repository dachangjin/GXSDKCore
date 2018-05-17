//
//  GXRequestManager.h
//  GXSDK
//
//  Created by wangwei on 2018/3/7.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXCommandRequest.h"
#import "GXCommandResponse.h"
#import "GXPlugInUnit.h"
#import "GXWorkflow.h"
#import "GXFunction.h"

/**
 请求管理
 */
@interface GXRequestManager : NSObject


/**
 发送异步请求

 @param requset 请求
 @param handler 响应
 */
- (void)sendRequest:(GXCommandRequest *)requset completionHandler:(void(^)(GXCommandResponse *response))handler;


/**
 获取工作流详情

 @param Id 工作流Id
 @param orgId 工作流所属组织Id
 @param handler 回调
 */
- (void)getWorkFlowInfoById:(NSString *)Id orgId:(NSString *)orgId completionHandler:(void(^)(BOOL success,NSString *errorString,GXWorkflow *workFlow))handler;

/**
 获取验证码

 @param handler 回调
 */
- (void)getVerificationCodeByMobile:(NSString *)mobile completionHandler:(void(^)(BOOL success,NSString *sessionId))handler;

/**
 验证手机号和初始化密码

 @param mobile 手机号
 @param password 密码
 @param repeatPassword 确认密码
 @param sessionId 会话Id
 @param verificationCode 手机验证码
 @param handler 回调

 */
- (void)verifyMobileAndPassword:(NSString *)mobile password:(NSString *)password repeatPassword:(NSString *)repeatPassword sessionId:(NSString *)sessionId verificationCode:(NSString *)verificationCode completionHandler:(void(^)(BOOL success,NSString *sessionId))handler;

/**
 初始化密码

 @param password 密码
 @param repeatPassword 确认密码
 @param userId 用户Id
 @param handler 回调
 */
- (void)initalizePassword:(NSString *)password repeatPassword:(NSString *)repeatPassword userId:(NSString *)userId completionHandler:(void(^)(BOOL success,NSString *error))handler;

/**
 验证手机号

 @param mobile 手机号
 @param sessionId 会话Id
 @param verificationCode 手机验证码
 @param handler 回调
 */
- (void)verifiMobile:(NSString *)mobile sessionId:(NSString *)sessionId verificationCode:(NSString *)verificationCode completionHandler:(void(^)(BOOL success,NSString *error))handler;
@end
