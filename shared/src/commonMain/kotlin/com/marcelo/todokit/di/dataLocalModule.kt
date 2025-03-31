package com.marcelo.todokit.di

import com.marcelo.todokit.data.datasource.TaskDataSourceInterface
import com.marcelo.todokit.data_local.datasource.LocalTaskDataSourceImpl
import org.koin.dsl.module

val dataLocalModule = module {
    single<TaskDataSourceInterface> {
        LocalTaskDataSourceImpl(
            driverFactory = get()
        )
    }
}