#ifndef RANDOM_GENERATOR_DEFINE 
#define RANDOM_GENERATOR_DEFINE

#include <iostream>
#include <random>

// https://diego.assencio.com/?index=6890b8c50169ef45b74db135063c227c

class RandomGenerator
{
 private:
  std::mt19937 rng;
  std::

 public:
  RandomGenerator():
   rng{std::random_device{}}
  {}

  int get_random_int(int a, int b)
  {

  }
};

#endif
