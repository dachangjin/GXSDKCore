//
//  GXContact.h
//  GXSDK
//
//  Created by wangwei on 2018/2/28.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 联系人类型
 */
typedef NS_ENUM(NSInteger , GXContactType){
    /**
     *  一般联系人
     */
    GXContactTypeNormalContact = 0,
    /**
     *  平台联系人
     */
    GXContactTypeContactInPlatform,
    /**
     *  管信联系人
     */
    GXContactTypeGuanXinContact,
} ;


/**
 联系人
 */
@interface GXContact : NSObject


/**
 联系人Id
 */
@property(nonatomic ,copy)NSString *ID;

/**
 联系人类型
 */
@property(nonatomic ,assign)GXContactType type;

/**
 部门Id
 */
@property(nonatomic ,copy)NSString *departmentID;

/**
 部门名称
 */
@property(nonatomic ,copy)NSString *departmentName;

/**
 orgId
 */
@property(nonatomic ,copy)NSString *orgID;

/**
 org名称
 */
@property(nonatomic ,copy)NSString *orgName;

/**
 名字
 */
@property(nonatomic ,copy)NSString *name;

/**
 电话
 */
@property(nonatomic ,copy)NSString *mobile;

/**
 邮箱
 */
@property(nonatomic ,copy)NSString *email;

@end
