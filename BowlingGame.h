/*
 * BowlingGame.h
 *
 *  Created on: Aug 16, 2014
 *      Author: matt
 */

#ifndef BOWLINGGAME_H_
#define BOWLINGGAME_H_

#include <vector>

class Game {
 private:
  int score;
  std::vector<int> rolls;

  bool isSpare(int ii);

 public:
  Game();
  virtual ~Game();
  void roll (int pins);
  int getScore();


};

#endif /* BOWLINGGAME_H_ */
