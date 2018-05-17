//
//  GXRecentSessionTypeProtocol.h
//  管信
//
//  Created by 陶建凤 on 15/7/21.
//  Copyright © 2015年 ExecuteSystem. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class GXRecentSession;
@class GXMessage;

@protocol GXRecentSessionTypeProtocol <NSObject>
+ (NSString *) typeId;
- (GXRecentSession *) getRecentChatFromIncomingMessage:(GXMessage *) message;
- (GXRecentSession *) getRecentChatFromOutgoingMessage:(GXMessage *) message;
- (UIImage *) getIconByRecentChat:(GXRecentSession *)GXRecentSession;
@optional
- (BOOL)SeparatedByComponengtIdOnTop;
@end
