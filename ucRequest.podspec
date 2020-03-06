Pod::Spec.new do |s|
  s.name = "ucRequest"
  s.version = "0.1.1"
  s.summary = "A short description of ucRequest."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"lj-1110"=>"214180063@qq.com"}
  s.homepage = "https://github.com/lj-1110/ucRequest"
  s.description = "TODO: Add long description of the pod here."
  s.source = { :git => 'git://github.com/lj-1110/ucRequest.git', :tag => s.version.to_s }
  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/ucRequest.framework'
  s.dependency 'JKCategories'
  s.dependency 'AFNetworking'
  s.dependency 'FCUUID'
  s.dependency 'MJExtension'
end
