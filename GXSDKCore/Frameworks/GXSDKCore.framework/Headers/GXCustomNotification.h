//
//  GXNotification.h
//  GXSDK
//
//  Created by wangwei on 2018/3/28.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 系统通知,由服务器向客户端发送，根据typeTag区分通知类型。
 */
@interface GXCustomNotification : NSObject

/**
 通知类型
 */
@property (nonatomic ,strong ,getter=getTypeTag)NSString *typeTag;

/**
 时间,单位毫秒
 */
@property (nonatomic ,assign ,getter=getTime)UInt64 time;

/**
 获取byte值

 @param key 键
 @return key所对应值,若不对应值则返回nil
 */
-(NSNumber*)getByteNumberByKey:(UInt16)key;

/**
 获取short值
 
 @param key 键
 @return key所对应值,若不对应值则返回nil
 */
-(NSNumber*)getShortNumberByKey:(UInt16)key;

/**
 获取int值
 
 @param key 键
 @return key所对应值,若不对应值则返回nil
 */
-(NSNumber*)getIntNumberByKey:(UInt16)key;

/**
 获取long值
 
 @param key 键
 @return key所对应值,若不对应值则返回nil
 */
-(NSNumber*)getLongNumberAttributeByKey:(UInt16)key;

/**
 获取String值
 
 @param key 键
 @return key所对应值,若不对应值则返回nil
 */
-(NSString*)getStringAttributeByKey:(UInt16)key;

/**
 获取Data值
 
 @param key 键
 @return key所对应值,若不对应值则返回nil
 */
-(NSData*)getDataAttributeByKey:(UInt16)key;

@end
