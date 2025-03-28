package com.marcelo.todokit.domain.repositories

import com.marcelo.todokit.domain.entities.Task
import kotlinx.coroutines.flow.Flow

interface TaskRepositoryInterface {
    fun addTask(task: Task): Flow<Boolean>
    fun getAllTasks(): Flow<List<Task>>
    fun updateTask(task: Task): Flow<Boolean>
    fun deleteTask(taskId: Int): Flow<Boolean>
}