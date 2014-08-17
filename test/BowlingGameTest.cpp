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

TEST_CASE_METHOD(BowlingGameTest, "testGutterGame", "[bowlingGame]") {
  for (int ii = 0; ii < 20; ++ii) {
    g.roll(0);
  }
  REQUIRE(0 == g.score());
}
