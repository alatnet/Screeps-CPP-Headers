#pragma once

#include "RoomObject.h"

namespace Screeps {
	class Flag : public RoomObject {
	public:
		Flag();
		
	public:
		int color;
		var memory;
		SCREEPS_STR name;
		int secondaryColor;
		
	public:
		bool remove();
		int setColor(SCREEPS_STR color, SCREEPS_STR secondaryColor="");
		int setPosition(int x, int y);
		int setPosition(RoomPosition pos);
	};
}