//
//  SurveyorNoneAnswerCell.h
//  surveyor_ios
//
//  Created by Mark Yoon on 9/12/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "PageCell.h"


@interface SurveyorNoneAnswerCell : PageCell {
  UITextField *textField;
  UILabel *label;
}
  
@property (nonatomic, retain) UITextField *textField;

@end
