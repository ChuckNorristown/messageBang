//
//  FriendsViewController.h
//  messageBang
//
//  Created by Sean Shields on 10/17/13.
//  Copyright (c) 2013 Sean Shields. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FriendsViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;

@end
