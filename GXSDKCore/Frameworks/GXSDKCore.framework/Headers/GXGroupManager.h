//
//  GXGroupManager.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXGroup.h"
#import "GXGroupMember.h"
#import "GXGroupListener.h"

/**
 群组管理类。管理群组以及处理相关操作。
 */
@interface GXGroupManager : NSObject

/**
 查询本地数据库群组

 @return 群组
 */
- (NSArray <GXGroup *>*)findAvailableGroups;

/**
 查询群成员

 @param groupId 群Id
 @return 群成员
 */
- (NSArray <GXGroupMember *>*)findMembersInGroup:(NSString *)groupId;

/**
 创建群
 
 @discussion 部门群不能主动创建
 @param group 群属性
 @param memberIds 群成员Id
 @param completionHandler 完成回调
 */
- (void)createGroup:(GXGroup *)group
        withMembers:(NSArray <NSString *>*)memberIds
            handler:(void(^)(BOOL success,NSString *error))completionHandler;


/**
 更新群,群类型和Id不能更新,群主和管理员权限

 @param group 群属性
 @param completionHandler 完成回调
 */
- (void)updateGroup:(GXGroup *)group
            handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 删除群,群主权限

 @param groupId 群Id
 @param completionHandler 完成回调
 */
- (void)deleteGroup:(NSString *)groupId
            handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 邀请群成员,群主和管理员权限

 @param memberId 群成员Id
 @param groupId 群Id
 @param completionHandler 完成回调
 */
- (void)inviteMember:(NSString *)memberId
             toGroup:(NSString *)groupId
             handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 删除群成员,群主和管理员权限
 
 @discussion 群主可移除管理员,管理员只可移除普通成员
 @param memberId 成员Id
 @param groupId 群Id
 @param completionHandler 完成回调
 */
- (void)removeMember:(NSString *)memberId
           fromGroup:(NSString *)groupId
             handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 更新成员备注,群主和管理员权限
 
 @param memberId 成员Id
 @param remark 备注
 @param groupId 群Id
 @param completionHandler 完成回调
 */
- (void)updateMember:(NSString *)memberId
              remark:(NSString *)remark
             inGroup:(NSString *)groupId
             handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 添加群管理员,群主权限

 @param memberId 成员Id
 @param groupId 群Id
 @param completionHandler 完成回调
 */
- (void)addAdministrator:(NSString *)memberId
                 inGroup:(NSString *)groupId
                 handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 删除管理员,群主权限

 @param memberId 成员Id
 @param groupId 群Id
 @param completionHandler 完成回调
 */
- (void)removeAdministrator:(NSString *)memberId
                 inGroup:(NSString *)groupId
                 handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 同意加入群申请,群主和管理员权限

 @param memberId 成员Id
 @param groupId 群Id
 @param completionHandler 完成回调
 */
- (void)agreeMemberApply:(NSString *)memberId
                 inGroup:(NSString *)groupId
                 handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 申请加入群
 @discussion 若之前已被其他人邀请,则不需要管理人员同意可直接进入群

 @param groupId 群Id
 @param remark 备注
 */
- (void)applyJoinGroup:(NSString *)groupId
                remark:(NSString *)remark
               handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 退出群

 @param groupId 群Id
 */
- (void)quietGroup:(NSString *)groupId
           handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 更新自己在群里的备注

 @param remark 备注
 @param groupId 群Id
 */
- (void)updateRemark:(NSString *)remark
             inGroup:(NSString *)groupId
             handler:(void(^)(BOOL success,NSString *error))completionHandler;
/**
 添加群组变化相关操作监听对象

 @param listener 监听对象
 */
- (void)addGroupListener:(id<GXGroupListener>)listener;

/**
 移除群组变化相关操作监听对象

 @param listener 监听对象
 */
- (void)removeGroupListener:(id<GXGroupListener>)listener;
@end
