//
//  GXContactIcon.h
//  GXSDK
//
//  Created by wangwei on 2018/2/28.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 头像状态
 */
typedef NS_ENUM(NSInteger , GXIconState){
    /**
     *  未知状态
     */
    GXIconStateUnknown = 1,
    /**
     *  未设置
     */
    GXIconStateNotSet,
    /**
     *  已设置
     */
    GXIconStateSetted,
} ;


/**
 联系人头像
 */
@interface GXContactIcon : NSObject

/**
 用户Id
 */
@property(nonatomic ,strong)NSString *userId;

/**
 缩略图路径
 */
@property(nonatomic ,strong)NSString *thumbPath;

/**
 原始头像路径
 */
@property(nonatomic ,strong)NSString *photoPath;

/**
 状态
 */
@property(nonatomic ,assign)GXIconState state;
@end
