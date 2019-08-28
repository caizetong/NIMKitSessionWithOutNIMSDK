//
//  ViewController.m
//  TestNIM
//
//  Created by Caizetong on 2019/8/26.
//  Copyright © 2019 cc. All rights reserved.
//

#import "ViewController.h"
#import "NIMKit.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor greenColor];
    
    
}


- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [super touchesEnded:touches withEvent:event];
    
    NIMSessionViewController *vc = [[NIMSessionViewController alloc] init];
//    [self presentViewController:vc animated:YES completion:nil];
    [self.navigationController pushViewController:vc animated:YES];
}

@end
