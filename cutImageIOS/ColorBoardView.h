//
//  ColorBoardView.h
//  cutImageIOS
//
//  Created by vk on 15/9/24.
//  Copyright © 2015年 quxiu8. All rights reserved.
//

#import "DynamicView.h"

@interface ColorBoardView : DynamicView

-(id)initWithRect:(CGRect)viewRect andHiddenPoint:(CGPoint)hiddenPoint andAnimateDuration:(NSTimeInterval)times;

@property (nonatomic, strong) UIColor* lineColor;

@end