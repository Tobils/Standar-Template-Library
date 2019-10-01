cmake_minimum_required(VERSION 3.7)
SET(CMAKE_CXX_STANDARD 11)
project(Thread-basic)

# setting for cross compiler

set(SOURCE_FILE
    src/main.cpp
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
ADD_EXECUTABLE(${PROJECT_NAME} ${SOURCE_FILE})


include_directories(include)
# load library gst
target_link_libraries(${PROJECT_NAME} pthread)

# compile manually
# gcc playback-tutorial-1.c -o playback-tutorial-1 `pkg-config --cflags --libs gstreamer-1.0`