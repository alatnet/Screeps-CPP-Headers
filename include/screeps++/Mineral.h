#pragma once

#include "Common.h"

#include "RoomObject.h"
#include "TargetableResource.h"

namespace Screeps {
	class Mineral : public RoomObject, TargetableResource {
	public:
		Mineral();

	public:
		int density;
		int mineralAmount;
		SCREEPS_STR mineralType
		SCREEPS_STR id;
		int ticksToRegeneration;
	};
}