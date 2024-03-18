#include "Accumulator.h"

namespace accumulator {

Accumulator::Accumulator() : value(0) {}

void Accumulator::add(int value) { this->value += value; }

auto Accumulator::get() const -> int { return value; }

void Accumulator::reset() { value = 0; }

} // namespace accumulator
