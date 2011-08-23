//
//  dreamcenter_game_libAppDelegate.h
//  dreamcenter_game_lib
//
//  Created by Hong Sheng-Yen on 11/8/23.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class dreamcenter_game_libViewController;

@interface dreamcenter_game_libAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet dreamcenter_game_libViewController *viewController;

@end
