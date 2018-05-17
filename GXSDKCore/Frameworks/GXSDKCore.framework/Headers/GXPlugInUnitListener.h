//
//  GXPlugInUnitListener.h
//  GXSDK
//
//  Created by wangwei on 2018/4/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#ifndef GXPlugInUnitListener_h
#define GXPlugInUnitListener_h
#import <Foundation/Foundation.h>

@class GXPlugInUnit;
@protocol GXPlugInUnitListener <NSObject>

/**
 组织插件改变

 @param orgId 组织Id
 */
- (void)plugInUnitDidChangeInOrganization:(NSString *)orgId;

/**
 插件下载进度

 @param plugInUnit 插件
 @param progress 进度
 */
- (void)plugInUnit:(GXPlugInUnit *)plugInUnit downloadProcess:(float)progress;

/**
 插件下载完成

 @param plugInUnit 插件
 */
- (void)completeDownloadPlugInUnit:(GXPlugInUnit *)plugInUnit;
@end

#endif /* GXPlugInUnitListener_h */
