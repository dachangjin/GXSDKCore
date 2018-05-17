//
//  GXNotificationContent.h
//  GXSDK
//
//  Created by wangwei on 2018/4/4.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import "GXMessage.h"


/**
 提示消息
 */
@interface GXNotificationContent : NSObject<GXMessageContentProtocol>

/**
 信息提示说明
 */
@property(nonatomic ,copy ,readonly)NSString *info;


/**
 构造函数

 @param info 信息提示说明
 @return 对象
 */
- (id)initWithInfo:(NSString *)info;

@end
