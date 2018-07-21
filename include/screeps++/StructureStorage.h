#pragma once

#include "OwnedStructure.h"

namespace Screeps {
	class StructureStorage : public OwnedStructure {
	public:
		StructureStorage();

	public:
		int store;
		int storeCapacity;
	};
}