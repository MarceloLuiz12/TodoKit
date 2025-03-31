package com.marcelo.todokit.domain.model

import com.marcelo.todokit.domain.enums.TaskStatusEnum

data class TaskModel(
    val id: Long,
    val title: String,
    val description: String?,
    val status: Long = TaskStatusEnum.TODO.value,
    val createdAt: Long
)