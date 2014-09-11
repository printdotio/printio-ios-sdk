#
# Be sure to run `pod lib lint PrintIO.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "PrintIO"
  s.version          = "0.1.0"
  s.summary          = "SDK that enables the printing of any photo, from any source, onto any product!"

  s.homepage         = "https://github.com/printdotio/printio-ios-sdk.git"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "Mercurialol" => "dev.mercurial@gmail.com" }
  s.source           = { :git => "https://github.com/printdotio/printio-ios-sdk.git", :tag => 'v0.1.0'  }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
  s.platform     = :ios, '6.1'
  s.requires_arc = true

  s.source_files = 'PrintIO.framework/Versions/A/Headers/PrintIO.h'
  s.xcconfig     = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/PrintIO"' }
  s.resource = 'PrintIOBundle.bundle'
  s.preserve_paths = 'PrintIO.framework/*'
  s.vendored_frameworks = 'PrintIO.framework',
  s.frameworks = 'Accounts','Accelerate','AddressBook','AddressBookUI','AssetsLibrary','AdSupport','AudioToolbox','AVFoundation','CFNetwork','CoreGraphics','CoreMedia','CoreLocation','CoreVideo','CoreImage','CoreTelephony','Foundation','ImageIO','PrintIO', 'MessageUI', 'MobileCoreServices','OpenGLES','QuartzCore','Social','SystemConfiguration','Security','StoreKit','Twitter','UIKit'  
  s.libraries = 'z', 'sqlite3', 'xml2.2', 'c++'

end
