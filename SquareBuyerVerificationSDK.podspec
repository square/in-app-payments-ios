require './podspec_constants'

Pod::Spec.new do |s|
  pod_name = 'SquareBuyerVerificationSDK'
  framework_filename = "#{pod_name}.framework"

  s.name = pod_name
  s.version = SquareInAppPaymentsSDK::VERSION
  s.license = SquareInAppPaymentsSDK::LICENSE
  s.homepage = SquareInAppPaymentsSDK::HOMEPAGE_URL
  s.authors = SquareInAppPaymentsSDK::AUTHORS

  s.summary = 'A secure, managed payments SDK that enables iOS developers to verify buyers within the in-app payment sdk.'

  s.ios.deployment_target = SquareInAppPaymentsSDK::IOS_DEPLOYMENT_TARGET

  s.source = SquareInAppPaymentsSDK::SOURCE
  s.source_files = "#{SquareInAppPaymentsSDK::CONTAINER_FOLDER_NAME}/#{framework_filename}/**/*.{h,hh}"
  s.public_header_files = "#{SquareInAppPaymentsSDK::CONTAINER_FOLDER_NAME}/#{framework_filename}/Headers/*.{h,hh}"
  s.vendored_frameworks = "#{SquareInAppPaymentsSDK::CONTAINER_FOLDER_NAME}/#{framework_filename}"
end
