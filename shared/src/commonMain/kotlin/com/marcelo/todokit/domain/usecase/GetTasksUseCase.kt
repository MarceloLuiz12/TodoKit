package com.marcelo.todokit.domain.usecase

import com.marcelo.todokit.domain.core.UseCase
import com.marcelo.todokit.domain.model.TaskModel
import com.marcelo.todokit.domain.repositories.TaskRepositoryInterface
import kotlinx.coroutines.CoroutineScope

class GetTasksUseCase(
    scope: CoroutineScope,
    private val repository: TaskRepositoryInterface
) : UseCase<List<TaskModel>, Unit>(scope = scope){
    override fun run(params: Unit?) = repository.getAllTasks()
}