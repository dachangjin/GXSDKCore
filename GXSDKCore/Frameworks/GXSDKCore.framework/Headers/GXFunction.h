//
//  GXFunction.h
//  GXSDK
//
//  Created by wangwei on 2018/4/25.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 功能
 */
@interface GXFunction : NSObject

/**
 功能ID
 */
@property(nonatomic ,copy)NSString *ID;

/**
 功能名
 */
@property(nonatomic ,copy)NSString *name;

/**
 功能所对应插件ID
 */
@property(nonatomic ,copy)NSString *plugInUnitId;

/**
 功能所对应组织Id
 */
@property(nonatomic ,copy)NSString *orgId;

/**
 功能所对应插件名
 */
@property(nonatomic ,copy)NSString *plugInUnitName;

/**
 功能所访问本地H5页面url
 */
@property(nonatomic ,copy)NSString *url;

/**
 功能所对应图标
 */
@property(nonatomic ,copy)NSString *icon;

/**
 功能页面启动配置
 */
@property(nonatomic ,copy)NSString *launchOptions;

/**
 功能对应菜单Id
 */
@property(nonatomic ,copy)NSString *menuId;

/**
 功能对应菜单名
 */
@property(nonatomic ,copy)NSString *menuName;

/**
 排序标记
 */
@property(nonatomic ,copy)NSString *orderTag;

@end
