package com.marcelo.todokit.di

import com.marcelo.todokit.data_local.database.AndroidDatabaseDriverFactoryImpl
import com.marcelo.todokit.data_local.database.DatabaseDriverFactoryInterface
import org.koin.dsl.module

actual val platformModule = module {
    single<DatabaseDriverFactoryInterface> {
        AndroidDatabaseDriverFactoryImpl(get())
    }
}