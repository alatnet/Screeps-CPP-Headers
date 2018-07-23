#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class StructureRampart : public OwnedStructure {
	public:
		StructureRampart();
		StructureRampart(emscripten::val StructureRampart);

	public:
		bool isPublic;
		int ticksToDecay;

	public:
		int setPublic(bool isPublic);
	};
}