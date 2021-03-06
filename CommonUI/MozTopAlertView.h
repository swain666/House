//
//  MozTopAlertView.h
//  MoeLove
//
//  Created by LuLucius on 14/12/7.
//  Copyright (c) 2014年 MOZ. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    MozAlertTypeInfo,
    MozAlertTypeSuccess,
    MozAlertTypeWarning,
    MozAlertTypeError
} MozAlertType;

@interface MozTopAlertView : UIView

@property(nonatomic, assign)BOOL autoHide;
@property(nonatomic, assign)NSInteger duration;
@property(nonatomic)BOOL hasNav;
//@property(nonatomic, retain)UIView *parentView;

/*
 * btn target
 */
@property (nonatomic, copy) dispatch_block_t doBlock;

/*
 * action after dismiss
 */
@property (nonatomic, copy) dispatch_block_t dismissBlock;

+ (BOOL)hasViewWithParentView:(UIView*)parentView;
+ (void)hideViewWithParentView:(UIView*)parentView;
+ (MozTopAlertView*)viewWithParentView:(UIView*)parentView;

+ (MozTopAlertView*)showWithType:(MozAlertType)type text:(NSString*)text parentView:(UIView*)parentView hasNav:(BOOL)basNav;
+ (MozTopAlertView*)showWithType:(MozAlertType)type text:(NSString*)text doText:(NSString*)doText doBlock:(dispatch_block_t)doBlock parentView:(UIView*)parentView hasNav:(BOOL)basNav;

@end
