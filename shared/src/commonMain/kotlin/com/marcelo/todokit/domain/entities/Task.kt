package com.marcelo.todokit.domain.entities

import com.marcelo.todokit.domain.enums.TaskStatusEnum

data class Task(
    val id: Long,
    val title: String,
    val description: String?,
    val status: Long = TaskStatusEnum.TODO.value,
    val createdAt: Long
)