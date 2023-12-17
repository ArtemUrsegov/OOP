cmake_minimum_required(VERSION 3.5.0)
project(sort)

set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")

set (CMAKE_CXX_STANDARD 17)

set(SOURCES
       
    ./src/MySort.h
    ./src/MyTimeTest.h

    )

include_directories(
    ./src/
    )
add_executable(sort ./main.cpp ${SOURCES})


