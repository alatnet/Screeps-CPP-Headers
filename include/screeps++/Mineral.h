#pragma once

#include "Common.h"

#include "RoomObject.h"

namespace Screeps {
	class Mineral : public RoomObject {
	public:
		Mineral();

	public:
		int density;
		int mineralAmount;
		SCREEPS_STR id;
		int ticksToRegeneration;
	};
}