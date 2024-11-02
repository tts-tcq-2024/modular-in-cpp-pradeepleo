#ifndef TESTS_H
#define TESTS_H

#include "ColorMapping.h"
#include <iostream>
#include <assert.h>

void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);
void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);

#endif
