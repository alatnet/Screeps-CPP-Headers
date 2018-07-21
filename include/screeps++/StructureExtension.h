#pragma once

#include "OwnedStructure.h"

namespace Screeps {
	class StructureExtension : public OwnedStructure {
	public:
		StructureExtension();

	public:
		int energy;
		int energyCapacity;
	};
}