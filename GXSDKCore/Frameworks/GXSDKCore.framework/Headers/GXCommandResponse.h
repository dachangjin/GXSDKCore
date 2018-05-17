//
//  GXCommandResponse.h
//  GXSDK
//
//  Created by wangwei on 2018/3/7.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 请求响应
 */
@interface GXCommandResponse : NSObject

/**
 响应返回数据
 @discussion json字典或数组，若请求失败则为nil
 */
@property (nullable ,nonatomic ,strong)id responseObject;

/**
 响应错误
 @discussion 若请求成功则为nil
 */
@property (nullable ,nonatomic ,strong)NSError *error;

//-(BOOL)getBoolByKey:(UInt16)key;
//-(short)getShortByKey:(UInt16)key;
//-(int)getIntByKey:(UInt16)key;
//-(long)getLongByKey:(UInt16)key;
//- (nullable NSString *)getStringByKey:(UInt16)key;
//- (nullable NSData *)getDataByKey:(UInt16)key;

@end
