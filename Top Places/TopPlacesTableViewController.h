//
//  TopPlacesTableViewController.h
//  Top Places
//
//  Created by Amy Bearman on 5/9/14.
//  Copyright (c) 2014 Amy Bearman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GeneralTableViewController.h"

@interface TopPlacesTableViewController : UITableViewController
@property (nonatomic, strong) NSMutableDictionary *countryToPlace;
@end
