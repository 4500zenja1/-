#include "generation.h"
#include <random>

int generate(int rolls) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist6(1,6);

  return dist6(rng) + (rolls > 1 ? dist6(rng) : 0);
}