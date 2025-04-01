// swift-tools-version:5.3
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
         checksum: "b5f7637f1aa081f6c74a273685e69ce0f12230a3470d10e6bc6675b9ac54202a"
      )
   ]
)
