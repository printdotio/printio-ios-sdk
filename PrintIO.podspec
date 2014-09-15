
Pod::Spec.new do |s|
  s.name             = "PrintIO"
  s.version          = "0.0.1"

  s.summary          = "SDK that enables the printing of any photo, from any source, onto any product!"
  s.homepage         = "http://www.print.io"
  s.license          = { :type => 'Commercial', :file => 'LICENSE.md' }
  s.author           = { "Mercurialol" => "dev.mercurial@gmail.com" }
  s.source           = { :git => "https://github.com/printdotio/printio-ios-sdk.git", :tag => '0.0.1'  }
  s.social_media_url = "https://twitter.com/printdotio"
  s.platform     = :ios, '6.1'
  s.requires_arc = true

  s.source_files = 'PrintIO.framework/Versions/A/Headers/PrintIO.h', 'PrintIO.framework/Versions/A/Headers/PIOButton.h',
  'PrintIO.framework/Versions/A/Headers/PIOPublicConstants.h', 'PrintIO.framework/Versions/A/Headers/PIOSideMenuButton.h', 'PrintIO.framework/Versions/A/Headers/PIOVariantOption.h', 'PrintIO.framework/Versions/A/Headers/ProductIds.h'
  s.xcconfig     = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/PrintIO"', 'OTHER_LDFLAGS' => '-framework PrintIO' }
  s.resource = 'PrintIOBundle.bundle'
  s.preserve_paths = 'PrintIO.framework/*'
  s.vendored_frameworks = 'PrintIO.framework'
  s.frameworks = 'Accounts','Accelerate','AddressBook','AddressBookUI','AssetsLibrary','AdSupport','AudioToolbox','AVFoundation','CFNetwork','CoreGraphics','CoreMedia','CoreLocation','CoreVideo','CoreImage','CoreTelephony','Foundation','ImageIO', 'MessageUI', 'MobileCoreServices','OpenGLES','QuartzCore','Social','SystemConfiguration','Security','StoreKit','Twitter','UIKit'  
  s.libraries = 'z', 'sqlite3', 'xml2.2', 'c++'

end
