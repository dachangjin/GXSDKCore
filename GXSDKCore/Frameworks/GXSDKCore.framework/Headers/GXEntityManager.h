//
//  GXEntityManager.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXEntity.h"

@interface GXEntityManager : NSObject

/**
 将实体存入数据库

 @param entity 实体对象
 */
- (BOOL)persist:(id<GXEntityProtocol>) entity;

/**
 获取实体对象

 @param clz 类
 @param ID id
 @return 实体对象
 */
- (id)get:(Class)clz withId:(id)ID;

/**
 删除实体对象

 @param clz 实体对象类
 @param ID id
 @return 是否成功
 */
- (BOOL)remove:(Class)clz withId:(id)ID;

/**
 删除实体

 @param entity 实体对象
 @return 是否成功
 */
- (BOOL)remove:(id<GXEntityProtocol>)entity;

/**
 更新实体

 @param entity 实体对象
 @return 是否成功
 */
- (BOOL)update:(id<GXEntityProtocol>)entity;

/**
 查询实体对象

 @param clz 实体对象类
 @param where sql条件语句
 @param orderBy sql查询orderBy语句
 @return 查询实体数组(若失败返回nil)
 */
- (NSArray <id<GXEntityProtocol>>*)query:(Class)clz
                                   where:(NSString*)where
                                 orderBy:(NSString*)orderBy, ...;

/**
  查询实体对象

 @param clz 实体对象类
 @param where sql条件语句
 @param orderBy sql查询orderBy语句
 @param start start
 @param limit limit
 @return 查询实体数组(若失败返回nil)
 */
- (NSArray <id<GXEntityProtocol>>*)query:(Class)clz
                                   where:(NSString *)where
                                 orderBy:(NSString *)orderBy
                                   start:(UInt32)start
                                   limit:(UInt32)limit, ...;

/**
 更新某类型实体

 @param clz 实体对象类
 @param values 更新内容
 @param where sql条件语句
 @return 是否成功
 */
- (BOOL)update:(Class)clz
       content:(NSDictionary*)values
         where:(NSString*)where, ...;

/**
  删除某类型实体

 @param clz 实体对象类
 @param where sql删除where语句
 @return 是否成功
 */
- (BOOL)remove:(Class)clz where:(NSString *)where, ...;

/**
 获取实体数

 @param clz 实体对象类
 @param where sql条件语句
 @return 实体数
 */
- (UInt64)count:(Class) clz where:(NSString*)where, ...;


@end
