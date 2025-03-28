package com.marcelo.todokit.domain.entities

import com.marcelo.todokit.domain.enums.TaskStatusEnum

data class Task(
    val id: Int,
    val title: String,
    val description: String?,
    val status: TaskStatusEnum,
    val createdAt: Long
)