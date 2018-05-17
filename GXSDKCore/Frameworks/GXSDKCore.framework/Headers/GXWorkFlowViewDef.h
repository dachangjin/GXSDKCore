//
//  GXWorkFlowViewDef.h
//  GXSDK
//
//  Created by wangwei on 2018/4/25.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GXWorkFlowViewDef : NSObject
@property(nonatomic ,copy ,readonly)NSString *instance;
@property(nonatomic ,copy ,readonly)NSString *plugInUnitId;
@property(nonatomic ,copy ,readonly)NSString *url;
@property(nonatomic ,copy ,readonly)NSString *launchOptions;

- (id)initWithDic:(NSDictionary *)dic;

@end
