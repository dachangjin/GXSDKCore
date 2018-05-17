//
//  GXGroupListener.h
//  GXSDK
//
//  Created by wangwei on 2018/3/22.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#ifndef GXGroupListener_h
#define GXGroupListener_h
#import <Foundation/Foundation.h>

@class GXGroup;
@class GXGroupMember;
@class GXGroupApply;
/**
 群相关变化监听
 */
@protocol GXGroupListener <NSObject>

/**
 群较大变化，例如初始化
 */
- (void)didChangeGroups;

/**
添加群
 */
- (void)didAddGroup:(GXGroup *)group;

/**
 更新群信息
 
 @param group 群
 */
- (void)didUpdateGroup:(GXGroup *)group;


/**
 群被删除
 
 @param groupId 群Id
 */
- (void)didDeleteGroup:(NSString *)groupId;

/**
 群成员被删除
 
 @param memberId 成员Id
 @param groupId 群Id
 */
- (void)didRemovemember:(NSString *)memberId
              fromGroup:(NSString *)groupId;

/**
 成员被添加到群
 
 @param member 成员
 @param groupId 群Id
 */
- (void)didAddmember:(GXGroupMember *)member
             toGroup:(NSString *)groupId;

/**
 成员备注更新
 
 @param member 成员
 @param groupId 群Id
 */
- (void)didUpdateMember:(GXGroupMember *)member
                inGroup:(NSString *)groupId;

/**
 收到入群申请/邀请/被拒邀请、申请/退群

 @param groupApply 申请/邀请
 */
- (void)didReceiveGroupApply:(GXGroupApply *)groupApply;
@end




#endif /* GXGroupListener_h */
