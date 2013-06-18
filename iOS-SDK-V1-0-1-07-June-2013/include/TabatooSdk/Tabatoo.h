//
//  Tabatoo.h
//  TabatooSdk
//
//  Created by Vitaly on 3/18/13.
//  Copyright (c) 2013 Tabatoo. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TabatooDrawer.h"

@interface Tabatoo : NSObject

+ (id)sharedInstance;
- (void)initWithAppId:(NSString *)appId;
- (id<TabatooDrawer>)drawer;

@end
