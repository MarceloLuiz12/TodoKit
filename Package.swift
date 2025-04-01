// swift-tools-version:6.0
import PackageDescription

let package = Package(
   name: "TodoKit",
   platforms: [
     .iOS(.v14),
   ],
   products: [
      .library(name: "TodoKit", targets: ["shared"])
   ],
   targets: [
      .binaryTarget(
         name: "shared",
         url: "https://github.com/MarceloLuiz12/TodoKit.git",
         checksum: "4c53e6b01bd1b8c143ecef97f1d985e44c7d9f6a6b7d6c068463a20462ed5f74"
      )
   ]
)
