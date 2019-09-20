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


NSInteger const ddLogLevel = DDLogLevelAll;

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
    
    
    
}

- (void)motionBegan:(UIEventSubtype)motion withEvent:(UIEvent *)event {
    NSLog(@"1");
    [[CZLog manager] showInfoInView:self.view];
}

@end
