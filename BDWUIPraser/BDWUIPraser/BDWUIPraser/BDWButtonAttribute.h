//
//  BDWButtonAttribute.h
//  TestTimer
//
//  Created by DoubleHH on 16/6/4.
//  Copyright © 2016年 BD. All rights reserved.
//

#import "BDWUIAttribute.h"

@interface BDWButtonAttribute : BDWUIAttribute

@property (nonatomic, strong) UIFont *font;

@property (nonatomic, strong) NSString *title_normal;
@property (nonatomic, strong) NSString *title_highlighted;
@property (nonatomic, strong) NSString *title_disable;

@property (nonatomic, strong) UIColor *color_normal;
@property (nonatomic, strong) UIColor *color_highlighted;
@property (nonatomic, strong) UIColor *color_disable;

@property (nonatomic, strong) NSString *image_normal;
@property (nonatomic, strong) NSString *image_highlighted;
@property (nonatomic, strong) NSString *image_disable;

@property (nonatomic, strong) NSString *background_image_normal;
@property (nonatomic, strong) NSString *background_image_highlighted;
@property (nonatomic, strong) NSString *background_image_disable;

@end
