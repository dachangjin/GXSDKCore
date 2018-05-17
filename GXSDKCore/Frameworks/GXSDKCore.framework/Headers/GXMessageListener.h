//
//  GXMessageListener.h
//  GXSDK
//
//  Created by wangwei on 2018/3/21.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#ifndef GXMessageListener_h
#define GXMessageListener_h
#import <Foundation/Foundation.h>

@class GXMessage;
@class GXMessageReceipt;
@class GXConversation;

/**
 消息及附件相关监听
 */
@protocol GXMessageListener <NSObject>

/**
 收到消息
 
 @param message 消息
 */
- (void)onReceiveMessage:(GXMessage *)message;

/**
 收到同步消息
 @discussion 多处登录会同步已发送的消息
 @param message 消息
 */
- (void)onReceiveSynchronizedMessage:(GXMessage *)message;
/**
 发送消息
 
 @param message 消息
 */
- (void)didSendMessage:(GXMessage *)message;

/**
 发送消息失败
 
 @param messageId 消息Id
 */
- (void)didFailToSendMessage:(NSString *)messageId;

/**
 收到消息回执，根据消息回执更新对应消息状态
 
 @param receipt 消息回执
 */
- (void)onReceiveMessageReceipt:(GXMessageReceipt *)receipt;

/**
 服务器文件传输完成
 
 @param messageId 消息Id
 @discussion 消息下载状态应由GXAttachmentDownloadStateServerTransfering改为GXAttachmentDownloadStateInitial
 */
- (void)onServerAttachmentTransferComplete:(NSString *)messageId;

/**
  开始上传回调
 
 @param messageId 附件对应消息Id
 */
- (void)didStartUploadAttachment:(NSString *)messageId;

/**
 继续上传回调
 
 @param messageId 附件对应消息Id
 */
- (void)didContinueUploadAttachment:(NSString *)messageId;

/**
 取消上传回调
 
 @param messageId 附件对应消息Id
 */
- (void)didCancelUploadAttachment:(NSString *)messageId;

/**
 完成上传回调
 
 @param messageId 附件对应消息Id
 */
- (void)didCompleteUploadAttachment:(NSString *)messageId;

/**
 上传失败回调
 
 @param messageId 附件对应消息Id
 */
- (void)didFailUploadAttachment:(NSString *)messageId;

/**
 上传进度回调
 
 @param messageId 附件对应消息Id
 @param fileSize 附件大小
 @param sent 附件已上传大小
 */
- (void)didUploadAttachment:(NSString *)messageId
                   fileSize:(UInt64)fileSize
                       sent:(UInt64)sent;

/**
 开始下载回调
 
 @param messageId 附件对应消息Id
 */
- (void)didStartDownloadAttachment:(NSString *)messageId;

/**
 继续下载回调
 
 @param messageId 附件对应消息Id
 */
- (void)didContinueDownloadAttachment:(NSString *)messageId;

/**
 取消下载回调
 
 @param messageId 附件对应消息Id
 */
- (void)didCancelDownloadAttachment:(NSString *)messageId;

/**
 完成下载回调
 
 @param messageId 附件对应消息Id
 */
- (void)didCompleteDownloadAttachment:(NSString *)messageId;

/**
 下载失败回调
 
 @param messageId 附件对应消息Id
 */
- (void)didFailDownloadAttachment:(NSString *)messageId;

/**
 下载进度回调
 
 @param messageId 附件对应消息Id
 @param fileSize 附件大小
 @param received 已下载大小
 */
- (void)didDownloadAttachment:(NSString *)messageId
                     fileSize:(UInt64)fileSize
                     received:(UInt64)received;
@end


#endif /* GXMessageListener_h */
