#pragma once

#include "OwnedStructure.h"

namespace Screeps {
	class StructureKeeperLair : public OwnedStructure {
	public:
		StructureKeeperLair();

	public:
		int ticksToSpawn;
	};
}