#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <string>

namespace TelCoColorCoder
{
	enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
	enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

	class ColorPair
	{
	private:
		MajorColor majorColor;
		MinorColor minorColor;
	public:
		ColorPair(MajorColor major, MinorColor minor);
		MajorColor getMajor() const;
		MinorColor getMinor() const;
		std::string ToString() const;
	};
}

#endif