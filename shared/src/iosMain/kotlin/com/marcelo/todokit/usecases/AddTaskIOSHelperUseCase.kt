package com.marcelo.todokit.usecases

import com.marcelo.todokit.domain.entities.Task
import com.marcelo.todokit.domain.usecase.AddTaskUseCase
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

class AddTaskIOSHelperUseCase : KoinComponent {
    private val addTaskUseCase by inject<AddTaskUseCase>()
    fun addTask(
        task: Task,
        success: (Boolean) -> Unit,
        error: (Throwable) -> Unit
    ) = addTaskUseCase(
        params = task,
        onSuccess = success,
        onError = error
    )
}