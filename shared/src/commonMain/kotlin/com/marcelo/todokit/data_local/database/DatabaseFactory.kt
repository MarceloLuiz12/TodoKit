package com.marcelo.todokit.data_local.database

import app.cash.sqldelight.db.SqlDriver

interface DatabaseDriverFactoryInterface {
    fun createDriver(): SqlDriver
}