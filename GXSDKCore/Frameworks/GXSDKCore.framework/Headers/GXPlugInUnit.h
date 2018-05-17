//
//  GXPlugInUnit.h
//  GXSDK
//
//  Created by wangwei on 2018/4/25.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 插件
 */
@interface GXPlugInUnit : NSObject

/**
 插件ID
 */
@property(nonatomic ,copy)NSString *ID;

/**
 插件所属组织Id
 */
@property(nonatomic ,copy)NSString *orgId;

/**
 插件名
 */
@property(nonatomic ,copy)NSString *name;

/**
 下载地址
 */
@property(nonatomic ,copy)NSString *downloadUrl;

/**
 版本
 */
@property(nonatomic ,copy)NSString *version;

/**
 文件hash
 */
@property(nonatomic ,copy)NSString *fileHash;

@end
