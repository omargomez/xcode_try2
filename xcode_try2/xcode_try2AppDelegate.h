//
//  xcode_try2AppDelegate.h
//  xcode_try2
//
//  Created by Omar Gomez on 4/20/11.
//  Copyright 2011 EAFIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@class xcode_try2ViewController;

@interface xcode_try2AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet xcode_try2ViewController *viewController;

@end
