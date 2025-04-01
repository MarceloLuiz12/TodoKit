package com.marcelo.todokit.di

import org.koin.core.context.startKoin

fun initKoin() {
    startKoin {
        modules(
            listOf(
                dataLocalModule,
                dataModule,
                domainModule,
                platformModule
            )
        )
    }
}