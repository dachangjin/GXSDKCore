//
//  GXConversation.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 会话类型
 */
typedef NS_ENUM (NSInteger , GXConversationType) {
    /**
     *  单聊
     */
    GXConversationTypeSingleChat,
    /**
     *  群聊
     */
    GXConversationTypeGroupChat,
    /**
     *  流程
     */
    GXConversationTypeWorkflowChat,
};


/**
 会话
 */
@interface GXConversation : NSObject

/**
 会话Id
 @discussion 单聊时为接受者Id,群聊时为群Id
 */
@property(nonatomic ,copy)NSString *Id;

/**
 会话类型
 */
@property(nonatomic ,assign)GXConversationType type;

/**
 组件Id
 @discussion 会话消息发送到具体组件的Id。若会话类型为ConversationTypeOther，此属性不能为空。具体需和后台协商确定
 */
@property(nonatomic ,copy)NSString *componentId;

/**
 账套Id
 @discussion 会话所属的账套Id
 */
@property(nonatomic ,copy)NSString *orgId;

/**
 会话标题
 */
@property(nonatomic ,copy)NSString *title;

@end
