//
//  GXCustomNotificationManager.h
//  GXSDK
//
//  Created by wangwei on 2018/3/28.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXCustomNotification.h"
#import "GXCustomNotificationHandler.h"

@interface GXCustomNotificationManager : NSObject

/**
 添加自定义通知处理器

 @param handler 处理器
 */
- (void)addNotificationHandler:(id<GXCustomNotificationHandler>)handler;

@end
