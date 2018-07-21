#pragma once

#include "Structure.h"

namespace Screeps {
	class StructurePowerBank : public Structure {
	public:
		StructurePowerBank();

	public:
		int power;
		int ticksToDecay;
	};
}