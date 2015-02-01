//
//  ViewController.h
//  RestExample
//
//  Created by Joseph Reis on 2/1/15.
//  Copyright (c) 2015 JoeReis. All rights reserved.

//source: https://spring.io/guides/gs/consuming-rest-ios/
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *greetingId;
@property (nonatomic, strong) IBOutlet UILabel *greetingContent;

- (IBAction)fetchGreeting;


@end

