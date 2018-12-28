cmake_minimum_required(VERSION 3.12)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})
find_package(Boost COMPONENTS system filesystem REQUIRED)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-std=c++11 -pthread -lboost_thread")

add_executable(untitled2 include/connectionHandler.h src/connectionHandler.cpp src/echoClient.cpp src/serverToClient.cpp include/serverToClient.h src/client.cpp)

target_link_libraries(untitled2 ${Boost_LIBRARIES})
