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
         checksum: "2cf55e0f9288729f16a2898ac5edd2978bbcfcdf1bdb0eb5d369efc8a6e4d3f5"
      )
   ]
)
