//
//  LoginViewController.h
//  messageBang
//
//  Created by Sean Shields on 10/16/13.
//  Copyright (c) 2013 Sean Shields. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
- (IBAction)login:(id)sender;

@end
