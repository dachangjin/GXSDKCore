//
//  GXCustomMessageContent.h
//  GXSDK
//
//  Created by wangwei on 2018/3/1.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXMessage.h"

/**
 自定义消息内容附件协议
 @discussion 需要将自定义消息附件转化问NSData对象传输，所以需要实现NSCoding协议。若消息中有文件需要上传或下载需要实现以下协议方法。发送消息时若- (BOOL)hasFile返回YES且- (NSString *)filePath返回的路径存在可用文件，则发送消息时会自动上传文件。收到消息时根据- (NSString *)fileId返回的文件Id手动下载
 */
@protocol GXCustomMessageAttachmentProtocol <NSCoding>
@optional

///**
// 是否有文件需要下载或上传
//
// @return 是否有文件需要下载或上传
// */
//- (BOOL)hasFile;
//
//
///**
// 文件本地路径
//
// @return 本地路径
// */
//- (NSString *)filePath;
//
//
///**
// 文件下载Id
//
// @return 文件id
// */
//- (NSString *)fileId;

@end



/**
 自定义消息内容
 */
@interface GXCustomMessageContent : NSObject <GXMessageContentProtocol>


/**
 自定义消息内容附件
 */
@property (nonatomic ,strong)id<GXCustomMessageAttachmentProtocol> attachment;

@end
