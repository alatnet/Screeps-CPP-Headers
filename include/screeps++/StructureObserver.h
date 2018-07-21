#pragma once

#include "Common.h"

#include "OwnedStructure.h"

namespace Screeps {
	class StructureObserver : public OwnedStructure {
	public:
		StructureObserver();

	public:
		int observeRoom(SCREEPS_STR roomName);
	};
}