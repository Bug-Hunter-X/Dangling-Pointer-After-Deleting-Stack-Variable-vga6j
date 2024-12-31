#include <iostream>

int main() {
  int *ptr = new int(10); // Allocate memory on the heap
  *ptr = 20; 
  std::cout << *ptr << std::endl; // Output: 20
  delete ptr; // Properly deallocate heap memory
  ptr = nullptr; // Good practice to set pointer to null after deletion
  return 0;
}