// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterMarko",
    products: [
        .library(name: "TreeSitterMarko", targets: ["TreeSitterMarko"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterMarko",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterMarkoTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterMarko",
            ],
            path: "bindings/swift/TreeSitterMarkoTests"
        )
    ],
    cLanguageStandard: .c11
)
