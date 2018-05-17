//
//  GXMessageReceipt.h
//  GXSDK
//
//  Created by wangwei on 2018/3/1.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 消息回执
 */
typedef NS_ENUM(NSUInteger , GXMessageReceiptState){
    /**
     *  已发送到服务器
     */
    GXMessageReceiptStateClientToServer = 0,
    /**
     *  对方已收到消息(单聊)
     */
    GXMessageReceiptStateClientToClient = 1,
} ;

/**
 消息回执类。用户成功发送消息后会收到消息回执，根据消息回执的状态判断消息状态
 */
@interface GXMessageReceipt : NSObject

/**
 消息Id
 */
@property(nonatomic ,copy)NSString *messageId;

/**
 回执状态
 */
@property (nonatomic ,assign)GXMessageReceiptState state;

/**
 时间
 */
@property (nonatomic ,strong)NSDate *time;

@end
