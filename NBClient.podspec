Pod::Spec.new do |s|
  s.name     = 'NBClient'
  s.version  = '1.3.1'
  s.license  = 'MIT'
  s.summary  = 'An iOS client to the NationBuilder API.'
  s.homepage = 'https://github.com/nationbuilder/nationbuilder-ios'
  s.authors  = { 'Peng Wang' => 'peng@pengxwang.com' }
  s.source   = { git: 'https://github.com/nationbuilder/nationbuilder-ios.git', tag: s.version.to_s }
  # Platform
  s.platform = :ios
  s.ios.deployment_target = '9.0'
  # Build settings
  s.requires_arc = true

  s.subspec 'Core' do |sp|
    # Build settings
    sp.dependency 'NBClient/Locale'
    sp.frameworks = ['Security', 'UIKit']
    # File patterns
    sp.source_files = 'NBClient/NBClient/*.{h,m}'
    sp.exclude_files = 'NBClient/UI'
    sp.private_header_files = 'NBClient/NBClient/*_Internal.h'
  end

  s.subspec 'UI' do |sp|
    # Build settings
    sp.dependency 'NBClient/Core'
    sp.frameworks = ['UIKit', 'CoreText']
    # File patterns
    sp.source_files = 'NBClient/NBClient/UI/*.{h,m}'
    sp.resources = [
      'NBClient/NBClient/UI/*.xib',
      'NBClient/NBClient/UI/NBClient_UI.xcassets',
      'NBClient/NBClient/UI/pe-icon-7-stroke.ttf'
    ]
  end

  s.subspec 'Locale' do |sp|
    # File patterns
    sp.subspec 'All' do |l|
      l.resources = l.preserve_paths = 'NBClient/NBClient/*.lproj'
    end
    sp.subspec 'en' do |l|
      l.resources = l.preserve_paths = 'NBClient/NBClient/en.lproj'
    end
  end

  s.default_subspecs = 'Core', 'UI', 'Locale/en'
end
