/*
 * BowlingGame.h
 *
 *  Created on: Aug 16, 2014
 *      Author: matt
 */

#ifndef BOWLINGGAME_H_
#define BOWLINGGAME_H_

class Game {
 public:
  Game();
  virtual ~Game();
  void roll (int pins);
};

#endif /* BOWLINGGAME_H_ */
