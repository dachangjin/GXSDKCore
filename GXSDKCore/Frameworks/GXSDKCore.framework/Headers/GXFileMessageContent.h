//
//  GXFileMessageContent.h
//  GXSDK
//
//  Created by wangwei on 2018/3/1.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXMessage.h"


/**
 文件消息内容
 */
@interface GXFileMessageContent : NSObject <GXMessageContentProtocol>


/**
 文件路径
 */
@property(nonatomic ,copy ,readonly)NSString *path;


/**
 文件大小
 */
@property (nonatomic ,assign ,readonly)UInt64 fileSize;

/**
 文件MIMEType
 */
@property(nonatomic ,copy, readonly)NSString *MIMEType;

/**
 构造函数

 @param path 文件路径
 @param fileSize 文件大小
 @return 实例对象
 */
- (instancetype)initWithPath:(NSString *)path
                    fileSize:(UInt64)fileSize
                    MIMEType:(NSString *)MIMEType;
@end
