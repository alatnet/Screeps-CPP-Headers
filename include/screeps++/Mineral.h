#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "RoomObject.h"
#include "TargetableResource.h"

namespace Screeps {
	class Mineral : public RoomObject, TargetableResource {
	public:
		Mineral();
		Mineral(emscripten::val mineral);

	public:
		int density;
		int mineralAmount;
		SCREEPS_STR mineralType;
		SCREEPS_STR id;
		int ticksToRegeneration;
	};
}