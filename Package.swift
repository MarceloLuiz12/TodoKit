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
         checksum: "cfa60cda304df7fe59dfc9071cc3546fac49a5503b8f8ae95bfdd3ceee103059"
      )
   ]
)