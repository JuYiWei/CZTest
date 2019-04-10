//
//  CZLog.h
//  CZTest
//
//  Created by juyiwei on 2019/4/10.
//  Copyright © 2019 居祎炜. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CocoaLumberjack/CocoaLumberjack.h>

#ifdef DEBUG

#define CZDLogVerbose(fmt, ...)   DDLogVerbose((@"%@ [Line %d]\n %s\n" fmt @"\n_"), CZLogLevelVerbosePrefix, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__);
#define CZDLogError(fmt, ...)     DDLogError((@"%@ [Line %d]\n %s\n" fmt @"\n_"), CZLogLevelErrorPrefix, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__);
#define CZDLogWaring(fmt, ...)    DDLogWarn((@"%@ [Line %d]\n %s\n" fmt @"\n_"), CZLogLevelWaringPrefix, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__);
#define CZDLogDebug(fmt, ...)     DDLogDebug((@"%@ [Line %d]\n %s\n" fmt @"\n_"), CZLogLevelDebugPrefix, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__);
#define CZDLogInfo(fmt, ...)      DDLogInfo((@"%@ [Line %d]\n %s\n" fmt @"\n_"), CZLogLevelInfoPrefix, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__);

#else

#define CZDLogVerbose(fmt, ...)
#define CZDLogError(fmt, ...)
#define CZDLogWaring(fmt, ...)
#define CZDLogDebug(fmt, ...)
#define CZDLogInfo(fmt, ...)

#endif

NS_ASSUME_NONNULL_BEGIN

@interface CZLog : NSObject

+ (instancetype)manager;
    
- (void)config;


/**
 显示分享 log 文件，可用在 BaseController 的 摇一摇里，作为 Debug 使用

 @param view view description
 */
- (void)showInfo:(UIView *)view;
    
@end


FOUNDATION_EXTERN NSString *const CZLogLevelVerbosePrefix;
FOUNDATION_EXTERN NSString *const CZLogLevelErrorPrefix;
FOUNDATION_EXTERN NSString *const CZLogLevelWaringPrefix;
FOUNDATION_EXTERN NSString *const CZLogLevelDebugPrefix;
FOUNDATION_EXTERN NSString *const CZLogLevelInfoPrefix;

FOUNDATION_EXTERN NSInteger const ddLogLevel;;

NS_ASSUME_NONNULL_END
