//
//  GXChatManager.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXMessageListener.h"
#import "GXMessageHandler.h"

/**
 聊天相关管理类。主要处理消息发送、查询、转发，附件上传下载等操作
 */
@interface GXChatManager : NSObject

/**
 发送消息
 @discussion 若消息含有附件，会自动上传附件。

 @param message 消息
 */
- (void)sendMessage:(GXMessage *)message;

/**
 转发消息到会话

 @param message 消息
 @param conversation 会话
 */
- (void)forwardMessage:(GXMessage *)message
        toConversation:(GXConversation *)conversation;

/**
 根据消息Id查找本地消息

 @param messageId 消息Id
 @return 消息对象
 */
- (GXMessage *)findMessage:(NSString *)messageId;

/**
 查找某会话里面的消息

 @param conversation 会话
 @return 消息数组
 */
- (NSArray <GXMessage *>*)findMessageInConversation:(GXConversation *)conversation;

/**
 上传消息附件。若要监听附件上传状态，请实现相关协议方法，并加入

 @param message 消息
 */
- (void)uploadAttachment:(GXMessage *)message;

/**
 取消上传消息附件

 @param message 消息
 */
- (void)cancelUploadAttachment:(GXMessage *)message;

/**
 下载消息附件

 @param message 消息
 */
- (void)downloadAttachment:(GXMessage *)message;

/**
 暂停下载消息附件

 @param message 消息
 */
- (void)pauseDownloadAttachment:(GXMessage *)message;

/**
 继续下载消息附件

 @param message 消息
 */
- (void)continueDownloadAttachment:(GXMessage *)message;

/**
 获取互联会话历史消息

 @param conversationId 会话Id
 @param completionHandler 回调
 */
- (void)getHistoryMessagesOfWorkflowConversation:(NSString *)conversationId
                                         handler:(void(^)(BOOL success,NSString *error))completionHandler;

/**
 添加消息操作相关监听对象

 @param listener 监听对象
 */
- (void)addMessageListener:(id<GXMessageListener>)listener;

/**
 移除消息操作相关监听对象

 @param listener 监听对象
 */
- (void)removeMessageListener:(id<GXMessageListener>)listener;

/**
 添加消息处理器，处理器会在GXMessageListener对象监听到收到消息或发送消息前对消息进行自定义处理
 @discussion 收到或发送消息时对消息进行统一预处理。例如收到某种类型消息需要将此消息所携带的某些信息存入数据库等。
 @param handler 消息处理器
 */
- (void)addMessageHandler:(id<GXMessageHandler>)handler;

@end
