//
//  PYForceSeries.h
//  iOS-Echarts
//
//  Created by Pluto Y on 7/22/16.
//  Copyright © 2016 pluto-y. All rights reserved.
//

#import "PYSeries.h"
#import "PYNodes.h"
#import "PYUtilities.h"

@class PYCategories, PYLinks;

/**
 *
 *  You can goto this website for references:
 *  http://echarts.baidu.com/echarts2/doc/doc.html#nodes(data)
 *
 */
@interface PYForceNodes : PYNodes

@property (nonatomic, strong) NSMutableArray *initial;
@property (nonatomic, assign) BOOL fixX;
@property (nonatomic, assign) BOOL fixY;
@property (nonatomic, assign) BOOL draggable;

@end

extern NSString * const PYForceSeriesRoamScale;
extern NSString * const PYForceSeriesRoamMove;

/**
 *
 *  You can goto this website for references:
 *  http://echarts.baidu.com/echarts2/doc/doc.html#SeriesForce
 *
 */
@interface PYForceSeries : PYSeries

@property (nonatomic, assign) BOOL ribbonType;
@property (nonatomic, strong) NSMutableArray<PYCategories *> *categories;
@property (nonatomic, strong) NSMutableArray<PYForceNodes *> *nodes;
@property (nonatomic, strong) NSMutableArray<PYLinks *> *links;
@property (nonatomic, strong) NSMutableArray *matrix;
@property (nonatomic, copy) NSArray *center;
@property (nonatomic, strong) NSNumber *size;
@property (nonatomic, strong) NSNumber *minRadius;
@property (nonatomic, strong) NSNumber *maxRadius;
@property (nonatomic, copy) PYSymbol symbol;
@property (nonatomic, strong) id symbolSize;
@property (nonatomic, copy) NSString *linkSymbol;
@property (nonatomic, copy) NSArray *linkSymbolSize;
@property (nonatomic, strong) NSNumber *scaling;
@property (nonatomic, strong) NSNumber *gravity;
@property (nonatomic, assign) BOOL draggable;
@property (nonatomic, assign) BOOL large;
@property (nonatomic, assign) BOOL useWorker;
@property (nonatomic, strong) NSNumber *steps;
@property (nonatomic, strong) id roam;

@end
