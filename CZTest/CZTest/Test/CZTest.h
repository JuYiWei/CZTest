//
//  CZTest.h
//  CZTest
//
//  Created by juyiwei on 2019/4/10.
//  Copyright © 2019 居祎炜. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CZTest : NSObject

#pragma mark - 颜色

/**
 随机颜色

 @return return value description
 */
+ (UIColor *)randomColor;

#pragma mark - 随机 ID

/**
 随机标准 ID

 @return return value description
 */
+ (NSString *)randomIdentifier;

/**
 随机数字 ID 指定位数

 @param len len description
 @return return value description
 */
+ (NSString *)randomNumberIdentifierWithLength:(NSInteger)len;

/**
 随机英文数字 ID 指定位数

 @param len len description
 @return return value description
 */
+ (NSString *)randomEnglishNumberIdentifierWithLength:(NSInteger)len;

#pragma mark - 随机数值

/**
 随机正负

 @return return value description
 */
+ (NSInteger)randomUnsigned;

/**
 随机整数

 @param max max description
 @return return value description
 */
+ (NSInteger)randomIntValue:(NSInteger)max;

/**
 随机小数

 @param max max description
 @return return value description
 */
+ (CGFloat)randomFloatValue:(NSInteger)max;

#pragma mark - 随机字符串

/**
 随机字符

 @return return value description
 */
+ (NSString *)randomString;

/**
 随机字符 指定长度

 @param len len description
 @return return value description
 */
+ (NSString *)randomStringWithLength:(NSInteger)len;

/**
 随机数字字母符号 指定长度

 @param len len description
 @return return value description
 */
+ (NSString *)randomEnglishStringWithLength:(NSInteger)len;

/**
 随机中文字符 指定长度

 @param len len description
 @return return value description
 */
+ (NSString *)randomChineseStringWithLength:(NSInteger)len;

/**
 随机数字

 @return return value description
 */
+ (NSString *)randomNumberCharacter;

/**
 随机字母

 @return return value description
 */
+ (NSString *)randomEnglishCharacter;

/**
 随机数字字母符号

 @return return value description
 */
+ (NSString *)randomChineseCharacter;

@end

NS_ASSUME_NONNULL_END
