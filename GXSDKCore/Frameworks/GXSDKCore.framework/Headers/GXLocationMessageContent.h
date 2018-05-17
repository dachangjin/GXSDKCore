//
//  GXLocationMessageContent.h
//  GXSDK
//
//  Created by wangwei on 2018/3/1.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXMessage.h"

/**
 位置消息内容
 */
@interface GXLocationMessageContent : NSObject <GXMessageContentProtocol>

/**
 纬度
 */
@property (nonatomic ,assign ,readonly)double latitude;

/**
 经度
 */
@property (nonatomic ,assign ,readonly)double longitude;

/**
 位置描述
 */
@property(nonatomic ,copy ,readonly)NSString *locationDescription;

/**
 构造方法

 @param latitude 纬度
 @param longitude 经度
 @param locationDescription 位置描述
 @return 实例对象
 */
- (instancetype)initWithLatitude:(double)latitude
                       longitude:(double)longitude
              locationDescription:(NSString *)locationDescription;
@end
