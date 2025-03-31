package com.marcelo.todokit.di

import com.marcelo.todokit.domain.core.ThreadContextProvider
import com.marcelo.todokit.domain.usecase.AddTaskUseCase
import com.marcelo.todokit.domain.usecase.DeleteTaskUseCase
import com.marcelo.todokit.domain.usecase.GetTasksUseCase
import com.marcelo.todokit.domain.usecase.UpdateTaskUseCase
import kotlinx.coroutines.CoroutineScope
import org.koin.dsl.module

val domainModule = module {
    single {
        ThreadContextProvider()
    }
    factory { (scope: CoroutineScope) ->
        GetTasksUseCase(
            scope = scope,
            repository = get(),
        )
    }
    factory {  (scope: CoroutineScope) ->
        AddTaskUseCase(
            scope = scope,
            repository = get()
        )
    }

    factory { (scope: CoroutineScope) ->
        DeleteTaskUseCase(
            scope = scope,
            repository = get()
        )
    }

    factory { (scope: CoroutineScope) ->
        UpdateTaskUseCase(
            scope = scope,
            repository = get()
        )
    }
}