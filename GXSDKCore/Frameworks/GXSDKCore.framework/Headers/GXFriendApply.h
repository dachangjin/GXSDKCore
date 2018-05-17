//
//  GXNewFriendRequest.h
//  GXSDK
//
//  Created by wangwei on 2018/2/28.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 类型
 */
typedef NS_ENUM (NSInteger , GXFriendApplyType) {
    /**
     接收好友请求
     */
    GXFriendApplyTypeReceiveApply = 1,
    /**
     发出好友请求
     */
    GXFriendApplyTypeSendApply = 2,
    /**
     系统推荐
     */
    GXFriendApplyTypeSystemRecommendation = 3
    
};

/**
 好友请求状态
 */
typedef NS_ENUM (NSInteger , GXFriendApplyState) {
    /**
     未处理
     */
    GXFriendApplyStateSuspending = 0,
    /**
     拒绝对方请求
     */
    GXFriendApplyStateDidRefuse = 1,
    /**
     被对方拒绝
     */
    GXFriendApplyStateWasRefused = 2,
    /**
     已经成为好友
     */
    GXFriendApplyStateBeenFriends = 3,
};


/**
 好友请求
 */
@interface GXFriendApply : NSObject

/**
申请人Id
 */
@property(nonatomic ,copy)NSString *userId;

/**
 用户名
 */
@property(nonatomic ,copy)NSString *userName;

/**
 备注
 */
@property(nonatomic ,copy)NSString *remark;

/**
 类型
 */
@property (nonatomic ,assign)GXFriendApplyType type;

/**
 状态
 */
@property (nonatomic ,assign)GXFriendApplyState state;

@end
