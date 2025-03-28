package com.marcelo.todokit.domain.usecase

import com.marcelo.todokit.domain.core.UseCase
import com.marcelo.todokit.domain.entities.Task
import com.marcelo.todokit.domain.repositories.TaskRepositoryInterface
import kotlinx.coroutines.CoroutineScope
import org.koin.core.error.MissingPropertyException

class UpdateTaskUseCase(
    scope: CoroutineScope,
    private val repository: TaskRepositoryInterface
): UseCase<Boolean, Task>(scope = scope){
    override fun run(params: Task?) =  when(params) {
        null -> throw MissingPropertyException("Params cannot be null")
        else -> repository.updateTask(params)
    }
}