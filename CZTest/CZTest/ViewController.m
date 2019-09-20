//
//  ViewController.m
//  CZTest
//
//  Created by juyiwei on 2019/4/10.
//  Copyright © 2019 居祎炜. All rights reserved.
//

#import "ViewController.h"
#import "Test/CZLog.h"
#import "Test/CZTest.h"


NSInteger const ddLogLevel = 31;//off=0;error=1;warning=3;info=7;debug=15;vebose=31;all=11111;

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor orangeColor];
    [[CZLog manager] config];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
//    CZ_LOG_INFO(@"123");
    
#ifdef DEBUG
    [[CZLog manager] showInfoInView:self.view];
#endif
    
    NSLog(@"%ld", DDLogLevelOff);
    NSLog(@"%ld", DDLogLevelError);
    NSLog(@"%ld", DDLogLevelWarning);
    NSLog(@"%ld", DDLogLevelInfo);
    NSLog(@"%ld", DDLogLevelDebug);
    NSLog(@"%ld", DDLogLevelVerbose);

    
}

- (void)motionBegan:(UIEventSubtype)motion withEvent:(UIEvent *)event {
    NSLog(@"1");
//    [[CZLog manager] showInfoInView:self.view];
}

@end
