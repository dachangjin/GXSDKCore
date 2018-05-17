//
//  GXGroup.h
//  GXSDK
//
//  Created by wangwei on 2018/2/28.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 群类型
 */
typedef NS_ENUM (NSInteger , GXGroupType) {
    /**
     部门群
     @discussion 创建部门时自动创建，不能删除，群成员为部门所属员工
     */
    GXGroupTypeDepartment = 1,
    /**
     公司群
     @discussion 用户创建，成员只能是同事
     */
    GXGroupTypeEnterprise,
    /**
     个人群
     @discussion 用户自己创建，成员可是同事，也可是好友
     */
    GXGroupTypePersonal,
    /**
     管信群
     */
    GXGroupTypeGX
} ;

/**
 群组
 */
@interface GXGroup : NSObject

/**
 群Id
 */
@property(nonatomic ,copy)NSString *ID;

/**
 群名称
 */
@property(nonatomic ,copy)NSString *name;

/**
 群类型
 */
@property (nonatomic, assign)GXGroupType type;

/**
 群大小
 */
@property(nonatomic ,assign)NSInteger size;

/**
 群备注
 */
@property(nonatomic ,copy)NSString *remark;
//
/**
 创建时间
 */
@property(nonatomic ,copy)NSDate *createDate;

/**
 群所在账套号
 */
@property(nonatomic ,copy)NSString *orgId;

/**
 是否开放加入群
 */
@property(nonatomic ,assign)BOOL isOpenToJoinGroup;

@end
