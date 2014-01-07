//
//  AppDelegate.h
//  SampleApp
//
//  Created by Admin on 1/7/14.
//  Copyright (c) 2014 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic,retain) UINavigationController *navigation;
@property (nonatomic,retain) ViewController *viewController;

@end
