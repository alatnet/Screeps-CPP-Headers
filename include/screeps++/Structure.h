#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "RoomObject.h"
#include "TargetableObject.h"

namespace Screeps {
	class Structure : public RoomObject, TargetableObject {
	public:
		Structure();
		Structure(emscripten::val structure);

	public:
		int hits;
		int hitsMax;
		SCREEPS_STR id;
		SCREEPS_STR string;
		
	public:
		int destroy();
		bool isActive();
		int notifyWhenAttacked();
	};
}