package com.marcelo.todokit.usecases

import com.marcelo.todokit.domain.entities.Task
import com.marcelo.todokit.domain.usecase.UpdateTaskUseCase
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

class UpdateTaskIOSHelperUseCase: KoinComponent {
    private val updateTaskUseCase by inject<UpdateTaskUseCase>()
    fun updateTask(
        task: Task,
        success: (Boolean) -> Unit,
        error: (Throwable) -> Unit
    ) = updateTaskUseCase(
        params = task,
        onSuccess = success,
        onError = error
    )
}