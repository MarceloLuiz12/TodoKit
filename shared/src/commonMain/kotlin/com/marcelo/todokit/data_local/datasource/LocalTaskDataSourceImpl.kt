package com.marcelo.todokit.data_local.datasource

import com.marcelo.todokit.TaskDataBase
import com.marcelo.todokit.data.datasource.TaskDataSourceInterface
import com.marcelo.todokit.data_local.database.DatabaseDriverFactoryInterface
import com.marcelo.todokit.domain.entities.Task
import com.marcelo.todokit.domain.model.TaskModel
import kotlinx.coroutines.flow.flow

class LocalTaskDataSourceImpl(
    driverFactory: DatabaseDriverFactoryInterface
) : TaskDataSourceInterface {

    private val database = TaskDataBase(driverFactory.createDriver())
    private val query = database.taskDataBaseQueries

    override fun saveTask(task: Task) = flow {
        query.insertTask(
            title = task.title,
            description = task.description.orEmpty(),
            status = task.status,
            createdAt = task.createdAt
        )
        emit(true)
    }

    override fun getTasks() = flow {
        val result = query
            .readAllTasks()
            .executeAsList()
            .map {
                TaskModel(
                    id = it.id,
                    title = it.title,
                    description = it.description,
                    status = it.status,
                    createdAt = it.createdAt
                )
            }
        emit(result)
    }


    override fun updateTask(task: Task) = flow {
        query.updateTask(
            title = task.title,
            description = task.description.orEmpty(),
            status = task.status,
            id = task.id
        )
        emit(true)
    }

    override fun deleteTask(taskId: Long) = flow {
        query.deleteTask(taskId)
        emit(true)
    }
}
