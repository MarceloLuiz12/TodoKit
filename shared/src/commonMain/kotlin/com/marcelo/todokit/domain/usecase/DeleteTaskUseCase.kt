package com.marcelo.todokit.domain.usecase

import com.marcelo.todokit.domain.core.UseCase
import com.marcelo.todokit.domain.repositories.TaskRepositoryInterface
import kotlinx.coroutines.CoroutineScope
import org.koin.core.error.MissingPropertyException

class DeleteTaskUseCase(
    scope: CoroutineScope,
    private val repository: TaskRepositoryInterface
) : UseCase<Boolean, Long>(scope = scope) {
    override fun run(params: Long?) = when (params) {
        null -> throw MissingPropertyException("Params cannot be null")
        else -> repository.deleteTask(params)
    }
}