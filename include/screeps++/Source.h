#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "RoomPosition.h"

namespace Screeps {
	class Source : public RoomPosition {
	public:
		Source();
		Source(emscripten::val source);

	public:
		int energy;
		int energyCapacity;
		SCREEPS_STR id;
		int ticksToRegeneration;
	};
}