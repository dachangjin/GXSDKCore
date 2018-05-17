//
//  GXMessageHandler.h
//  GXSDK
//
//  Created by wangwei on 2018/3/28.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#ifndef GXMessageHandler_h
#define GXMessageHandler_h

@class GXMessage;

@protocol GXMessageHandler <NSObject>

/**
 能否处理收到的消息

 @param message 消息
 @return 结果
 */
- (BOOL)acceptIncomingMessage:(GXMessage *)message;

/**
 能否处理发送的消息

 @param message 消息
 @return 结果
 */
- (BOOL)acceptOutgoingMessage:(GXMessage *)message;

/**
 处理收到的消息

 @param message 消息
 */
- (void)handleIncomingMessage:(GXMessage *)message;

/**
 处理发送的消息

 @param message 消息
 */
- (void)handleOutgoingMessage:(GXMessage *)message;

@end
#endif /* GXMessageHandler_h */
