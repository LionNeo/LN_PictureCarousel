//
//  LNPictureCarousel.h
//  LiveStreaming
//
//  Created by Lion•Neo on 16/7/8.
//  Copyright © 2016年 Lion•Neo. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LN_PictureCarousel;

typedef void (^didSelectBlock) (LN_PictureCarousel *pictureCarousel,NSInteger selectIndex);

@protocol LNPictureCarouselDelegate <NSObject>

@optional

- (void)PictureCarousel:(LN_PictureCarousel *)PictureCarousel didSelectImageAtIndex:(NSInteger)index;

@end

@interface LN_PictureCarousel : UIView

@property (nonatomic, assign) BOOL showsVerticalScrollIndicator;    //default YES
@property (nonatomic, assign) BOOL showsHorizontalScrollIndicator;  //default YES
@property (nonatomic, assign) NSTimeInterval waitingTime;           //拖拽等待时间   defalut 2.0 sec min>0
@property (nonatomic, strong) UIImage *placeholder;                 //占位图片

@property (nonatomic, assign) id<LNPictureCarouselDelegate> delegate; //代理

/**
 *  本地图片轮播,图片数组为图片名字数组
 *
 *  @param parentView         添加到view
 *  @param frame              frame
 *  @param imagesStringArr    图片名字数组
 *  @param timeInterval       图片切换时间
 *  @param action             选中图片回调
 *
 */
- (instancetype)initWithParent:(UIView *)parentView frame:(CGRect)frame imagesStringArray:(NSArray<NSString *> *)imagesStringArr timeInterval:(NSTimeInterval)timeInterval action:(didSelectBlock)action;

/**
 *  类方法 : 本地图片轮播,图片数组为图片名字数组
 *
 *  @param parentView         添加到view
 *  @param frame              frame
 *  @param imagesStringArr    图片名字数组
 *  @param timeInterval       图片切换时间
 *  @param action             选中图片回调
 *
 */
+ (instancetype)pictureWithParent:(UIView *)parentView frame:(CGRect)frame imagesStringArray:(NSArray<NSString *> *)imagesStringArr timeInterval:(NSTimeInterval)timeInterval action:(didSelectBlock)action;
/**
 *  本地图片的加载轮播
 *
 *  @param parentView   添加到view
 *  @param frame        frame
 *  @param imagesArr    本地图片数组
 *  @param timeInterval 图片切换时间
 *  @param action       选中图片回调
 */
- (instancetype)initWithParent:(UIView *)parentView frame:(CGRect)frame imagesArray:(NSArray<UIImage *> *)imagesArr timeInterval:(NSTimeInterval)timeInterval action:(didSelectBlock)action;
/**
 *  类方法 : 本地图片的加载轮播
 *
 *  @param parentView   添加到view
 *  @param frame        frame
 *  @param imagesArr    本地图片数组
 *  @param timeInterval 图片切换时间
 *  @param action       选中图片回调
 */
+ (instancetype)pictureWithParent:(UIView *)parentView frame:(CGRect)frame imagesArray:(NSArray<UIImage *> *)imagesArr timeInterval:(NSTimeInterval)timeInterval action:(didSelectBlock)action;

/**
 *  网络图片的加载轮播
 *
 *  @param parentView         添加到view
 *  @param frame              frame
 *  @param imagesUrlStringArr 图片网址数组
 *  @param timeInterval       图片切换时间
 *  @param action             选中图片回调
 */
- (instancetype)initWithParent:(UIView *)parentView frame:(CGRect)frame imagesUrlStringArray:(NSArray<NSString *> *)imagesUrlStringArr timeInterval:(NSTimeInterval)timeInterval action:(didSelectBlock)action;
/**
 *  类方法 : 网络图片的加载轮播
 *
 *  @param parentView         添加到view
 *  @param frame              frame
 *  @param imagesUrlStringArr 图片网址数组
 *  @param timeInterval       图片切换时间
 *  @param action             选中图片回调
 */
+ (instancetype)pictureWithParent:(UIView *)parentView frame:(CGRect)frame imagesUrlStringArray:(NSArray<NSString *> *)imagesUrlStringArr timeInterval:(NSTimeInterval)timeInterval action:(didSelectBlock)action;


@end
