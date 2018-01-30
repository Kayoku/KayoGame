#ifndef DAIFUGO_DEFINE
#define DAIFUGO_DEFINE

#include <iostream>
#include <vector>
#include <functional>

#include "Player.h"

class Daifugo {
 private:
  std::vector<std::reference_wrapper<Player>> players;

 public:
  Daifugo()
   {}

  // Player handler
  Player& get_player(int i) { return players[i].get(); }
  void add_player(Player &player);

  void start();
};

#endif
