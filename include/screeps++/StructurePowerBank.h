#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "Structure.h"

namespace Screeps {
	class StructurePowerBank : public Structure {
	public:
		StructurePowerBank();
		StructurePowerBank(emscripten::val structurePowerBank);

	public:
		int power;
		int ticksToDecay;
	};
}