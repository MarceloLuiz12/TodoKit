package com.marcelo.todokit.domain.enums

enum class TaskStatusEnum(
    val value: Long
) {
    TODO(0),
    IN_PROGRESS(1),
    DONE(2);

    companion object {
        fun valueOf(value: Long) = entries.find { it.value == value } ?: TODO
    }
}