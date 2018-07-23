#include "StructureTower.h"

#include "Creep.h"

namespace Screeps {
	StructureTower::StructureTower() {
	}
	StructureTower::StructureTower(emscripten::val structureTower) {
	}
	int StructureTower::attack(Creep *target) {
		return 0;
	}
	int StructureTower::heal(Creep *target) {
		return 0;
	}
	int StructureTower::repair(Structure *target) {
		return 0;
	}
}