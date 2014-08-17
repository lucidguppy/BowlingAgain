/*
 * BowlingGameTest.h
 *
 *  Created on: Aug 16, 2014
 *      Author: matt
 */

#ifndef BOWLINGGAMETEST_H_
#define BOWLINGGAMETEST_H_
#include "BowlingGame.h"
#include "catch.hpp"

class BowlingGameTest {
 public:
  Game g;
  BowlingGameTest();
  virtual ~BowlingGameTest();
  void rollMany(int n, int pins);
};

#endif /* BOWLINGGAMETEST_H_ */
