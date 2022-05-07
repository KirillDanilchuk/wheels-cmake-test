#include <wheels/io/io.hpp>
#include <wheels/support/assert.hpp>

int main() {
  using namespace wheels;
  auto value = Input<int>("Enter value:");

  WHEELS_ASSERT(value < 42, "Too small value");

  return 0;
}
