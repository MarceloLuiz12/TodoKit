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
         checksum: "89890e4079b16d3ab9279359eecd6bf05c5cf92df9cd4cb1e737c9768c0cf7f1"
      )
   ]
)

