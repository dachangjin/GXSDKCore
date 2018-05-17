//
//  GXAudioMessageContent.h
//  GXSDK
//
//  Created by wangwei on 2018/3/1.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXMessage.h"


/**
 语音消息内容
 */
@interface GXAudioMessageContent : NSObject <GXMessageContentProtocol>

/**
 amr文件路径
 */
@property(nonatomic ,copy ,readonly)NSString *path;

/**
 语音长度，单位秒
 */
@property (nonatomic ,assign)UInt16 duration;


/**
 构造函数

 @param path amr文件路径
 @return 实例对象
 */
- (instancetype)initWithPath:(NSString *)path;
@end
