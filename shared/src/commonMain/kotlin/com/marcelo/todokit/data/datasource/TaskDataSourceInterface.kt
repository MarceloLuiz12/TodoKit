package com.marcelo.todokit.data.datasource

import com.marcelo.todokit.domain.entities.Task
import kotlinx.coroutines.flow.Flow

interface TaskDataSourceInterface {
    fun saveTask(task: Task): Flow<Boolean>
    fun getTasks(): Flow<List<Task>>
    fun updateTask(task: Task): Flow<Boolean>
    fun deleteTask(taskId: Int): Flow<Boolean>
}