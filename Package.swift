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
         checksum: "187a8d8daa222c008b6eda6544f02589c0ad5adde3db8335ca61fe718635e003"
      )
   ]
)

