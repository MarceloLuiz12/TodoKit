import org.jetbrains.kotlin.gradle.ExperimentalKotlinGradlePluginApi
import org.jetbrains.kotlin.gradle.dsl.JvmTarget

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.vanniktech.mavenPublish)
    id("maven-publish")
}

kotlin {
    androidTarget {
        publishLibraryVariants("release")
        @OptIn(ExperimentalKotlinGradlePluginApi::class)
        compilerOptions {
            jvmTarget.set(JvmTarget.JVM_1_8)
        }
    }
    
    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "ToDoKitKMP"
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
        }
    }
}

android {
    namespace = "com.marcelo.todokit"
    compileSdk = 35
    defaultConfig {
        minSdk = 24
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}

publishing {
    publications {
        create<MavenPublication>("release") {
            groupId = "com.havan.paladinos.business-logic.kmp"
            artifactId = "havan-paladinos-packages"
            version = "1.0.4"

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