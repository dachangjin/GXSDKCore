//
//  GXContactManager.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXContact.h"
#import "GXContactIcon.h"
#import "GXFriendApply.h"
#import "GXContactListener.h"

/**
 好友来源
 */
typedef NS_ENUM (NSInteger , GXFriendSource) {
    /**
     扫一扫
     */
    GXFriendSourceScanCode = 1,
    /**
    电话
     */
    GXFriendSourceMobile = 2,
    /**
     群
     */
    GXFriendSourceGroup = 3,
    /**
     管信号
     */
    GXFriendSourceGXNumber = 4
};


/**
 GXContactManager提供了联系人以及联系人头像和好友相关的操作。
 */
@interface GXContactManager : NSObject

/**
 本地查询有效的联系人

 @return 联系人数组
 */
- (NSArray <GXContact*>*)findAvailableContacts;

/**
 本地查询有效的关系为同事的联系人

 @return 联系人数组
 */
- (NSArray <GXContact *>*)findAvailableWorkMates;

/**
 根据账套Id本地查询有效的关系为同事的联系人

 @param accountId 账套Id
 @return 联系人数组
 */
- (NSArray <GXContact *>*)findAvailableWorkMatesOfAccount:(NSString *)accountId;

/**
 根据Id本地查询联系人
 
 @param userId Id
 @return 联系人
 */
- (GXContact *)getContactByImNumber:(NSString *)userId;

/**
 根据Id本地查询联系人头像信息，有可能为空
 
 @param userId Id
 @return 头像信息
 */
- (GXContactIcon *)getContactIconByImNumber:(NSString *)userId;

/**
 请求获取联系人头像

 @param userId 联系人Id
 @param completionHandler 完成回调
 */
- (void)getContactIconByImNumber:(NSString *)userId
                         handler:(void(^)(BOOL success,GXContactIcon *icon,NSString *error))completionHandler;

/**
 上传头像
 
 @discussion (头像大小不得超过64k)
 @param iconData 头像数据
 @param completionHandler 完成回调
 */
- (void)uploadIcon:(NSData *)iconData
           handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 发送好友请求

 @param userId 用户Id
 @param completionHandler 完成回调
 */
- (void)sendNewFriendRequest:(NSString *)userId
                    userName:(NSString *)userName
                      remark:(NSString *)remark
                      source:(GXFriendSource *)source
                     extInfo:(NSString *)extInfo
                     handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 修改个人信息对所有人可见/不可见
 
 @param isVisible 是否可见
 @param completionHandler 完成回调
 */
- (void)makePersonalInfoVisible:(BOOL)isVisible
                   toAllHandler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 修改个人信息对某人可见/不可见
 
 @param isVisible 是否可见
 @param uesrId 联系人Id
 @param completionHandler 完成回调
 */
- (void)makePersonalInfoVisible:(BOOL)isVisible
                      toSomeone:(NSString *)uesrId
                        handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 获取联系人头像

 @param userId 联系人Id
 @param isOriginal 是否原图
 @param completionHandler 完成回调
 */
- (void)getContactIconByUserId:(NSString *)userId
                    isOriginal:(BOOL)isOriginal
                       handler:(void(^)(BOOL success,NSData *photoData,NSString *error))completionHandler;

/**
 接受对方好友请求

 @param userId 对方Id
 @param completionHandler 完成回调
 */
- (void)approveNewFriendApply:(NSString *)userId
                     handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 拒绝对方好友申请

 @param userId 对方Id
 @param remark 备注
 @param completionHandler 完成回调
 */
- (void)refuseNewFreindApply:(NSString *)userId
                      remark:(NSString *)remark
                     handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 删除联系人

 @param userId 联系人Id
 @param completionHandler 完成回调
 */
- (void)deleteContact:(NSString *)userId
              handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 搜索好友

 @param keyWorks 关键字可为Id、电话
 @param completionHandler 完成回调
 */
- (void)searchUserByKeyWords:(NSString *)keyWorks
                     handler:(void(^)(BOOL success,
                                      NSString *userId,
                                      NSString *userName,
                                      NSData *photoData,
                                      NSString *error))completionHandler;

/**
 添加联系人变化相关操作监听对象

 @param listener 监听对象
 */
- (void)addContactListener:(id<GXContactListener>)listener;

/**
 移除联系人变化相关操作监听对象

 @param listener 监听对象
 */
- (void)removeContactListener:(id<GXContactListener>)listener;
@end
