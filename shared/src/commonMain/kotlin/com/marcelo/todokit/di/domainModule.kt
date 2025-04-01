package com.marcelo.todokit.di

import com.marcelo.todokit.domain.core.ThreadContextProvider
import com.marcelo.todokit.domain.usecase.AddTaskUseCase
import com.marcelo.todokit.domain.usecase.DeleteTaskUseCase
import com.marcelo.todokit.domain.usecase.GetTasksUseCase
import com.marcelo.todokit.domain.usecase.UpdateTaskUseCase
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob
import org.koin.dsl.module

val domainModule = module {
    single {
        CoroutineScope(Dispatchers.Default + SupervisorJob())
    }
    factory {
        GetTasksUseCase(
            scope = get(),
            repository = get(),
        )
    }
    factory {
        AddTaskUseCase(
            scope = get(),
            repository = get()
        )
    }

    factory {
        DeleteTaskUseCase(
            scope = get(),
            repository = get()
        )
    }

    factory {
        UpdateTaskUseCase(
            scope = get(),
            repository = get()
        )
    }
}