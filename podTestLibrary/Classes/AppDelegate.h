//
//  AppDelegate.h
//  TestOne
//
//  Created by Jarek Yang on 2017/2/5.
//  Copyright © 2017年 Jarek Yang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

