//
//  GXGroupMember.h
//  GXSDK
//
//  Created by wangwei on 2018/2/28.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 成员角色
 */
typedef NS_ENUM(NSInteger , GXGroupMemberRole){
    /**
     *  创建人
     */
    GXGroupMemberRoleCreator = 1,
    /**
     *  一般成员
     */
    GXGroupMemberRoleNormal,
    /**
     *  管理人
     */
    GXGroupMemberRoleAdministrator
} ;




/**
 群成员
 */
@interface GXGroupMember : NSObject

/**
 成员Id
 */
@property (nonatomic ,copy)NSString *userId;

/**
 群Id
 */
@property (nonatomic ,copy)NSString *groupId;

/**
 名字
 */
@property(nonatomic ,copy)NSString *name;

/**
 角色
 */
@property(nonatomic ,assign)GXGroupMemberRole role;

/**
 组织Id
 */
@property(nonatomic ,copy)NSString *orgId;

/**
 组织Id
 */
@property(nonatomic ,copy)NSString *orgName;

@end
