set( PROJECT_NAME DP )

cmake_minimum_required( VERSION 2.8 )

project( ${PROJECT_NAME} )

#########################################################
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

MESSAGE("Build type: " ${CMAKE_BUILD_TYPE})

set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS}   -Wall -O3 -march=native")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O3 -march=native")

# 检测C++版本支持
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
   add_definitions(-DCOMPILEDWITHC11)
   message(STATUS "Using flag -std=c++11.")
elseif(COMPILER_SUPPORTS_CXX0X)
   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
   add_definitions(-DCOMPILEDWITHC0X)
   message(STATUS "Using flag -std=c++0x.")
else()
   message(FATAL_ERROR "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

set( CMAKE_VERBOSE_MAKEFILE off )
#########################################################
#find_package( REQUIRED)
#########################################################
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin )

add_subdirectory( example/CREATIONAL/AbstractFactory/ )
add_subdirectory( example/CREATIONAL/Builder/ )
add_subdirectory( example/CREATIONAL/FactoryMethod/ )
add_subdirectory( example/CREATIONAL/Prototype/ )
add_subdirectory( example/CREATIONAL/Singleton/ )

add_subdirectory( example/STRUCTURAL/AdapterClass )
add_subdirectory( example/STRUCTURAL/AdapterObject )
add_subdirectory( example/STRUCTURAL/Bridge )
add_subdirectory( example/STRUCTURAL/Composite )
add_subdirectory( example/STRUCTURAL/Decorator )
add_subdirectory( example/STRUCTURAL/Facade )
add_subdirectory( example/STRUCTURAL/Flyweight )
add_subdirectory( example/STRUCTURAL/Proxy )

add_subdirectory( example/BEHAVIOURAL/ChainOfResponsibility )
add_subdirectory( example/BEHAVIOURAL/Command )
add_subdirectory( example/BEHAVIOURAL/Interpreter )
add_subdirectory( example/BEHAVIOURAL/Iterator )
add_subdirectory( example/BEHAVIOURAL/Mediator )
add_subdirectory( example/BEHAVIOURAL/Memento )
add_subdirectory( example/BEHAVIOURAL/Observer )
add_subdirectory( example/BEHAVIOURAL/State )
add_subdirectory( example/BEHAVIOURAL/Strategy )
add_subdirectory( example/BEHAVIOURAL/Template )
add_subdirectory( example/BEHAVIOURAL/Visitor )
