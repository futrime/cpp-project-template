#include "accumulator/Accumulator.h"

#include <iostream>

auto main() -> int {
  auto accumulatorInstance = accumulator::Accumulator();

  accumulatorInstance.add(1);
  std::cout << "Value: " << accumulatorInstance.get() << std::endl;

  return 0;
}
