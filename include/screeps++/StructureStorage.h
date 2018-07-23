#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class StructureStorage : public OwnedStructure {
	public:
		StructureStorage();
		StructureStorage(emscripten::val structureStorage);

	public:
		int store;
		int storeCapacity;
	};
}