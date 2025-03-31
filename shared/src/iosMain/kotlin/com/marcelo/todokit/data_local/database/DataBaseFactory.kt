package com.marcelo.todokit.data_local.database

import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.native.NativeSqliteDriver
import com.marcelo.todokit.TaskDataBase

class IOSDatabaseDriverFactoryImpl(): DatabaseDriverFactoryInterface {
    override fun createDriver(): SqlDriver {
        return NativeSqliteDriver(TaskDataBase.Schema, "tasks.db")
    }
}