//
//  GXOption.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class GXConnectionConfig;

/**
 SDK配置信息类
 */
@interface GXOption : NSObject

/**
 管信分配的App Key
 */
@property(nonatomic ,copy)NSString *appKey;

/**
 app主色调
 */
@property(nonatomic ,strong)UIColor *mainColor;

/**
 苹果推送证书
 */
@property(nonatomic ,copy)NSString *apnsCerName;

/**
 开发推送证书
 */
@property(nonatomic ,copy)NSString *devApnsCerName;

/**
 是否开发模式
 */
@property (nonatomic ,assign)BOOL isDev;

/**
 客户端版本号
 @discussion 客户端版本号过低后台可强制客户端升级
 */
@property (nonatomic ,assign)UInt16 clientVersionCode;

/**
 socket连接配置信息
 */
@property (nonatomic ,strong)GXConnectionConfig *config;


@end
