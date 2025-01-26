# Undefined Behavior in C++: Modifying std::vector after obtaining data pointer

This repository demonstrates a common C++ error: modifying a `std::vector` after obtaining a pointer to its internal data using `vec.data()`. This action invalidates the pointer, leading to undefined behavior.

## The Bug
The `bug.cpp` file contains code that retrieves a pointer to the internal data of a vector. The vector is subsequently modified, rendering the pointer invalid.

## The Solution
The `bugSolution.cpp` file presents a corrected version. It avoids using the pointer after the vector's size changes. It emphasizes safe usage of `std::vector` and memory management.