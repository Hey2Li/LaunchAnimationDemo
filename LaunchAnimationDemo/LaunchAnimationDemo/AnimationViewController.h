//
//  AnimationViewController.h
//  LaunchAnimationDemo
//
//  Created by TaiHuiTao on 16/8/12.
//  Copyright © 2016年 Lee2Go. All rights reserved.
//

#import <UIKit/UIKit.h>

#define SCREENH [UIScreen mainScreen].bounds.size.height
#define SCREEMW [UIScreen mainScreen].bounds.size.width
#define PlayFinishedNotify @"PlayFinishedNotify"

@interface AnimationViewController : UIViewController
@property (nonatomic, copy) void (^playFinished)();
@property (nonatomic, strong) NSString *moviePath;//视频路径
@end
