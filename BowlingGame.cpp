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
  score += pins;
}

int Game::getScore() {
  return score;
}
