#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class StructureExtractor : public OwnedStructure {
	public:
		StructureExtractor();
		StructureExtractor(emscripten::val structureExtractor);

	public:
		int cooldown;
	};
}