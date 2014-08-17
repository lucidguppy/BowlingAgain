/*
 * BowlingGame.cpp
 *
 *  Created on: Aug 16, 2014
 *      Author: matt
 */

#include "BowlingGame.h"

Game::Game()
    : score(0) {
  // TODO Auto-generated constructor stub

}

Game::~Game() {
  // TODO Auto-generated destructor stub
}

void Game::roll(int pins) {
  rolls.push_back(pins);
}

bool Game::isSpare(int ii) {
  return 10 == (rolls[ii] + rolls[ii + 1]);
}

int Game::getScore() {
  int score = 0;
  int ii = 0;
  for (int frameIndex = 0; frameIndex < 10; ++frameIndex) {
    if (isSpare(ii)) {
      score += 10 + rolls[ii + 2];
    } else {
      score += rolls[ii] + rolls[ii + 1];
    }
    ii += 2;
  }
  return score;
}
