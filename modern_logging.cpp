#include <format>
#include <print>
#include <string>

int main() {
  std::string str = std::format("Hello {}", "Dev");
  std::println("{}", str);
}
