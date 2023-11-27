cmake_minimum_required(VERSION 3.5.0)

project(prog1)

set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")

set(SOURCES
    ./src/IShape.h
    ./src/Circle.h
    ./src/Circle.cpp
    ./src/RedSquare.h
    ./src/RedSquare.cpp
    ./src/Triangle.h
    ./src/Triangle.cpp
    ./src/Rectangle.h
    ./src/Rectangle.cpp

    )

include_directories(
    ./src/
    )
add_executable(SquareRed ./main.cpp ${SOURCES})
