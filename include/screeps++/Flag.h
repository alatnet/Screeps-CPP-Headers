#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "RoomObject.h"

namespace Screeps {
	class RoomPosition;

	class Flag : public RoomObject {
	public:
		Flag();
		Flag(emscripten::val flag);
		
	public:
		int color;
		emscripten::val *memory;
		SCREEPS_STR name;
		int secondaryColor;
		
	public:
		bool remove();
		int setColor(SCREEPS_STR color, SCREEPS_STR secondaryColor="");
		int setPosition(int x, int y);
		int setPosition(RoomPosition *pos);
	};
}