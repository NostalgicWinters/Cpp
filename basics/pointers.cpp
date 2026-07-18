#include <format>
#include <print>

int main() {
  // The data type does not matter to the pointer
  int var = 9;
  void *ptr = &var;
  std::println("{}", ptr);
  int *ptr1 = &var;
  *ptr1 = 10;
  std::println("{}", var);

  // References

  int a = 5;
  int &ref = a;
  std::print("{}", ref);
}
