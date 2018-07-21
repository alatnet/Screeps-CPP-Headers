#pragma once

#include "OwnedStructure.h"

namespace Screeps {
	class StructureExtractor : public OwnedStructure {
	public:
		StructureExtractor();

	public:
		int cooldown;
	};
}