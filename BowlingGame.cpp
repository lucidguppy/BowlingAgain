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
}

void Game::roll(int pins) {
  rolls.push_back(pins);
}

bool Game::isSpare(int ii) {
  return 10 == (rolls[ii] + rolls[ii + 1]);
}

int Game::strikeBonus(int frameIndex) {
  return 10 + rolls[frameIndex + 1] + rolls[frameIndex + 2];
}

int Game::spareBonus(int frameIndex) {
  return 10 + rolls[frameIndex + 2];
}

int Game::sumOfPinsInFrame(int frameIndex) {
  return rolls[frameIndex] + rolls[frameIndex + 1];
}

int Game::getScore() {
  int score = 0;
  int frameIndex = 0;
  for (int frame = 0; frame < 10; ++frame) {
    if (10 == rolls[frameIndex]) {
      score += strikeBonus(frameIndex);
      frameIndex += 1;
    } else if (isSpare(frameIndex)) {
      score += spareBonus(frameIndex);
      frameIndex += 2;
    } else {
      score += sumOfPinsInFrame(frameIndex);
      frameIndex += 2;
    }
  }
  return score;
}
