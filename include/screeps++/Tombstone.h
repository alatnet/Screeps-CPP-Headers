#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "RoomObject.h"

namespace Screeps {
	class Creep;

	class Tombstone : public RoomObject {
	public:
		Tombstone();
		Tombstone(emscripten::val tombstone);

	public:
		Creep *creep;
		int deathTime;
		SCREEPS_STR id;
		emscripten::val *store;
		int ticksToDecay;
	};
}