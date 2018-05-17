//
//  GXOrganization.h
//  GXSDK
//
//  Created by wangwei on 2018/5/4.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 组织
 */
@interface GXOrganization : NSObject

/**
 组织Id
 */
@property(nonatomic ,copy)NSString *Id;

/**
 组织名
 */
@property(nonatomic ,copy)NSString *name;

/**
 组织简称
 */
@property(nonatomic ,copy)NSString *shortName;

/**
 组织实例
 */
@property(nonatomic ,copy)NSString *instance;

@end
