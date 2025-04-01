// swift-tools-version:6.0
import PackageDescription

let package = Package(
   name: "ToDoKitKMP",
   platforms: [
     .iOS(.v14),
   ],
   products: [
      .library(name: "ToDoKitKMP", targets: ["shared"])
   ],
   targets: [
      .binaryTarget(
         name: "shared",
         url: "https://github.com/MarceloLuiz12/TodoKit/releases/download/1.0.3/XCFrameworks.zip",
         checksum: "b32b2cda42e764840506428f57d318a2712a4c3a5063fcf3b4254b41a2daab41"
      )
   ]
)

