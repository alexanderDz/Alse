cmake_minimum_required(VERSION 2.8)

project(db_testing)
add_executable(${PROJECT_NAME} "insert_db.cpp" )
target_link_libraries (${PROJECT_NAME} sqlite3 )
