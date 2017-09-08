# 简介
## LN_PictureCarousel 是一个可以实现本地和网络图片的轮播器

# 使用方法

## 注意事项: 
### 需要引入第三方框架 

	pod 'SDWebImage'
	
### 支持cocoapods 导入

   	pod 'LN_PictureCarousel' , '~> 1.0.0' 
	
## 具体使用如下:

### 创建数组和frame
	
```

	NSMutableArray *photosMArr = [[NSMutableArray alloc] init];
	for (int i = 0; i < 5; i++) {
		
		NSString *str = [NSString stringWithFormat:@"%d.jpg", i];
		UIImage *image = [UIImage imageNamed:str];
						  
		[photosMArr addObject:str];
	}
	
	CGRect frame = CGRectMake(0, 0, self.view.frame.size.width, 200.f);
```
	
#### 本地图片

```
		//类方法
   [LN_PictureCarousel pictureWithParent:self.view frame:frame imagesArray:photosMArr timeInterval:1.5 action:^(LN_PictureCarousel *pictureCarousel, NSInteger selectIndex) {
	
		NSLog(@"点击了第%ld张图片",selectIndex);
   }];
	
		//对象方法
	[[LN_PictureCarousel alloc] initWithParent:self.view frame:frame imagesArray:photosMArr timeInterval:1.5 action:^(LN_PictureCarousel *pictureCarousel, NSInteger selectIndex) {
		
		 NSLog(@"点击了第%ld张图片",selectIndex);
	}];
```
#### 本地图片,数组为图片名字数组
```
		//类方法
	[LN_PictureCarousel pictureWithParent:self.view frame:frame imagesStringArray:photosMArr timeInterval:1.2 action:^(LN_PictureCarousel *pictureCarousel, NSInteger selectIndex) {
		 NSLog(@"点击了第%ld张图片",selectIndex);
	}];
	
		//对象方法
	[[LN_PictureCarousel alloc] initWithParent:self.view frame:frame imagesStringArray:photosMArr timeInterval:1.2f action:^(LN_PictureCarousel *pictureCarousel, NSInteger selectIndex) {
		
		NSLog(@"点击了第%ld张图片",selectIndex);
	}];
```	
### 网络图片
	
```
	NSArray *photonStrs = @[
							@"https://raw.githubusercontent.com/LionNeo/LN_Photos/master/%E6%B5%8B%E8%AF%95%E5%9B%BE%E7%89%87/0.jpg",
							@"https://raw.githubusercontent.com/LionNeo/LN_Photos/master/%E6%B5%8B%E8%AF%95%E5%9B%BE%E7%89%87/1.jpg",
							@"https://raw.githubusercontent.com/LionNeo/LN_Photos/master/%E6%B5%8B%E8%AF%95%E5%9B%BE%E7%89%87/2.jpg",
							@"https://raw.githubusercontent.com/LionNeo/LN_Photos/master/%E6%B5%8B%E8%AF%95%E5%9B%BE%E7%89%87/3.jpg",
							@"https://raw.githubusercontent.com/LionNeo/LN_Photos/master/%E6%B5%8B%E8%AF%95%E5%9B%BE%E7%89%87/4.jpg"
							];
	
	[LN_PictureCarousel pictureWithParent:self.view frame:frame imagesUrlStringArray:photonStrs timeInterval:1.2f action:^(LN_PictureCarousel *pictureCarousel, NSInteger selectIndex) {
		NSLog(@"点击了第%ld张图片",selectIndex);
		
	}];
	
	[[LN_PictureCarousel alloc] initWithParent:self.view frame:frame imagesUrlStringArray:photonStrs timeInterval:1.2 action:^(LN_PictureCarousel *pictureCarousel, NSInteger selectIndex) {
		
		NSLog(@"点击了第%ld张图片",selectIndex);
	}];
```

## 有bug问题可以联系: qq 123624331 ,感谢大家支持!
