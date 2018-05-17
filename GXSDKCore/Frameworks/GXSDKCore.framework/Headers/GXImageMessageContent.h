//
//  GXImageMessageContent.h
//  GXSDK
//
//  Created by wangwei on 2018/3/1.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXMessage.h"

/**
 图片消息内容
 */
@interface GXImageMessageContent : NSObject <GXMessageContentProtocol>

/**
 图片文件路径
 */
@property(nonatomic ,copy ,readonly)NSString *path;

/**
 图片缩略图数据
 */
@property (nonatomic ,assign , readonly)NSData *thumbData;


/**
 构造函数

 @param path 图片文件路径
 @param thumbData 缩略图数据
 @return 实例对象
 */
- (instancetype)initWithPath:(NSString *)path
         thumbData:(NSData *)thumbData;

@end
