//
//  NUPickerCell.h
//  NUSurveyor
//
//  Created by Mark Yoon on 9/26/2011.
//  Copyright (c) 2011-2012 Northwestern University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NUCell.h"
#import "NUPickerVC.h"
#import "NUSectionTVC.h"

@interface NUPickerCell : UITableViewCell <UIPopoverControllerDelegate, UIPickerViewDelegate, UIPickerViewDataSource>

@property (nonatomic, weak) NUSectionTVC *sectionTVC;
@property (nonatomic, strong) NUPickerVC *pickerController;
@property (nonatomic, strong) UIPopoverController *popoverController;
@property (nonatomic, strong) NSArray *answers;

- (NSIndexPath *)myIndexPathWithRow:(NSUInteger)r;
@end
