package com.marcelo.todokit.di

import org.koin.core.context.startKoin

fun initKoin() {
    startKoin {
        modules(
            dataLocalModule,
            dataModule,
            domainModule,
            platformModule
        )
    }
}