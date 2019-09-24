cmake_minimum_required(VERSION 3.1)

set(SOURCE_FILES_WS_FILE
	src/queue.cpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -D_GLIBCXX_USE_CXX11_ABI=0")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


add_executable(queque ${SOURCE_FILES_WS_FILE} )
