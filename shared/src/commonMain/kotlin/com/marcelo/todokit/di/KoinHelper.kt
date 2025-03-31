package com.marcelo.todokit.di

import org.koin.core.component.KoinComponent
import org.koin.core.context.startKoin

class KoinHelper :
    KoinComponent {
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
}