package com.marcelo.todokit.domain.repositories

import com.marcelo.todokit.domain.entities.Task
import com.marcelo.todokit.domain.model.TaskModel
import kotlinx.coroutines.flow.Flow

interface TaskRepositoryInterface {
    fun addTask(task: Task): Flow<Boolean>
    fun getAllTasks(): Flow<List<TaskModel>>
    fun updateTask(task: Task): Flow<Boolean>
    fun deleteTask(taskId: Long): Flow<Boolean>
}