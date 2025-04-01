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
          path: "./XCFrameworks/release/ToDoKitKMP.xcframework"
      )
   ]
)

