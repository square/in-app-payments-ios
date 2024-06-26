[![CocoaPods](https://img.shields.io/cocoapods/v/SquareInAppPaymentsSDK)](https://github.com/CocoaPods/CocoaPods)
[![Swift Package Manager compatible](https://img.shields.io/badge/Swift%20Package%20Manager-compatible-4BC51D.svg?style=flat)](https://github.com/apple/swift-package-manager)
[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)

# Square In-App Payments iOS SDK

Build remarkable payments experiences in your own apps with Square’s [In-App Payments SDK](https://developer.squareup.com/docs/in-app-payments-sdk/what-it-does). Use our pre-built UI to collect sensitive credit card details from your customers, while matching the look and feel of your app. Square takes care of all the complexity of payments - security, risk, and PCI compliance are managed for you, so that you can focus on building the rest of your application.

You can also pair our Square In-App Payments SDK with Square’s [Online Payments APIs](https://squareup.com/developers/online-payment-apis) and [Reader SDK](https://squareup.com/developers/reader-sdk) to accept payments across all channels - online, in-person and in-app - while keeping your back office reporting unified in a single system.

## Minimum Requirements
- Xcode 15 
- iOS 12.0

## Installation

### 1. Add frameworks

#### CocoaPods

Install with [CocoaPods](http://cocoapods.org/) by adding the following to your Podfile:

```ruby
use_frameworks!
pod "SquareInAppPaymentsSDK"
pod "SquareBuyerVerificationSDK"
```

#### Carthage

Install with [Carthage](https://github.com/Carthage/Carthage) by adding the following to your Cartfile:

```
github "square/in-app-payments-ios"
```

#### Swift Package Manager

Add the following to your top-level `dependencies` block within your `Package.swift`:

```swift
dependencies: [
    .package(url: "https://github.com/square/in-app-payments-ios", .upToNextMajor(from: "1.6.3")),
]
```

### 2. Add build phase to setup the SquareInAppPaymentsSDK and/or SquareBuyerVerificationSDK framework ###
After adding the framework using any of the above methods, follow the below instructions to complete the setup. 

On your application targets’ Build Phases settings tab, click the + icon and choose New Run Script Phase. Create a Run Script in which you specify your shell (ex: /bin/sh), add the following contents to the script area below the shell:

```
SETUP_SCRIPT=${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}"/SquareInAppPaymentsSDK.framework/setup"
if [ -f "$SETUP_SCRIPT" ]; then
  "$SETUP_SCRIPT"
fi
```

Make sure the above run script is below any `[CP] Embed Pods Frameworks` or `Embed Frameworks` Build Phase.


### iPhone and iPad apps on Mac with Apple silicon

Square In-App Payments iOS SDK currently does not support iPhone and iPad apps on Mac with Apple silicon.

### Getting Started

For more information and setup instructions, please visit the [Square In-App Payments iOS SDK page](https://developer.squareup.com/docs/in-app-payments-sdk/build-on-ios).
