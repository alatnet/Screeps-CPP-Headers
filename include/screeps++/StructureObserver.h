#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class StructureObserver : public OwnedStructure {
	public:
		StructureObserver();
		StructureObserver(emscripten::val structureObserver);

	public:
		int observeRoom(SCREEPS_STR roomName);
	};
}