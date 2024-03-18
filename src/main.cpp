#include "accumulator/Accumulator.h"

#include <format>
#include <iostream>

auto main() -> int {
  auto accumulatorInstance = accumulator::Accumulator();

  std::cout << std::format("Accumulator value: {}", accumulatorInstance.get());

  accumulatorInstance.add(1);
  std::cout << std::format("\nAccumulator value: {}",
                           accumulatorInstance.get());

  accumulatorInstance.reset();
  std::cout << std::format("\nAccumulator value: {}",
                           accumulatorInstance.get());

  return 0;
}
