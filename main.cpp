#include <wheels/io/io.hpp>

int main() {
  auto value = wheels::io::Input<int>("Enter integer:");
  std::cout << value << std::endl;
  return 0;
}
