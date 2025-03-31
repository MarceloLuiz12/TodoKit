import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.vanniktech.mavenPublish)
    alias(libs.plugins.sqldelight)
    id("maven-publish")
}

kotlin {
    androidTarget {
        publishLibraryVariants("release")
    }
    val xcFrameworkName = "ToDoKitKMP"
    val xcf = XCFramework(xcFrameworkName)
    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = xcFrameworkName

            binaryOption("bundleId", "io.github.marcelo.${xcFrameworkName}")
            xcf.add(this)
            isStatic = true
        }
    }
    sourceSets {
        commonMain.dependencies {
            implementation(libs.koin.core)
            implementation(libs.kotlinx.coroutines.core)
        }
        commonTest.dependencies {
            implementation(libs.kotlin.test)
        }
        androidMain.dependencies {
            implementation(libs.koin.android)
            implementation(libs.android.driver)
        }
        iosMain.dependencies {
            implementation(libs.native.driver)
        }
    }
}

android {
    namespace = "com.marcelo.todokit"
    compileSdk = 34
    defaultConfig {
        minSdk = 24
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
}

publishing {
    publications {
        create<MavenPublication>("release") {
            groupId = "io.github.marcelo"
            artifactId = "to-do"
            version = "1.0.0"

            afterEvaluate {
                from(components["kotlin"])
            }

            pom {
                name = "ToDo Kit"
                description =
                    "Biblioteca KMP para gerenciamento de tarefas, permitindo adicionar, editar, remover e visualizar tarefas com status e histórico."
                inceptionYear = "2025"
                url = "https://github.com/MarceloLuiz12/TodoKit"
                licenses {
                    license {
                        name = "MIT"
                        url = "https://opensource.org/licenses/MIT"
                    }
                }
                developers {
                    developer {
                        name = "Marcelo Luiz Pinheiro"
                        email = "marceloluizpinheiro17@gmail.com"
                    }
                }
                scm {
                    url =
                        "https://github.com/MarceloLuiz12/TodoKit"
                }
            }
        }
    }
}

sqldelight {
    databases {
        create("TaskDataBase") {
            packageName.set("com.marcelo.todokit")
        }
    }
}