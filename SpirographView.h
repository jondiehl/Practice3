//
//  SpirographView.h
//  Spirograph
//
//  Created by Jon Diehl on 2/22/14.
//  Copyright (c) 2014 Jon Diehl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SpirographView : UIView {
    UIView *overWriteView;
    CGFloat lastL,lastK;
}
@property (nonatomic) CGFloat l,k,stepSize;
@property (nonatomic) NSUInteger numberOfSteps;
@property (nonatomic) BOOL overWrite;

@end
