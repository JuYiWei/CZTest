//
//  CZLog.h
//  CZTest
//
//  Created by juyiwei on 2019/4/10.
//  Copyright © 2019 居祎炜. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifdef DEBUG

#import <CocoaLumberjack/CocoaLumberjack.h>

/** 错误 */
#define CZ_LOG_ERROR(fmt, ...)      DDLogError((@"%@ [Line %d]\n %s\n" fmt @"\n_"), CZLogLevelErrorPrefix, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__);

/** 警告 */
#define CZ_LOG_WARNING(fmt, ...)    DDLogWarn((@"%@ [Line %d]\n %s\n" fmt @"\n_"), CZLogLevelWaringPrefix, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__);

/** 提示 关键信息 */
#define CZ_LOG_INFO(fmt, ...)       DDLogInfo((@"%@ [Line %d]\n %s\n" fmt @"\n_"), CZLogLevelInfoPrefix, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__);

/** 调试 输入输出 */
#define CZ_LOG_DEBUG(fmt, ...)      DDLogDebug((@"%@ [Line %d]\n %s\n" fmt @"\n_"), CZLogLevelDebugPrefix, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__);

/** 超详细 */
#define CZ_LOG_VERBOSE(fmt, ...)    DDLogVerbose((@"%@ [Line %d]\n %s\n" fmt @"\n_"), CZLogLevelVerbosePrefix, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__);

#else

#define CZ_LOG_ERROR(fmt, ...)
#define CZ_LOG_WARNING(fmt, ...)
#define CZ_LOG_INFO(fmt, ...)
#define CZ_LOG_DEBUG(fmt, ...)
#define CZ_LOG_VERBOSE(fmt, ...)

#endif

NS_ASSUME_NONNULL_BEGIN

@interface CZLog : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/** 单例 */
+ (instancetype)manager;

/** Log 配置 */
- (void)config;

/** 显示分享 log 文件，可用在 BaseController 的 摇一摇里，作为 Debug 使用 */
- (void)showInfoInView:(UIView *)view;

@end


FOUNDATION_EXTERN NSString *const CZLogLevelErrorPrefix;
FOUNDATION_EXTERN NSString *const CZLogLevelWaringPrefix;
FOUNDATION_EXTERN NSString *const CZLogLevelInfoPrefix;
FOUNDATION_EXTERN NSString *const CZLogLevelDebugPrefix;
FOUNDATION_EXTERN NSString *const CZLogLevelVerbosePrefix;

NS_ASSUME_NONNULL_END
