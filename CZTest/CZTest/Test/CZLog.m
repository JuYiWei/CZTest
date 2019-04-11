//
//  CZLog.m
//  CZTest
//
//  Created by juyiwei on 2019/4/10.
//  Copyright © 2019 居祎炜. All rights reserved.
//

#import "CZLog.h"

//NSString *const CZLogLevelWaring = @"⚠️🈲❌⛔️🚫✅❗️❓‼️⁉️❤️🧡💛💚💙💜🖤";

NSString *const CZLogLevelErrorPrefix = @"❌";
NSString *const CZLogLevelWaringPrefix = @"⚠️";
NSString *const CZLogLevelInfoPrefix = @"📄";
NSString *const CZLogLevelDebugPrefix = @"🔧";
NSString *const CZLogLevelVerbosePrefix = @"🔍";

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
        single = [[self alloc] init];
    });
    return single;
}

- (void)config {
    [DDLog addLogger:[DDOSLogger sharedInstance]];
    [DDLog addLogger:self.fileLogger];
}

- (void)showInfoInView:(UIView *)view {
    NSString *path = self.fileLogger.currentLogFileInfo.filePath;
    [self share:path inView:view];
}

- (void)share:(NSString *)path inView:(UIView *)view {
    self.documentController = [UIDocumentInteractionController interactionControllerWithURL:[NSURL fileURLWithPath:path]];
    self.documentController.delegate = self;
    self.documentController.UTI = @"public.data";
    [self.documentController presentOpenInMenuFromRect:CGRectZero inView:view animated:YES];
}

#pragma mark - Getter

- (DDFileLogger *)fileLogger {
    if (!_fileLogger) {
        _fileLogger = [[DDFileLogger alloc] init];
        _fileLogger.rollingFrequency = 60 * 60 * 24; // 24 hour rolling
        _fileLogger.logFileManager.maximumNumberOfLogFiles = 7;
    }
    return _fileLogger;
}

@end
