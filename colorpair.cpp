#include "colorpair.h"

namespace TelCoColorCoder
{
	const char* MajorColorNames[] =
	{
		"White", "Red", "Black", "Yellow", "Violet"
	};

	const char* MinorColorNames[] =
	{
		"Blue", "Orange", "Green", "Brown", "Slate"
	};

	ColorPair::ColorPair(MajorColor major, MinorColor minor) :
		majorColor(major), minorColor(minor)
	{}

	MajorColor ColorPair::getMajor() const
	{
		return majorColor;
	}
	MinorColor ColorPair::getMinor() const
	{
		return minorColor;
	}

	std::string ColorPair::ToString() const
	{
		std::string colorPairStr = MajorColorNames[majorColor];
		colorPairStr += " ";
		colorPairStr += MinorColorNames[minorColor];
		return colorPairStr;
	}
}