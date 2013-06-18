//
//  TabatooDrawer.h
//  TabatooSdk
//
//  Created by Vitaly on 3/28/13.
//  Copyright (c) 2013 Tabatoo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIWebView.h>

typedef enum : NSInteger {
    TabatooAlignHandlerTop = 1,
    TabatooAlignHandlerCenter,
    TabatooAlignHandlerBottom
} TabatooHandlerAlignment;

typedef enum : NSInteger {
    TabatooAlignDrawerLeft = 1,
    TabatooAlignDrawerRight
} TabatooDrawerAlignment;

@protocol TabatooDrawer <NSObject>

- (void)setOpenImage:(UIImage *)image;
- (void)setCloseImage:(UIImage *)image;
- (void)alignHandler:(TabatooHandlerAlignment)alignment;
- (void)alignDrawer:(TabatooDrawerAlignment)alignment;
- (void)showHandler;
- (void)hideHandler;
- (void)openDrawer;
- (void)closeDrawer;

@end
