package com.marcelo.todokit.domain.usecase

import com.marcelo.todokit.domain.core.UseCase
import com.marcelo.todokit.domain.entities.Task
import com.marcelo.todokit.domain.model.TaskModel
import com.marcelo.todokit.domain.repositories.TaskRepositoryInterface
import kotlinx.coroutines.CoroutineScope
import org.koin.core.error.MissingPropertyException

class GetTasksUseCase(
    scope: CoroutineScope,
    private val repository: TaskRepositoryInterface
) : UseCase<List<TaskModel>, Unit>(scope = scope){
    override fun run(params: Unit?) = when(params) {
        null -> throw MissingPropertyException("Params cannot be null")
        else -> repository.getAllTasks()
    }
}