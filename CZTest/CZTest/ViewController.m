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

@interface ViewController ()
@property (nonatomic, strong) CZLog *log;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [[CZLog manager] config];
    
    
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    CZDLogInfo(@"123");
}

- (void)motionBegan:(UIEventSubtype)motion withEvent:(UIEvent *)event {
    NSLog(@"1");
    [[CZLog manager] showInfo:self.view];
}

@end
