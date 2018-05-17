//
//  GXWorkFlowAction.h
//  GXSDK
//
//  Created by wangwei on 2018/4/17.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const typeView;
extern NSString *const typeCall;

@interface GXWorkflowAction : NSObject
/**
 类型(typeView/typeCall)
 */
@property(nonatomic ,copy ,readonly)NSString *type;

@end
