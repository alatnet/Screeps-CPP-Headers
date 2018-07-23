#include "StructureSpawn.h"

#include "Creep.h"

namespace Screeps {
	StructureSpawn::StructureSpawn() {
	}
	StructureSpawn::StructureSpawn(emscripten::val structureSpawn) {
	}
	int StructureSpawn::spawnCreep(std::vector<SCREEPS_STR> body, SCREEPS_STR name, SpawnCreepOpts opts) {
		return 0;
	}
	int StructureSpawn::recycleCreep(Creep *target) {
		return 0;
	}
	int StructureSpawn::renewCreep(Creep *target) {
		return 0;
	}

	//-------------------------------------------------------------------------------------
	//Spawning
	//-------------------------------------------------------------------------------------
	StructureSpawn::Spawning::Spawning() {
	}
	StructureSpawn::Spawning::Spawning(emscripten::val spawning) {
	}
	int StructureSpawn::Spawning::cancel() {
		return 0;
	}
	int StructureSpawn::Spawning::setDirections(std::vector<int> directions) {
		return 0;
	}
}