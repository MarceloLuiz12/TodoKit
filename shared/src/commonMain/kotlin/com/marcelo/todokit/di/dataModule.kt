package com.marcelo.todokit.di

import com.marcelo.todokit.data.repositories.TaskRepositoryImpl
import com.marcelo.todokit.domain.repositories.TaskRepositoryInterface
import org.koin.dsl.module

val dataModule = module {
    single<TaskRepositoryInterface> {
        TaskRepositoryImpl(
            dataSource = get()
        )
    }
}