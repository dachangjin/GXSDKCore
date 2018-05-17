//
//  GXWorkflowInfoContent.h
//  GXSDK
//
//  Created by wangwei on 2018/4/4.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import "GXMessage.h"

/**
 流程信息内容。
 @discussion 当成功创建一个流程时，服务器会向客户端推送流程信息内容类型的消息
 */
@interface GXWorkflowInfoContent : NSObject <GXMessageContentProtocol>
/**
 分组名
 */
@property(nonatomic ,copy ,readonly)NSString *sectionName;

/**
 分组Id
 */
@property(nonatomic ,copy ,readonly)NSString *sectionId;

/**
 标题
 */
@property(nonatomic ,copy ,readonly)NSString *title;

/**
 插件Id
 */
@property(nonatomic ,copy ,readonly)NSString *plugInUnitId;


@end
