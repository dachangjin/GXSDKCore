//
//  GXWorkFlowViewAction.h
//  
//
//  Created by wangwei on 2018/4/17.
//

#import "GXWorkflowAction.h"

@interface GXWorkflowViewAction : GXWorkflowAction

/**
 appId
 */
@property(nonatomic ,copy ,readonly)NSString *appId;

/**
 插件Id
 */
@property(nonatomic ,copy ,readonly)NSString *plugInUnitId;

/**
 组织Id
 */
@property(nonatomic ,copy ,readonly)NSString *orgId;

/**
 路径
 */
@property(nonatomic ,copy ,readonly)NSString *url;

/**
 启动选项
 */
@property(nonatomic ,copy ,readonly)NSString *launchOptions;

@end
