package com.marcelo.todokit.data_local.datasource

import com.marcelo.todokit.data.datasource.TaskDataSourceInterface
import com.marcelo.todokit.domain.entities.Task
import com.marcelo.todokit.domain.enums.TaskStatusEnum
import kotlinx.coroutines.flow.flow

class LocalTaskDataSourceImpl : TaskDataSourceInterface {
    private val tasks = mutableListOf<Task>(
        Task(1, "Task 1", "Description 1", TaskStatusEnum.TODO, 19L),
        Task(2, "Task 2", "Description 2", TaskStatusEnum.DONE, 12L ),
        Task(3, "Task 3", "Description 3", TaskStatusEnum.DONE, 12L ),
        Task(4, "Task 4", "Description 4", TaskStatusEnum.DONE, 12L ),
    )

    override fun saveTask(task: Task)  = flow {
        tasks.add(task)
        emit(true)
    }

    override fun getTasks() = flow {
        emit(tasks)
    }

    override fun updateTask(task: Task) = flow {
        tasks.removeAll { it.id == task.id }
        tasks.add(task)
        emit(true)
    }

    override fun deleteTask(taskId: Int)  = flow {
        tasks.removeAll { it.id == taskId }
        emit(true)
    }
}
