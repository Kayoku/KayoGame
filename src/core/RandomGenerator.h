#ifndef RANDOM_GENERATOR_DEFINE 
#define RANDOM_GENERATOR_DEFINE

#include <random>

// https://diego.assencio.com/?index=6890b8c50169ef45b74db135063c227c

class RandomGenerator
{
 private:
  std::random_device device;
  std::mt19937 generator;

 public:
  RandomGenerator():
   device(),
   generator(device())
  {}

  void set_random_seed() { generator.seed(device()); }
  void set_seed(int new_seed) { generator.seed(new_seed); }

  int get_random() { return generator(); }
};

#endif
