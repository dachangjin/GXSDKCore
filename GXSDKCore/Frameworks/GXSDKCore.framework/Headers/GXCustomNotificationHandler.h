//
//  GXCustomNotificationHandler.h
//  GXSDK
//
//  Created by wangwei on 2018/3/28.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#ifndef GXCustomNotificationHandler_h
#define GXCustomNotificationHandler_h
#import <Foundation/Foundation.h>

@class GXCustomNotification;

/**
 自定义通知处理器
 */
@protocol GXCustomNotificationHandler <NSObject>

/**
 能否处理

 @param notification 通知
 @return 能否处理
 */
- (BOOL)accept:(GXCustomNotification*)notification;

/**
 处理自定义通知

 @param notification 通知
 @return 是否成功处理
 */
- (BOOL)handle:(GXCustomNotification*)notification;
@end
#endif /* GXCustomNotificationHandler_h */
