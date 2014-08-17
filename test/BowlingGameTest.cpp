/*
 * BowlingGameTest.cpp
 *
 *  Created on: Aug 16, 2014
 *      Author: matt
 */

#include "BowlingGameTest.h"
#include "catch.hpp"
#include "BowlingGame.h"

BowlingGameTest::BowlingGameTest()
    : g(Game()) {
}

BowlingGameTest::~BowlingGameTest() {
}

void BowlingGameTest::rollMany(int n, int pins) {
  for (int ii = 0; ii < n; ++ii) {
    g.roll(pins);
  }
}

TEST_CASE_METHOD(BowlingGameTest, "testGutterGame", "[bowlingGame]") {
  rollMany(20, 0);
  REQUIRE(0 == g.getScore());
}

TEST_CASE_METHOD(BowlingGameTest, "allOnesGame", "[bowlingGame]") {
  rollMany(20, 1);
  REQUIRE(20 == g.getScore());
}
