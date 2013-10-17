//
//  CameraViewController.h
//  messageBang
//
//  Created by Sean Shields on 10/17/13.
//  Copyright (c) 2013 Sean Shields. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CameraViewController : UITableViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, strong) UIImagePickerController *imagePicker;

@end
