//
//  GXPlugInUnitManager.h
//  GXSDK
//
//  Created by wangwei on 2018/4/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXPlugInUnitListener.h"

@class GXFunction;
@class GXPlugInUnit;

@interface GXPlugInUnitManager : NSObject


/**
 获取相关组织下的插件

 @param orgId 组织Id
 @return 插件数组
 */
- (NSArray <GXPlugInUnit *>*)getPlugInUnitsByOrgId:(NSString *)orgId;

/**
 获取相关组织下的功能

 @param orgId 组织Id
 @return 功能数组
 */
- (NSArray <GXFunction *>*)getFunctionsByOrgId:(NSString *)orgId;

/**
 获取下载进度

 @param plugInUnit 插件
 @return 进度
 */
- (NSProgress *)donwloadProgressByPlugInUnit:(GXPlugInUnit *)plugInUnit;

/**
 添加插件相关监听对象
 
 @param listener 监听对象
 */
- (void)addMessageListener:(id<GXPlugInUnitListener>)listener;

/**
 移除插件相关监听对象
 
 @param listener 监听对象
 */
- (void)removeMessageListener:(id<GXPlugInUnitListener>)listener;


@end
