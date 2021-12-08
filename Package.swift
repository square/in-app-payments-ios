// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "SquareInAppPaymentsSDK",
    products: [
        .library(name: "SquareBuyerVerificationSDK", targets: ["SquareBuyerVerificationSDK"]),
        .library(name: "SquareInAppPaymentsSDK", targets: ["SquareInAppPaymentsSDK"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "SquareBuyerVerificationSDK",
            path: "XCFrameworks/SquareBuyerVerificationSDK.xcframework"
        ),
        .binaryTarget(
            name: "SquareInAppPaymentsSDK",
            path: "XCFrameworks/SquareInAppPaymentsSDK.xcframework"
        ),
    ]
)
