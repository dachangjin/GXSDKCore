//
//  GXUserInfoManager.h
//  GXSDK
//
//  Created by wangwei on 2018/5/4.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GXOrganization.h"
#import "GXUserInfoListener.h"

@interface GXUserInfoManager : NSObject

/**
 获取所在全部组织

 @return 组织
 */
- (NSArray <GXOrganization *>*)getOrganization;

/**
 获取对应组织

 @param orgId 组织Id
 @return 组织
 */
- (GXOrganization *)getOrganizationById:(NSString *)orgId;

/**
 添加组织变化监听对象

 @param listener 监听对象
 */
- (void)addUserInfoListener:(id<GXUserInfoListener>)listener;

/**
 删除组织变化监听对象

 @param listener 监听对象
 */
- (void)removeUserInfoListener:(id<GXUserInfoListener>)listener;
@end
