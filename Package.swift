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
         checksum: "591ffad29f84d6f1e9a0cf85de5c256ed68edfd391ce3d5f5b0e113c1b6742c7"
      )
   ]
)
