//
//  GXGroupApply.h
//  GXSDK
//
//  Created by wangwei on 2018/4/2.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
群请求类型
 */
typedef NS_ENUM (NSInteger , GXGroupApplyType) {
    /**
     申请加入
     */
    GXGroupApplyTypeApply = 1,
    /**
     邀请
     */
    GXGroupApplyTypeInvitation = 2,
};

/**
 状态
 */
typedef NS_ENUM (NSInteger , GXGroupApplyState) {
    /**
     未处理
     */
    GXGroupApplyStateSuspending = 1,
    /**
     已加入群(自己或其他人已同意)
     */
    GXGroupApplyTypeHandled = 2,
    /**
     已退出群
     */
    GXGroupApplyTypeQuited = 3
    
};


@interface GXGroupApply : NSObject

/**
 申请人或被邀请人Id
 */
@property(nonatomic ,copy)NSString *userId;

/**
 申请人或被邀请人名字
 */
@property(nonatomic ,copy)NSString *userName;

/**
 群Id
 */
@property(nonatomic ,copy)NSString *groupId;

/**
 群名称
 */
@property(nonatomic ,copy)NSString *groupName;

/**
 备注
 */
@property(nonatomic ,copy)NSString *remark;

/**
 类型
 */
@property(nonatomic ,assign)GXGroupApplyType type;

/**
 状态
 */
@property(nonatomic ,assign)GXGroupApplyState state;
@end
