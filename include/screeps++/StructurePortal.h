#pragma once

#include "Structure.h"
#include "RoomPosition.h"

namespace Screeps {
	class StruturePortal : public Structure {
	public:
		StruturePortal();

	public:
		RoomPosition destination;
		int ticksToDecay;
	};
}