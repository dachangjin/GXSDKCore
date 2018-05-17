//
//  GXWorkflowMessageContent.h
//  GXSDK
//
//  Created by wangwei on 2018/4/17.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import "GXMessage.h"
#import "GXWorkflowAction.h"

/**
 流程处理消息，包含流程当前相关信息
 */
@interface GXWorkflowHandleContent : NSObject <GXMessageContentProtocol>
/**
 插件Id
 */
@property(nonatomic , copy ,readonly)NSString *plugInUnitId;

/**
 手机H5显示内容
 */
@property(nonatomic , copy ,readonly)NSString *mobileH5Content;

/**
 显示详情
 */
@property (nonatomic ,strong ,readonly)NSArray <NSDictionary <NSString *, NSString *>*>*displayInfo;

/**
 操作
 */
@property(nonatomic , strong ,readonly)NSArray <GXWorkflowAction *>*actions;

/**
 是否已关闭
 */
@property (nonatomic ,assign ,readonly)BOOL isClosed;
@end
