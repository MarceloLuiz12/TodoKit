package com.marcelo.todokit.data_local.database

import android.content.Context
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.android.AndroidSqliteDriver
import com.marcelo.todokit.TaskDataBase

class AndroidDatabaseDriverFactoryImpl(
    private val context: Context
) : DatabaseDriverFactoryInterface {
    override fun createDriver(): SqlDriver {
        return AndroidSqliteDriver(
            schema = TaskDataBase.Schema,
            context = context,
            name = "tasks.db"
        )
    }
}