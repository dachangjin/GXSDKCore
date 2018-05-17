#
# Be sure to run `pod lib lint GXSDKCore.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
s.name             = 'GXSDKCore'
s.version          = '1.1'
s.summary          = '管信SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

s.description      = <<-DESC
TODO: Add long description of the pod here.
DESC

s.homepage         = 'https://github.com/dachangjin/GXSDKCore'
# s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
s.license          = { :type => 'MIT', :file => 'LICENSE' }
s.author           = { 'dachangjin' => '309096092@qq.com' }
s.source           = { :git => 'https://github.com/dachangjin/GXSDKCore.git', :tag => s.version.to_s }
# s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

s.ios.deployment_target = '8.0'

#s.source_files = 'GXSDKCore/Classes/*.{h,m}'

#s.resource_bundles = {
#'GXSDKCore' => ['GXSDKCore/Assets/*.png']
#}

#  s.public_header_files = 'Pod/Classes/**/*.h'
s.frameworks = 'UIKit', 'MapKit','MessageUI','Security','CoreTelephony','AddressBook','AddressBookUI','AudioToolbox','CoreAudio','AVFoundation','SystemConfiguration','CoreGraphics','Foundation'
s.libraries  = 'sqlite3.0','stdc++','z.1.2.5','icucore'
s.dependency 'CocoaAsyncSocket', '~> 7.6.2'
s.dependency 'FMDB', '~> 2.7.2'
s.dependency 'Reachability', '~> 3.2'
s.dependency 'MBProgressHUD', '~> 1.1.0'
s.dependency 'MJRefresh', '~> 2.4.12'
s.dependency 'HMSegmentedControl','~> 1.5.1'
s.vendored_frameworks = 'GXSDKCore/Frameworks/GXSDKCore.framework'
end

