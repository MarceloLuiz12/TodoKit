package com.marcelo.todokit.usecases

import com.marcelo.todokit.domain.usecase.DeleteTaskUseCase
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

class DeleteTaskIOSHelperUceCase: KoinComponent {
    private val deleteTaskUseCase by inject<DeleteTaskUseCase>()
    fun deleteTask(
        id: Int,
        success: (Boolean) -> Unit,
        error: (Throwable) -> Unit
    ) = deleteTaskUseCase(
        params = id,
        onSuccess = success,
        onError = error
    )
}