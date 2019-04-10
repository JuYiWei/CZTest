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

+ (UIColor *)randomColor;



+ (NSString *)randomIdentifier;

+ (NSString *)randomNumberIdentifierWithLength:(NSInteger)len;

+ (NSString *)randomEnglishNumberIdentifierWithLength:(NSInteger)len;



+ (NSInteger)randomUnsigned;

+ (NSInteger)randomIntValue:(NSInteger)max;

+ (CGFloat)randomFloatValue:(NSInteger)max;



+ (NSString *)randomString;

+ (NSString *)randomNumberCharacter;

+ (NSString *)randomEnglishCharacter;

+ (NSString *)randomChineseCharacter;


@end

NS_ASSUME_NONNULL_END
