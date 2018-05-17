//
//  GXConversationManager.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXRecentSession.h"


/**
 会话变化时监听
 */
@protocol GXConversationListener <NSObject>

/**
 会话发生变化
 */
-(void) recentSessionDidChange;

/**
 清除会话未读消息

 @param recentSessionId 会话Id
 @param count 未读消息数
 */
- (void)didCleanRecentSessionUnReadTagByRecentSessionId:(GXRecentSessionId *)recentSessionId unreadCount:(NSInteger)count;

/**
 删除会话

 @param recentSessionId 会话Id
 */
- (void)didDeleteRecentSessionByRecentSessionId:(GXRecentSessionId *)recentSessionId;

@end


/**
 会话管理类
 @discussion 获取本地最近会话。处理最近会话删除、置顶等操作
 */
@interface GXConversationManager : NSObject

/**
 获取顶层会话

 @param start 查询起始位置
 @param limit 查询最大条数
 @return 会话数组，可能为空
 */
- (NSArray <GXRecentSession *>*)findTopRecentSessionStart:(UInt32)start limit:(UInt32)limit;


/**
 根据顶层会话Id,获取底层会话

 @param recentSessionId 顶层会话Id
 @param start 查询起始位置
 @param limit 查询最大条数
 @return 会话数组，可能为空
 */
- (NSArray <GXRecentSession *>*)findSubRecentSessionByRecentSessionId:(GXRecentSessionId *)recentSessionId start:(UInt32)start limit:(UInt32)limit;

/**
 清除会话未读消息数
 @discussion 若成功会回调- (void)didCleanRecentSessionUnReadTagByRecentSessionId:
 @param recentSessionId 会话Id
 */
- (void)clearMessageUnreadTagByRecentSessionId:(GXRecentSessionId *)recentSessionId;

/**
 删除会话
 @discussion 若成功会回调- (void)didDeleteRecentSessionByRecentSessionId:
 @param recentSessionId 会话Id
 */
- (void)removeMessageByRecentSessionId:(GXRecentSessionId *)recentSessionId;

/**
 置顶会话
 @discussion 若成功会回调- (void)recentSessionDidChange
 @param recentSessionId 会话Id
 */
- (void)stickMessageByRecentSessionId:(GXRecentSessionId *)recentSessionId;

/**
 取消置顶会话
 @discussion 若成功会回调- (void)recentSessionDidChange
 @param recentSessionId 会话Id
 */
- (void)cancelStickByRecentSessionId:(GXRecentSessionId *)recentSessionId;

/**
 设置当前会话

 @param recentChatId 会话Id
 */
- (void)setCurrentSessionWithRecentChatId:(GXRecentSessionId *)recentChatId;

/**
 取消当前会话

 @param recentChatId 会话Id
 */
- (void)clearCurrentSessionWithRecentChatId:(GXRecentSessionId *)recentChatId;

/**
 添加会话变化监听对象

 @param listener 监听对象
 */
- (void)addRecentSessionListener:(id<GXConversationListener>) listener;

/**
 删除会话变化监听对象

 @param listener 监听对象
 */
- (void)removeRecentSessionListener:(id<GXConversationListener>) listener;
@end
