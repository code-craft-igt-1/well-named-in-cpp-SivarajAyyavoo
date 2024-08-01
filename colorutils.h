#ifndef COLORUTILS_H
#define COLORUTILS_H

#include "colorpair.h"

namespace TelCoColorCoder
{
	ColorPair GetColorFromPairNumber(int pairNumber);
	int GetPairNumberFromColor(MajorColor major, MinorColor minor);
	std::string GetFormattedColorCoding();
}

#endif