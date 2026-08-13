// Static outside of class is used to make the variable specific only upto the
// scope of it's own file
#include <print>

extern int roll;

int main() {
  std::println("static");
  std::println("{}", roll);
  return 0;
}
