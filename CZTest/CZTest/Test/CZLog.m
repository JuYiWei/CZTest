//
//  CZLog.m
//  CZTest
//
//  Created by juyiwei on 2019/4/10.
//  Copyright © 2019 居祎炜. All rights reserved.
//

#import "CZLog.h"

//NSString *const CZLogLevelWaring = @"⚠️🈲❌⛔️🚫✅❗️❓‼️⁉️❤️🧡💛💚💙💜🖤";
NSString *const CZLogLevelVerbosePrefix = @"✅";
NSString *const CZLogLevelErrorPrefix = @"❌";
NSString *const CZLogLevelWaringPrefix = @"⚠️";
NSString *const CZLogLevelDebugPrefix = @"🔧";
NSString *const CZLogLevelInfoPrefix = @"📄";

NSInteger const ddLogLevel = DDLogLevelAll;

@interface CZLog ()<UIDocumentInteractionControllerDelegate>
@property (nonatomic, strong) DDFileLogger *fileLogger;
@property (nonatomic, strong) UIDocumentInteractionController *documentController;

@end

@implementation CZLog

static CZLog *single;
+ (instancetype)manager {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        single = [[CZLog alloc] init];
    });
    return single;
}

- (void)config {
#if DEBUG
    [DDLog addLogger:[DDOSLogger sharedInstance]]; // Uses os_log
    self.fileLogger = [[DDFileLogger alloc] init]; // File Logger
    self.fileLogger.rollingFrequency = 60 * 60 * 24; // 24 hour rolling
    self.fileLogger.logFileManager.maximumNumberOfLogFiles = 7;
    [DDLog addLogger:self.fileLogger];
#endif
}

- (void)showInfo:(UIView *)view {
    NSString *path = self.fileLogger.currentLogFileInfo.filePath;
    [self share:path inView:view];
}

- (void)share:(NSString *)path inView:(UIView *)view {
    self.documentController = [UIDocumentInteractionController interactionControllerWithURL:[NSURL fileURLWithPath:path]];
    self.documentController.delegate = self;
    self.documentController.UTI = @"public.data";
    [self.documentController presentOpenInMenuFromRect:CGRectZero inView:view animated:YES];
}

@end
