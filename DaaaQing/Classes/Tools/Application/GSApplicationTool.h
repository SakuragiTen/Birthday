//
//  GSApplicationTool.h
//  DaaaQing
//
//  Created by Fireloli on 17/10/19.
//  Copyright © 2017年 Fireloli. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GSApplicationTool : NSObject


//+ (instancetype)sharedApplication;
SingletonInterface(Application)

- (void)chooseRootControllerWithWindow:(UIWindow *)window;

@end
