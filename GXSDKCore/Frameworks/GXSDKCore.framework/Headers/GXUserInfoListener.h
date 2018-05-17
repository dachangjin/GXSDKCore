//
//  GXUserInfoListener.h
//  GXSDK
//
//  Created by wangwei on 2018/5/4.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#ifndef GXUserInfoListener_h
#define GXUserInfoListener_h
@class GXOrganization;

@protocol GXUserInfoListener

/**
 加入组织

 @param organization 组织
 */
- (void)didJoinOrganization:(GXOrganization *)organization;

/**
 离开组织

 @param orgId 组织Id
 */
- (void)didLeaveOrganization:(NSString *)orgId;

@end

#endif /* GXUserInfoListener_h */
