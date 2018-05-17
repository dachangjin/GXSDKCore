//
//  GXConnectionListener.h
//  GXSDK
//
//  Created by wangwei on 2018/3/12.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#ifndef GXConnectionListener_h
#define GXConnectionListener_h

#import <Foundation/Foundation.h>

/**
 登录连接状态相关监听
 */
@protocol GXConnectionListener  <NSObject>

/**
 开始重连连接
 */
-(void)didStartReconnect;

/**
 连接关闭
 */
-(void)connectionDidClose;

/**
 连接成功，即登录成功
 */
-(void)didConnect;

/**
 连接失败
 */
-(void)reconnectDidFailwithError:(NSError *)error;
@end


#endif /* GXConnectionListener_h */
