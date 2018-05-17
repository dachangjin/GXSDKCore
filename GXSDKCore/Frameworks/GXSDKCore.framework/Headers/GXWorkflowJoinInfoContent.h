//
//  GXWorkflowJoinInfoContent.h
//  GXSDK
//
//  Created by wangwei on 2018/4/18.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import "GXMessage.h"


/**
 流程中人员参与消息
 */
@interface GXWorkflowJoinInfoContent : NSObject <GXMessageContentProtocol>

/**
 参与人员Id
 */
@property(nonatomic , copy ,readonly)NSString *userId;

/**
 参与人员名
 */
@property(nonatomic , copy ,readonly)NSString *userName;

/**
 参与人员所属组织Id
 */
@property(nonatomic , copy ,readonly)NSString *userOrgId;

/**
 参与人员所属组织短名
 */
@property(nonatomic , copy ,readonly)NSString *userOrgShortName;

@end
