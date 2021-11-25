#!/bin/sh

# The purpose of this script is to demonstrate generating a checksum for the Square SDKs .zip file.
# Unfortunately, it seems that binary target support requires there is one XCFramework at the downloaded source.

# This script is NOT intended to be used by Square for distribution or otherwise,
# as the underlying process (of combining frameworks into a single zip and adding to a release)
# is not the proper way to support hosted binaries in SPM.

# This script should be deleted or heavily modified prior to merging into the Square in-app-payments-ios repository.

framework_directory="SquareInAppPaymentsSDKs"
zip_filename="$framework_directory.zip"
url="https://github.com/square/in-app-payments-ios/releases/download/1.5.4/${zip_filename}"

buyer_verification_name="SquareBuyerVerificationSDK"
buyer_verification_framework="${buyer_verification_name}.xcframework"
buyer_verification_zip="${buyer_verification_name}.zip"

in_app_payments_name="SquareInAppPaymentsSDK"
in_app_payments_framework="${in_app_payments_name}.xcframework"
in_app_payments_zip="${in_app_payments_name}.zip"

# Download the .zip containing the XCFrameworks.
wget $url --quiet

# Unzip the .zip.
# -qq = quiet
unzip -qq $zip_filename 

# Navigte into the framework directory.
# If we don't, the zip file is generated with an additional directory at the top-level.
cd $framework_directory

# Make directories for each XCFramework.
mkdir $buyer_verification_name
mkdir $in_app_payments_name

# Move the frameworks into the appropriate directories.
# NOTE: This will ensure that the XCFramework is contained within the zip,
#       rather than having its contents zipped directly, which appears invalid via SPM.
mv $buyer_verification_framework "${buyer_verification_name}/${buyer_verification_framework}"
mv $in_app_payments_framework "${in_app_payments_name}/${in_app_payments_framework}"

# Zip each xcframework individually.
# -q = quiet
# -r = recursive
zip $buyer_verification_zip $buyer_verification_name -q -r
zip $in_app_payments_zip $in_app_payments_name -q -r

# Compute checksums for each SDK
buyer_verification_sdk_checksum=`swift package compute-checksum $buyer_verification_zip`
echo "Buyer Verification SDK Checksum: $buyer_verification_sdk_checksum"

in_app_payments_sdk_checksum=`swift package compute-checksum $in_app_payments_zip`
echo "In App Payments SDK Checksum: $in_app_payments_sdk_checksum"

# Delete the .zip and framework directory.
rm ../$zip_filename