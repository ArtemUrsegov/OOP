cmake_minimum_required(VERSION 3.5.0)

set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")

set(SOURCES

    ./src/my_vector.h
    #./src/train.h
    #./src/wagon.h
    
    )

include_directories(
    ./src/
    )
add_executable(task1 ./main.cpp ${SOURCES})
