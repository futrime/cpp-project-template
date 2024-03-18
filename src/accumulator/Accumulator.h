#pragma once

namespace accumulator {

class Accumulator {
public:
  Accumulator();
  Accumulator(const Accumulator &) = default;
  Accumulator(Accumulator &&) = default;
  auto operator=(const Accumulator &) -> Accumulator & = default;
  auto operator=(Accumulator &&) -> Accumulator & = default;
  ~Accumulator() = default;

  void add(int value);
  [[nodiscard]] auto get() const -> int;
  void reset();

private:
  int value;
};

} // namespace accumulator
