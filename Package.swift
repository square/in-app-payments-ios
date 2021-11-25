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
            // TODO: URL and checksum must be updated when hosted by Square.
            url: "https://github.com/bdrelling/in-app-payments-ios/releases/download/1.6.0/SquareBuyerVerificationSDK.zip",
            checksum: "1bc10b0ff90a8f46febd1c4566cf39935f0a02a2fccd8032211186535650fe73"
        ),
        .binaryTarget(
            name: "SquareInAppPaymentsSDK",
            // TODO: URL and checksum must be updated when hosted by Square.
            url: "https://github.com/bdrelling/in-app-payments-ios/releases/download/1.6.0/SquareInAppPaymentsSDK.zip",
            checksum: "8a82d53c41f048d5df5be0eeb97969a5ffe17b5fd73f21f7b4667ad4f210a783"
        ),
    ]
)
