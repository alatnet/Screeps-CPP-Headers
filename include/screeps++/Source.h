#pragma once

#include "Common.h"

#include "RoomPosition.h"

namespace Screeps {
	class Source : public RoomPosition{
	public:
		Source();

	public:
		int energy;
		int energyCapacity;
		SCREEPS_STR  id;
		int ticksToRegeneration;
	};
}