//
//  GXContactListener.h
//  GXSDK
//
//  Created by wangwei on 2018/3/21.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#ifndef GXContactListener_h
#define GXContactListener_h
#import <Foundation/Foundation.h>

@class GXContact;
@class GXFriendApply;

/**
 联系人变化时监听，回调时本地数据库已经更新
 */
@protocol GXContactListener <NSObject>

/**
 联系人整体变化较大时回调，例如完成初始化联系人
 */
- (void)contactDidChange;

/**
 添加联系人
 */
- (void)didAddContact:(GXContact *)contact;

/**
 修改联系人
 */
- (void)didUpdateContact:(GXContact *)contact;

/**
 删除联系人
 
 @param UserId 联系人Id
 */
- (void)didRemoveContact:(NSString *)UserId;

/**
 联系人头像更新

 @param userId 联系人Id
 @param thumbData 缩略图数据
 */
- (void)didUpdateContact:(NSString *)userId
                    icon:(NSData *)thumbData;

/**
 收到好友请求
 
 @param request 请求
 */
- (void)didReceiveNewFriendRequest:(GXFriendApply *)request;

/**
 对方同意添加好友
 
 @param request 请求
 */
- (void)newFriendRequestWasApproved:(GXFriendApply *)request;

/**
 好友请求被拒绝
 
 @param request 请求
 */
- (void)newFriendRequestWasRefused:(GXFriendApply *)request;

@end
#endif /* GXContactListener_h */
