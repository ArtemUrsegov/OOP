cmake_minimum_required(VERSION 3.5.0)
project(Complex)

set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")

set(SOURCES
       
    ./src/my_complex.h
    ./src/my_complex.cpp

    )

include_directories(
    ./src/
    )
add_executable(Complex ./main.cpp ${SOURCES})
