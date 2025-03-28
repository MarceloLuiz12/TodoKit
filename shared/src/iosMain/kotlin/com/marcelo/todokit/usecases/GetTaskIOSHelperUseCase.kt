package com.marcelo.todokit.usecases

import com.marcelo.todokit.domain.entities.Task
import com.marcelo.todokit.domain.usecase.GetTasksUseCase
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

class GetTaskIOSHelperUseCase: KoinComponent {
    private val getAllTaskUseCase by inject<GetTasksUseCase>()
    fun getAllTasks(
        success: (List<Task>) -> Unit,
        error: (Throwable) -> Unit
    ) = getAllTaskUseCase(
        onSuccess = success,
        onError = error
    )
}