#ifndef COLORMAPPING_H
#define COLORMAPPING_H

#include "ColorCode.h"

namespace TelCoColorCoder {

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);

}

#endif
