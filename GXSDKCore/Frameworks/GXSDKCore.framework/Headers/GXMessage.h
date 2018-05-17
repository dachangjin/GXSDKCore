//
//  GXMessage.h
//  GXSDK
//
//  Created by wangwei on 2018/2/28.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GXConversation;

/**
 消息所携带消息内容类型
 */

/**
 消息内容类型
 */
typedef NS_ENUM(NSUInteger , GXMessageContentType){
    /**
     *  文本消息
     */
    GXMessageContentTypeText = 0,
    /**
     *  图片消息
     */
    GXMessageContentTypeImage,
    /**
     *  语音消息
     */
    GXMessageContentTypeAudio,
    /**
     *  文件消息
     */
    GXMessageContentTypeFile,
    /**
     *  位置消息
     */
    GXMessageContentTypeLocation,
    /**
     *  提示消息
     */
    GXMessageContentTypeNotification,
    /**
     *  自定义流程详情消息
     */
    GXMessageContentTypeWorkflowInfo,
    /**
     *  自定义流程处理消息
     */
    GXMessageContentTypeWorkflowHandle,
    /**
     *  人员参与消息
     */
    GXMessageContentTypeWorkflowJoinInfo,
    /**
     *  自定义消息
     */
    GXMessageContentTypeCustom
} ;



/**
 消息内容协议。
 @discussion 除文本消息外，其他消息会携带需要实现消息内容协议的对象
 */
@protocol GXMessageContentProtocol  <NSObject>

@required

/**
 消息类型方法

 @return 消息类型
 */
- (GXMessageContentType)messageContentType;

@end

/**
 消息去向
 */
typedef NS_ENUM (NSInteger ,GXMessageWay) {
    /**
     *  收到的消息
     */
    GXMessageWayIncoming,
    /**
     *  发送的消息
     */
    GXMessageWayOutgoing
};


/**
 消息状态
 */
typedef NS_ENUM (NSInteger , GXMessageState){
    /**
     *  正在发送
     */
    GXMessageStateSending,
    /**
     *  发送失败
     */
    GXMessageStateSendFailed,
    /**
     *  已发送到服务器
     */
    GXMessageStateSentToServer,
    /**
     *  对方已收到消息（单聊）
     */
    GXMessageStateSentToClient,
    /**
     *  已收到对方消息
     */
    GXMessageStateReceived
};

/**
 消息附件下载状态
 */
typedef NS_ENUM (NSInteger , GXAttachmentDownloadState) {
    /**
     *  没有需要下载的附件
     */
    GXAttachmentDownloadStateNone = 0,
    /**
     *  初始化状态，可下载
     */
    GXAttachmentDownloadStateInitial,
    /**
     *  正在下载
     */
    GXAttachmentDownloadStateDownloading,
    /**
     *  下载已完成
     */
    GXAttachmentDownloadStateCompleted,
    /**
     *  下载失败
     */
    GXAttachmentDownloadStateFailed,
    /**
     *  下载已暂停
     */
    GXAttachmentDownloadStatePaused,
    /**
     *  服务器正在中转中，不可下载。中转成功会更新为GXAttachmentDownloadStateInitial
     */
    GXAttachmentDownloadStateServerTransfering
} ;

/**
 消息附件上传状态
 */
typedef NS_ENUM (NSInteger , GXAttachmentUploadState) {
    /**
     *  没有需要上传的附件
     */
    GXAttachmentUploadStateNone = 0,
    /**
     *  初始化状态，可上传
     */
    GXAttachmentUploadStateInitial,
    /**
     *  正在上传
     */
    GXAttachmentUploadStateUploading,
    /**
     *  已上传
     */
    GXAttachmentUploadStateCompleted,
    /**
     *  上传失败
     */
    GXAttachmentUploadStateFailed,
    /**
     *  上传已取消
     */
    GXAttachmentUploadStateCanceled
};


/**
 消息
 */
@interface GXMessage : NSObject

/**
 消息Id
 */
@property(nonatomic ,copy)NSString *Id;

///**
// 消息fromId,单聊为发送人，群聊为群Id
// */
//@property(nonatomic ,copy)NSString *fromId;

///**
// 消息fromComponentId,消息来源组件Id
// */
//@property(nonatomic ,copy)NSString *fromComponentId;

///**
// 消息toId,单聊问接受者，群聊为群Id
// */
//@property(nonatomic ,copy)NSString *toId;
//
///**
// 消息toComponentId，消息到达组件Id
// */
//@property(nonatomic ,copy)NSString *toComponentId;


/**
 所属会话
 */
@property (nonatomic ,strong)GXConversation *conversation;

/**
 发送人Id
 */
@property(nonatomic ,copy)NSString *senderId;

/**
 发送人名
 */
@property(nonatomic ,copy)NSString *senderName;

/**
 消息具体内容
 @discussion 文本消息则为空
 */
@property (nonatomic ,strong)id<GXMessageContentProtocol> content;

/**
 接收的消息或发送的消息
 */
@property (nonatomic ,assign)GXMessageWay messageWay;

/**
 消息状态
 */
@property (nonatomic ,assign)GXMessageState state;

/**
 消息附件下载状态
 */
@property (nonatomic ,assign)GXAttachmentDownloadState attachmentDownloadState;

/**
 消息附件上传状态
 */
@property (nonatomic ,assign)GXAttachmentUploadState attachmentUploadState;

/**
 时间
 */
@property (nonatomic ,strong)NSDate *time;

/**
 消息文本内容
 */
@property(nonatomic ,copy)NSString *text;

/**
 是否在其他设备收到
 @discussion 切换设备登录，收到离线消息时，判断是否在其他设备已收到
 */
@property (nonatomic ,assign)BOOL isReceived;

/**
 是否播放过
 @discussion 修改这个属性,db 中对应的值对自动更新
 */
@property (nonatomic ,assign)BOOL isPlayed;

/**
 类型标记
 @discussion 用于区分多种自定义消息的类型标记
 */
@property(nonatomic ,copy)NSString *typeTag;

/**
 自定义扩展信息
 @discussion 可自定义增加扩展信息，json字典
 */
@property (nonatomic ,strong)NSDictionary *extInfo;

@end
