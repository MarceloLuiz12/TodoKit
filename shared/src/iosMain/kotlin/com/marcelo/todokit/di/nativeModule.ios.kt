package com.marcelo.todokit.di

import com.marcelo.todokit.data_local.database.DatabaseDriverFactoryInterface
import com.marcelo.todokit.data_local.database.IOSDatabaseDriverFactoryImpl
import org.koin.core.module.Module
import org.koin.dsl.module

actual val platformModule: Module = module {
    single<DatabaseDriverFactoryInterface> {
        IOSDatabaseDriverFactoryImpl()
    }
}