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

void BowlingGameTest::rollSpare() {
  g.roll(5);
  g.roll(5);
}

TEST_CASE_METHOD(BowlingGameTest, "testGutterGame", "[bowlingGame]") {
  rollMany(20, 0);
  REQUIRE(0 == g.getScore());
}

TEST_CASE_METHOD(BowlingGameTest, "allOnesGame", "[bowlingGame]") {
  rollMany(20, 1);
  REQUIRE(20 == g.getScore());
}

TEST_CASE_METHOD(BowlingGameTest, "oneSpareGame", "[bowlingGame]") {
  rollSpare();
  g.roll(3);
  rollMany(17, 0);
  REQUIRE(16 == g.getScore());
}

TEST_CASE_METHOD(BowlingGameTest, "oneStrikeGame", "[bowlingGame]") {
  g.roll(10);
  g.roll(3);
  g.roll(3);
  rollMany(17, 0);
  REQUIRE(22 == g.getScore());
}
