//
//  GXWorkflow.h
//  GXSDK
//
//  Created by wangwei on 2018/4/17.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXWorkflowAction.h"
#import "GXWorkFlowViewDef.h"
/**
 工作流
 */
@interface GXWorkflow : NSObject

///**
// 标题
// */
//@property(nonatomic ,copy)NSString *title;
//@property(nonatomic ,copy)NSString *chatGroupId;
//@property(nonatomic ,copy)NSString *chatGroupName;
//
///**
// 组织Id
// */
//@property(nonatomic ,copy)NSString *orgId;

/**
 操作
 */
@property(nonatomic ,strong)NSArray<GXWorkflowAction *> *actions;

@property(nonatomic ,strong)GXWorkFlowViewDef *viewDef;

/**
 显示信息
 */
@property (nonatomic ,strong)NSArray <NSDictionary <NSString *, NSString *>*>*displayInfo;

/**
 是否已关闭
 */
@property (nonatomic ,assign)BOOL isClosed;
@end
