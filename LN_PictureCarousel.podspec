Pod::Spec.new do |s|
  s.name     = 'LN_PictureCarousel'
  s.version  = '1.0.0'
  s.ios.deployment_target = '8.0'
  s.license= { :type => "MIT", :file => "LICENSE" }
  s.summary  = '一行代码实现图片轮播功能.'
  s.homepage = 'https://github.com/LionNeo/LN_PictureCarousel.git.git'
  s.authors   = { 'Lion_Neo' => '123624331@qq.com'}
  
  s.source   = { :git => 'https://github.com/LionNeo/LN_PictureCarousel.git', :tag => s.version.to_s }
  s.source_files = 'LN_PictureCarousel/**/*.{h,m}'
  s.frameworks = 'Foundation', 'UIKit'
  s.dependency 'SDWebImage'
  s.requires_arc = true


end