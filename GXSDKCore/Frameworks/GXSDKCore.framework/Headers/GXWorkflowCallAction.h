//
//  GXWorkFlowCallAction.h
//  GXSDK
//
//  Created by wangwei on 2018/4/17.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import "GXWorkflowAction.h"

@interface GXWorkflowCallAction : GXWorkflowAction

/**
 图标
 */
@property(nonatomic ,copy ,readonly)NSString *icon;

/**
 名称
 */
@property(nonatomic ,copy ,readonly)NSString *name;

/**
 插件Id
 */
@property(nonatomic ,copy ,readonly)NSString *plugInUnitId;

/**
 后台处理类名
 */
@property(nonatomic ,copy ,readonly)NSString *handleClassName;

/**
 命令
 */
@property(nonatomic ,copy ,readonly)NSString *command;

/**
 确认信息
 */
@property(nonatomic ,copy ,readonly)NSString *confirmMessage;

/**
 是否需要确认
 */
@property (nonatomic ,assign ,readonly)BOOL needConfirm;

@end
