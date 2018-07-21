#pragma once

#include "OwnedStructure.h"

namespace Screeps {
	class StructureRampart : public OwnedStructure {
	public:
		StructureRampart();

	public:
		bool isPublic;
		int ticksToDecay;

	public:
		int setPublic(bool isPublic);
	};
}