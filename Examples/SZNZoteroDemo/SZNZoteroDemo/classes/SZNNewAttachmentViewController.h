//
//  SZNNewAttachmentViewController.h
//  SZNZoteroDemo
//
//  Created by Vincent Tourraine on 6/25/13.
//  Copyright (c) 2013-2016 shazino. All rights reserved.
//

@import UIKit;

@class SZNLibrary;

@interface SZNNewAttachmentViewController : UITableViewController

@property (weak, nonatomic) IBOutlet UITextField *titleTextField;
@property (weak, nonatomic) IBOutlet UITextField *contentTextField;

@property (strong, nonatomic) SZNLibrary *library;

- (IBAction)uploadAttachment:(id)sender;

@end
