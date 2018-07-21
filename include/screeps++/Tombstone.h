#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "RoomObject.h"
#include "Creep.h"

namespace Screeps {
	class Tombstone : public RoomObject {
	public:
		Tombstone();

	public:
		Creep creep;
		int deathTime;
		SCREEPS_STR id;
		val store;
		int ticksToDecay;
	};
}