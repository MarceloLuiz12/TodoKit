package com.marcelo.todokit.data.repositories

import com.marcelo.todokit.data.datasource.TaskDataSourceInterface
import com.marcelo.todokit.domain.entities.Task
import com.marcelo.todokit.domain.repositories.TaskRepositoryInterface

class TaskRepositoryImpl(
    private val dataSource: TaskDataSourceInterface
): TaskRepositoryInterface {
    override fun addTask(task: Task) = dataSource.saveTask(task)

    override fun getAllTasks() = dataSource.getTasks()

    override fun updateTask(task: Task) = dataSource.updateTask(task)

    override fun deleteTask(taskId: Long) = dataSource.deleteTask(taskId)
}