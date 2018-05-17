//
//  GXLoginManeger.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXConnectionListener.h"
@class GXConnectionManager;


/**
 消息去向
 */
typedef NS_ENUM (NSInteger ,GXLoginError) {
    /**
     *  没有错误
     */
    GXLoginErrorNone,
    /**
     *  请求错误
     */
    GXLoginErrorRequest,
    /**
     *  手机没有验证
     */
    GXLoginErrorMobileNotValid,
    /**
     *  密码没有验证
     */
    GXLoginErrorPasswordNotValid,
    /**
     *  手机和密码都没验证
     */
    GXLoginErrorMobileAndPasswordNotValid,
    /**
     *  用户名或密码不正确
     */
    GXLoginErrorUserIdOrPasswordNotMatch,
    /**
     *  用户没有IM实例
     */
    GXLoginErrorNoIMInstance,
    /**
     *  客户端版本低
     */
    GXLoginErrorOldClienVersion,
    /**
     *  登录发送冲突
     */
    GXLoginErrorConflict,
    /**
     *  其他原因
     */
    GXLoginErrorOther,
    
};

/**
 登录回调

 @param error 若成功error为nil
 */
typedef void(^LoginHandler)(GXLoginError error,NSString *description);



/**
 连接相关管理类
 */
@interface GXConnectionManager : NSObject


/**
 登录界面手动登录，若登录成功，用户名、密码和token将会自动保存到本地

 @param userId              用户Id
 @param password            密码
 @param token               令牌(在后台绑定的登录token)
 @param completionHandler   完成回调
 */
- (void)loginWithUserId:(NSString *)userId
               password:(NSString *)password
                  token:(NSString *)token
                handler:(LoginHandler)completionHandler;


/**
 自动登录
 @discussion app被系统清除或手动清除时重新打开app时调用此方法。前提是已经成功手动登录过app且未手动退出，用户名、密码和token均保存本地
 */
- (void)connectToServer;


/**
 添加登录、连接状态监听对象

 @param listener 监听代理对象
 */
- (void)addConnectionListener:(id<GXConnectionListener>)listener;


/**
 移除登录、连接监听对象

 @param listener 监听代理对象
 */
- (void)removeConnectionListener:(id<GXConnectionListener>)listener;
@end
