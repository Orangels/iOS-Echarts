//
//  PYAxisTick.m
//  iOS-Echarts
//
//  Created by Pluto-Y on 15/10/28.
//  Copyright © 2015年 pluto-y. All rights reserved.
//

#import "PYAxisTick.h"
#import "PYColor.h"
#import "PYLineStyle.h"
#import "PYUtilities.h"

@implementation PYAxisTick

- (instancetype)init
{
    self = [super init];
    if (self) {
        _interval = PYIntervalAuto;
        _onGap = NO;
        _inside = NO;
        _length = @(5);
        _lineStyle = [PYLineStyle new];
        _lineStyle.color = PYRGBA(3, 3, 3, 1);
        _lineStyle.width = @(1);
    }
    return self;
}

@end
