//
//  GXRecentSession.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 最近会话Id
 */
@interface GXRecentSessionId : NSObject

/**
 类型Id
 @discussion 会话类型
 */
@property(nonatomic ,copy ,readonly)NSString *typeId;

/**
 分组Id
 @discussion 会话分组
 */
@property(nonatomic ,copy ,readonly)NSString *sectionId;

/**
 会话Id
 @discussion 单聊为对方userId,群聊为群Id或流程Id
 */
@property(nonatomic ,copy ,readonly)NSString *chatId;

///**
// 组织Id
// @discussion 会话所属的组织Id
// */
//@property(nonatomic ,copy ,readonly)NSString *orgId;

///**
// 构造函数
//
// @param typeId              类型Id
// @param sectionId           分组Id
// @param chatId              会话Id
// @return                    GXRecentSessionId
// */
//- (id)initWithTypeId:(NSString *)typeId
//           sectionId:(NSString *)sectionId
//              chatId:(NSString *)chatId
//               orgId:(NSString *)orgId;

/**
 构造函数
 
 @param typeId              类型Id
 @param sectionId           分组Id
 @param chatId              会话Id
 @return                    GXRecentSessionId
 */
- (id)initWithTypeId:(NSString *)typeId
           sectionId:(NSString *)sectionId
              chatId:(NSString *)chatId;

@end



/**
 会话类型
 */
typedef NS_ENUM (NSInteger , GXRecentSessionState) {
    /**
     *  正在发送
     */
    GXRecentSessionStateSending = 0,
    /**
     *  发送失败
     */
    GXRecentSessionStateSendFailed,
    /**
     *  已发送到服务器
     */
    GXRecentSessionStateSentToServer,
    /**
     *  对方已经接受
     */
    GXRecentSessionStateSentToClient,
    /**
     *  已收到
     */
    GXRecentSessionStateReceived
};

/**
 *最近会话用于表示会话列表页的数据模型。当用户发送，收取及删除消息时，都会同时去修改最近会话。
 *会话分为顶层会话和底层会话。顶层会话表示在最上层会话列表中会话。当点击顶层会话列表某个会话时，根据当前会话的类型得到的一类会话，此时是的这类会话为某个顶层会话的子会话，即底层会话。
 *当收到或者发送一条消息时，会自动生成这个消息对应的最近会话，包括顶层会话和底层会话。
 */

@interface GXRecentSession : NSObject

/**
 会话Id
 */
@property (nonatomic ,strong)GXRecentSessionId *Id;

/**
标题
 */
@property(nonatomic ,copy)NSString *subject;

/**
 内容
 */
@property(nonatomic ,copy)NSString *content;

/**
 组件Id
 @discussion 会话消息发送到具体组件的Id
 */
@property(nonatomic ,copy)NSString *chatComponentId;

/**
 组织Id
 @discussion 会话所属的组织Id
 */
@property(nonatomic ,copy)NSString *orgId;

/**
 上一层会话类型
 @discussion 若此会话为顶层会话则为nil
 */
@property(nonatomic ,copy)NSString *parentType;

/**
 最后更新时间
 */
@property (nonatomic ,strong)NSDate *lastTime;

/**
 未读消息数
 */
@property (nonatomic ,assign)NSInteger unreadCount;

/**
 当前会话最新消息状态
 */
@property (nonatomic ,assign)GXRecentSessionState state;

/**
 是否为顶层会话
 */
@property (nonatomic ,assign )BOOL isTopRecentSession;

/**
 会话排序优先级
 @discussion 默认先根据此属性排序，然后根据lastTime排序。数值越大表示优先级越高
 */
@property (nonatomic ,assign)NSInteger priority;

/**
 最后一次更新时的消息Id
 */
@property(nonatomic ,copy)NSString *lastMessageId;

/**
 是否隐藏
 */
@property (nonatomic ,assign)BOOL isHiden;


@end
