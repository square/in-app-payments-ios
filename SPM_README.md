## Swift Package Manager

### 1. Add the following to your top-level `dependencies` block within your `Package.swift`:

```swift
dependencies: [
    .package(url: "https://github.com/square/in-app-payments-ios", .upToNextMajor(from: "1.6.3")),
]
```

### 2. Add build phase to setup the SquareInAppPaymentsSDK and/or SquareBuyerVerificationSDK framework ###

On your application targets’ Build Phases settings tab, click the + icon and choose New Run Script Phase. Create a Run Script in which you specify your shell (ex: /bin/sh), add the following contents to the script area below the shell:

```
SETUP_SCRIPT="${CONFIGURATION_BUILD_DIR}/SquareInAppPaymentsSDK.framework/setup"
if [ -f "$SETUP_SCRIPT" ]; then
  "$SETUP_SCRIPT"
fi
```

**Important Note:** The build phase script requires you to reset your Swift Package Caches when switching from a debug build to a release build (archiving) or vice versa. This helps prevent errors during building or releasing. You can reset your cache by using `File -> Packages -> Reset Package Caches` in Xcode.
