cmake_minimum_required(VERSION 3.26)
project(SGV_Minor_CPP_Projects)

# C Character Arrays - Non-Explicit Size
set(target "C Character Arrays - Non-Explicit Size")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# C Characters - Dynamic Memory Allocation
set(target "C Characters - Dynamic Memory Allocation")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Class Template - Test
set(target "Class Template - Test")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/TestMe.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Copy Constructors - Test 3
set(target "Copy Constructors - Test 3")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/practice_test_obj.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Copy Constructors - Test 7
set(target "Copy Constructors - Test 7")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/obj.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Copy Constructors - Test 8
set(target "Copy Constructors - Test 8")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/obj.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# CPP String Arrays - Test 14
set(target "CPP String Arrays - Test 14")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# C String Comparison - Test
set(target "C String Comparison - Test")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Enumerations - Scoped
set(target "Enumerations - Scoped")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Enumerations - Scoped Member Attributes
set(target "Enumerations - Scoped Member Attributes")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/Labels.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Exception - Divide by Zero
set(target "Exception - Divide by Zero")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/divide_by_zero_exception.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Exception - Empty Input
set(target "Exception - Empty Input")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/Empty_String_Exception.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Factorial - Looping with Vectors
set(target "Factorial - Looping with Vectors")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Fibonacci - Looping with Vectors
set(target "Fibonacci - Looping with Vectors")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Function Template - Test 1
set(target "Function Template - Test 1")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Functor Object - Test 2
set(target "Functor Object - Test 2")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Inheritance - Test 1
set(target "Inheritance - Test 1")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Inheritance - Test 2
set(target "Inheritance - Test 2")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/obj1.cpp ${target}/obj2.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Interface - Output Stream
set(target "Interface - Output Stream")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/Derived_Output_Obj.cpp ${target}/I_Output_Me.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Joker Game Joke
set(target "Joker Game Joke")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Lambda Expressions as Function Parameters
set(target "Lambda Expressions as Function Parameters")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Lambda Functions - Implicit Data Type
set(target "Lambda Functions - Implicit Data Type")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Lambda Functions - Stateful
set(target "Lambda Functions - Stateful")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/Stateful_Obj.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Lambda Function - std sort example
set(target "Lambda Function - std sort example")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Memory Allocation - Static vs Dynamic
set(target "Memory Allocation - Static vs Dynamic")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Multiple Inheritance Example
set(target "Multiple Inheritance Example")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Multithreading - Asynchronous
set(target "Multithreading - Asynchronous")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Multithreading - Mutex
set(target "Multithreading - Mutex")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Multithreading - Mutex and C Array
set(target "Multithreading - Mutex and C Array")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Multithreading - Mutex, Smart Pointer and C Array
set(target "Multithreading - Mutex, Smart Pointer and C Array")
string(REPLACE " " "_" buffer ${target})
string(REPLACE "," "_+" buffer ${buffer})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Object Raw Pointer Attributes - Move Constructor
set(target "Object Raw Pointer Attributes - Move Constructor")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/obj.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Object Raw Pointers - Move Constructor - Test 3
set(target "Object Raw Pointers - Move Constructor - Test 3")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/obj.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Objects - Static Attributes
set(target "Objects - Static Attributes")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/obj3test.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Pass by Reference - Vector Example
set(target "Pass by Reference - Vector Example")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Pointers - Declaration and Assignment
set(target "Pointers - Declaration and Assignment")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Predicate Lambda + Function Template
set(target "Predicate Lambda + Function Template")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Predicate Lambdas - rvalue Move Semantics
set(target "Predicate Lambdas - rvalue Move Semantics")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Predicate Lambdas - Testing Conditionals
set(target "Predicate Lambdas - Testing Conditionals")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Returning Lambda Expressions from Functions
set(target "Returning Lambda Expressions from Functions")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Smart Pointers - Circular
set(target "Smart Pointers - Circular")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/A.cpp ${target}/B.cpp ${target}/C.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Smart Pointers - Objects
set(target "Smart Pointers - Objects")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp ${target}/obj.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# STL Algorithms - Test 1
set(target "STL Algorithms - Test 1")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# STL Algorithms - Test 2
set(target "STL Algorithms - Test 2")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# STL Algorithms - Test 3
set(target "STL Algorithms - Test 3")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# STL Algorithms - Test 4
set(target "STL Algorithms - Test 4")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# STL Containers - Subscript Dereference
set(target "STL Containers - Subscript Dereference")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# STL Iterators - Test 1
set(target "STL Iterators - Test 1")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# STL Iterators - Test 2
set(target "STL Iterators - Test 2")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Stringstream - Extraction
set(target "Stringstream - Extraction")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Stringstream - Insertion
set(target "Stringstream - Insertion")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Unique Smart Pointers - Primitive
set(target "Unique Smart Pointers - Primitive")
string(REPLACE " " "_" buffer ${target})
add_executable(${buffer} ${target}/main.cpp)
set_target_properties(${buffer} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")


