//
//  GXClient.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GXOption;
@class GXChatManager;
@class GXConnectionManager;
@class GXGroupManager;
@class GXContactManager;
@class GXConversationManager;
@class UIApplication;
@class GXDeviceToken;
@class GXRequestManager;
@class GXEntityManager;
@class GXPlugInUnitManager;
@class GXCustomNotificationManager;
@class GXUserInfoManager;

/**
 SDK主入口类提供初始化，注册，内部管理类管理的功能
 所有管理类会自行懒加载初始化，不需要收到调用初始化函数

 */
@interface GXClient : NSObject

/**
 登录管理类
 */
@property (nonatomic ,strong)GXConnectionManager *connectionManager;

/**
 聊天管理类
 */
@property (nonatomic ,strong)GXChatManager *chatManager;

/**
 会话管理类
 */
@property (nonatomic ,strong)GXConversationManager *conversationManager;

/**
 联系人管理类
 */
@property (nonatomic ,strong)GXContactManager *contactManager;

/**
 群组管理类
 */
@property (nonatomic ,strong)GXGroupManager *groupManager;

/**
 请求管理类
 */
@property (nonatomic ,strong)GXRequestManager *requestManager;

/**
 自定义通知类
 */
@property (nonatomic ,strong)GXCustomNotificationManager *notificationManager;

/**
 实体管理类
 */
@property (nonatomic ,strong)GXEntityManager *entityManager;

/**
 插件管理类
 */
@property (nonatomic ,strong)GXPlugInUnitManager *plugInUnitManager;

/**
 用户信息管理类
 */
@property (nonatomic ,strong)GXUserInfoManager *userInfoManager;

/**
 配置参数
 */
@property (nonatomic ,strong,readonly)GXOption *option;

/**
 设备UUID
 */
@property(nonatomic ,strong, readonly)NSUUID *deviceId;

/**
 远程通知设备Token
 */
@property (nonatomic ,strong)GXDeviceToken *deviceToken;

/**
 获取Client单例

 @return Client单例
 */
+ (GXClient *)sharedClient;

/**
 初始化管信SDK

 @param option 初始化参数
 */
- (void)initializeSDKWithOption:(GXOption *)option;

/**
 设置远程通知提示音

 @param soundFileName 提示音文件名
 @param completionHandler 完成回调
 */
- (void)setNotificationSound:(NSString *)soundFileName
                     handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 app进入后台

 @param application UIApplication
 */
- (void)applicationDidEnterBackground:(UIApplication *)application;

/**
 app将返回前台

 @param application UIApplication
 */
- (void)applicationWillEnterForeground:(UIApplication *)application;

/**
 app将被终结

 @param application app
 */
-(void) applicationWillTerminate:(UIApplication *)application;

/**
 app成功注册远程通知

 @param application app
 @param deviceToken 设备token
 */
-(void) application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;

/**
 app注册远程通知失败

 @param application app
 @param error 失败错误
 */
-(void) application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
@end
