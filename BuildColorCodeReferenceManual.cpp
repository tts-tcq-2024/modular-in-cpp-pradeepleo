#include <string>
#include "ColorMapping.h"

std::string BuildColorCodeReferenceManual() {
  std::string referenceManual;
  referenceManual = "\nCode\tMajor Color\tMinor Color";
  for(int pairNumber = 1; pairNumber <= 25; ++pairNumber) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    referenceManual += "\n"; 
    referenceManual += std::to_string(pairNumber);
    referenceManual += "\t";
    referenceManual += colorPair.ToString();
  }

  return referenceManual;
}
