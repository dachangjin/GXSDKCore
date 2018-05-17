//
//  GXEntity.h
//  GXSDK
//
//  Created by wangwei on 2018/2/27.
//  Copyright © 2018年 zhixl. All rights reserved.
//

#import <Foundation/Foundation.h>

#define USER_AWARE(_userAware) \
profile.userAware = _userAware;

#define SITE_AWARE(_siteAware) \
profile.siteAware = _siteAware;

#define BEGIN_DECLARE_ENTITY(_tableName) \
+ (GXEntityProfile*)getEntityProfile \
{   \
GXEntityProfile *profile = [[GXEntityProfile alloc] init]; \
profile.tableName = _tableName; \
profile.userAware = YES; \
profile.siteAware = YES; \
NSMutableArray *propertyMap = profile.propertyMaps;

#define ID(_property, _column) \
profile.idProfile.idPropertyName = _property;\
[profile.idProfile.idPropertyMaps addObject:[[GXPropertyMap alloc] initProperty:_property column:_column type:GXPropertyTypeString]];

#define BEGIN_COMPOSITE_ID(_property) \
profile.idProfile.idPropertyName = _property; \
profile.idProfile.composite = YES;\
propertyMap = profile.idProfile.idPropertyMaps;

#define END_COMPOSITE_ID \
propertyMap = profile.propertyMaps;

#define PROPERTY(_property, _column) \
[propertyMap addObject:[[GXPropertyMap alloc] initProperty:_property column:_column type:GXPropertyTypeString]];

#define END_DECLARE_ENTITY \
return profile;}



/**
 类型
 */
typedef NS_ENUM (NSInteger , GXPropertyType) {
    /**
     字符串
     */
    GXPropertyTypeString,
    /**
     数字
     */
    GXPropertyTypeNumber,
    /**
     时间
     */
    GXPropertyTypeDate,
    /**
     Data
     */
    GXPropertyTypeBlob,
    /**
     UUID
     */
    GXPropertyTypeUUID,
    /**
     其他
     */
    GXPropertyTypeOther
} ;

@interface GXPropertyMap : NSObject
- (id)initProperty:(NSString*)propertyName
            column:(NSString*)columnName
              type:(GXPropertyType)type;

@property (nonatomic, strong) NSString* propertyName;
@property (nonatomic, strong) NSString* columnName;
@property (nonatomic, assign) GXPropertyType type;
@end


@interface GXIdProfile : NSObject
@property (nonatomic, strong, readonly) NSMutableArray* idPropertyMaps;
@property (nonatomic, assign) BOOL composite;
@property (nonatomic, strong) Class idClass;
@property (nonatomic, strong) NSString* idPropertyName;
@end

@interface GXEntityProfile : NSObject
@property (nonatomic, strong) NSString* tableName;
@property (nonatomic, strong, readonly) GXIdProfile* idProfile;
@property (nonatomic, strong, readonly) NSMutableArray* propertyMaps;
@property (nonatomic, assign) BOOL userAware;
@property (nonatomic ,assign)BOOL siteAware;
@end

@protocol GXEntityProtocol <NSObject>

+ (GXEntityProfile*)getEntityProfile;

@end

@protocol GXEntityPropertyToDataProtocol <NSCoding>

- (void)encodeWithCoder:(NSCoder *)aCoder;
- (instancetype)initWithCoder:(NSCoder *)aDecoder;

@end

