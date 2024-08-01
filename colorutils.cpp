#include "colorutils.h"
#include <sstream>

namespace TelCoColorCoder {
	constexpr int numberOfMajorColors = 5;
	constexpr int numberOfMinorColors = 5;

	ColorPair GetColorFromPairNumber(int pairNumber)
	{
		int zeroBasedPairNumber = pairNumber - 1;
		MajorColor majorColor =
			(MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
		MinorColor minorColor =
			(MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
		return ColorPair(majorColor, minorColor);
	}

	int GetPairNumberFromColor(MajorColor major, MinorColor minor)
	{
		return major * numberOfMinorColors + minor + 1;
	}

	std::string GetFormattedColorCoding() {
		std::ostringstream oss;
		for (int colorPairIndex = 1; colorPairIndex <= numberOfMajorColors * numberOfMinorColors; ++colorPairIndex)
		{
			ColorPair colorPair = GetColorFromPairNumber(colorPairIndex);
			oss << "Pair Number : " << colorPairIndex << " - " << colorPair.ToString() << "\n";
		}
		return oss.str();
	}
}