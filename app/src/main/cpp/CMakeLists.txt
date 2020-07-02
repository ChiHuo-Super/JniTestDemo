

cmake_minimum_required(VERSION 3.4.1)

add_library(jni-test
        SHARED
        native-lib.cpp
        test_one.cpp)

find_library(log-lib
        log)

target_link_libraries(jni-test
        ${log-lib})

# 导入cpp目录下的所有头文件
include_directories(src/main/cpp/)