# Dangling Pointer in C++

This repository demonstrates a common C++ error involving dangling pointers. The `bug.cpp` file contains the erroneous code that attempts to delete a pointer to a stack-allocated variable.  The `bugSolution.cpp` file provides a corrected version.

**Problem:**
Deleting a pointer to a stack variable results in undefined behavior because the stack variable's memory is automatically managed. The delete operation is meant for dynamically allocated memory using `new`.

**Solution:**
To fix the problem, allocate memory on the heap using `new` and subsequently release this memory using `delete`.

**Key Learning:**
Understand the difference between stack and heap memory management in C++. Avoid attempting to `delete` pointers to stack variables.