//
//  GXRequest.h
//  GXSDK
//
//  Created by wangwei on 2018/3/7.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 网络请求
 */
@interface GXCommandRequest : NSObject

/**
 请求命令
 */
@property(nonatomic ,copy)NSString *command;

/**
 请求所发至组件Id
 */
@property(nonatomic ,copy)NSString *componentId;

/**
 请求参数
 @discussion json字典
 */
@property (nonatomic ,strong)NSDictionary *requestParams;

@end
