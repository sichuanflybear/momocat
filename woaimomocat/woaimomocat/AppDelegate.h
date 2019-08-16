//
//  AppDelegate.h
//  woaimomocat
//
//  Created by zhangzhichuan on 2019/8/16.
//  Copyright © 2019 BigNerdRanch. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

