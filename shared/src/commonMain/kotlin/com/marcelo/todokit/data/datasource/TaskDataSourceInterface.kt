package com.marcelo.todokit.data.datasource

import com.marcelo.todokit.domain.entities.Task
import com.marcelo.todokit.domain.model.TaskModel
import kotlinx.coroutines.flow.Flow

interface TaskDataSourceInterface {
    fun saveTask(task: Task): Flow<Boolean>
    fun getTasks(): Flow<List<TaskModel>>
    fun updateTask(task: Task): Flow<Boolean>
    fun deleteTask(taskId: Long): Flow<Boolean>
}