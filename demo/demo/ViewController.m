//
//  ViewController.m
//  demo
//
//  Created by Lion•Neo on 2017/9/8.
//  Copyright © 2017年 com.lionneo. All rights reserved.
//

#import "ViewController.h"
#import "LNPictureCarousel.h"

@interface ViewController ()

@end

@implementation ViewController


/**
 *  1.列出来各种用法
     2.推送到cocoapods上面
    
 */
- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSMutableArray *photosMArr = [[NSMutableArray alloc] init];
    for (int i = 0; i < 5; i++) {
        
        NSString *str = [NSString stringWithFormat:@"%d.jpg", i];
        UIImage *image = [UIImage imageNamed:str];
                          
        [photosMArr addObject:str];
    }
    
    CGRect frame = CGRectMake(0, 0, self.view.frame.size.width, 200.f);
//   LNPictureCarousel * p1 =  [LNPictureCarousel pictureWithParent:self.view frame:frame imagesArray:photosMArr timeInterval:1.5 action:^(LNPictureCarousel *pictureCarousel, NSInteger selectIndex) {
//        NSLog(@"点击了第%ld张图片",selectIndex);
//   }];
    
//    [[LNPictureCarousel alloc] initWithParent:self.view frame:frame imagesArray:photosMArr timeInterval:1.5 action:^(LNPictureCarousel *pictureCarousel, NSInteger selectIndex) {
//         NSLog(@"点击了第%ld张图片",selectIndex);
//    }];
    

    [LNPictureCarousel pictureWithParent:self.view frame:frame imagesStringArray:photosMArr timeInterval:1.2 action:^(LNPictureCarousel *pictureCarousel, NSInteger selectIndex) {
         NSLog(@"点击了第%ld张图片",selectIndex);
    }];
    
    
    
}


@end
