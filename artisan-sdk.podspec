Pod::Spec.new do |s|
  s.name         = "artisan-sdk"
  s.version      = "0.0.1"
  s.summary      = "Master your mobile experience like never before.
Artisan is the first Mobile Experience Management platform that makes it easy to create and manage mobile experiences that drive retention, engagement, and revenue. Gain deep insights into user behavior, quickly modify and publish changes in real-time without writing code or waiting for app store approvals."
  s.homepage     = "http://www.useartisan.com"
  s.license      = { :type => 'MIT', :file => 'FILE_LICENSE' }
  s.author       = { "Kevin Jenkins" => "kevin.jenkins@useartisan.com" }
  s.source       = { :git => "https://github.com/appRenaissance/artisan-sdk.git", :commit => '4cfd990750' }
  s.platform     = :ios, '5.0'
  s.resources    = 'ArtisanSDK.bundle', 'ArtisanAnalytics.bundle'
  s.frameworks   = 'ArtisanSDK', 'CoreData', 'CFNetwork', 'Security', 'QuartzCore', 'SystemConfiguration'
  s.library      = 'z'
  s.requires_arc = true
  s.documentation = { :html => 'http://useartisan.com/' }
  s.preserve_path = '*.framework'
  s.xcconfig     = { 'HEADER_SEARCH_PATHS' => '"$(PODS_ROOT)"', 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/artisan-sdk"', 'OTHER_LDFLAGS' => '-ObjC, -lz'}
end