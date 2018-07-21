#pragma once

#include "Structure.h"

namespace Screeps {
	class StructureRoad : public Structure {
	public:
		StructureRoad();

	public:
		int ticksToDecay;
	};
}