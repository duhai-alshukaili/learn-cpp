# C++23 Learning Roadmap

This project is organized as a set of small standalone programs. Each example
should focus on one idea and build as its own executable.

## Build

Configure once:

```bash
cmake -S . -B build
```

Build everything:

```bash
cmake --build build
```

Build one example:

```bash
cmake --build build --target basics_hello
```

Run one example:

```bash
./build/topics/01_basics/basics_hello
```

## Adding A New Example

1. Create a `.cpp` file in the matching topic folder.
2. Add one line to that topic's `CMakeLists.txt`:

```cmake
add_learning_example(topic_name_example_name example_name.cpp)
```

3. Configure or build with CMake.

## Topic Order

1. Basics
2. Control flow
3. Functions
4. Types and conversions
5. References and pointers
6. Arrays and strings
7. Classes
8. RAII and lifetime
9. Templates
10. Standard library
11. Error handling
12. Modern C++23
13. Files and streams
14. Mini-projects
