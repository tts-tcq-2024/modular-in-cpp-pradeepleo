#ifndef COLORCODE_H
#define COLORCODE_H

#include <string>

namespace TelCoColorCoder {

    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    extern const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
    extern const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

    int const numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    int const numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();
    };

}
#endif
