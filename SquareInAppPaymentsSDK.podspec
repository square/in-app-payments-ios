require './podspec_constants'

Pod::Spec.new do |s|
  pod_name = 'SquareInAppPaymentsSDK'
  framework_filename = "#{pod_name}.xcframework"

  s.name = pod_name
  s.version = SquareInAppPaymentsSDK::VERSION
  s.license = SquareInAppPaymentsSDK::LICENSE
  s.homepage = SquareInAppPaymentsSDK::HOMEPAGE_URL
  s.authors = SquareInAppPaymentsSDK::AUTHORS

  s.summary = 'A secure, managed payments SDK that enables iOS developers to build mobile, in-app payment experiences for customers of Square merchants.'

  s.ios.deployment_target = SquareInAppPaymentsSDK::IOS_DEPLOYMENT_TARGET

  s.source = SquareInAppPaymentsSDK::SOURCE
  s.vendored_frameworks = "#{SquareInAppPaymentsSDK::CONTAINER_FOLDER_NAME}/#{framework_filename}"

  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
