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
         checksum: "4850bae05bf78a68366d355b184e69e4b9b9b01bbb7d7ed6467baed0745e6f42"
      )
   ]
)

