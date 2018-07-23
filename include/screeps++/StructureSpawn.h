#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>
#include <vector>

#include "OwnedStructure.h"

namespace Screeps {
	class Creep;

	class StructureSpawn : public OwnedStructure {
	public:
		StructureSpawn();
		StructureSpawn(emscripten::val structureSpawn);

	public:
		int energy;
		int energyCapacity;
		emscripten::val *memory;
		SCREEPS_STR name;

		class Spawning {
		public:
			Spawning();
			Spawning(emscripten::val spawning);

		public:
			std::vector<int> directions;
			SCREEPS_STR name;
			int needTime;
			int remainingTime;
			StructureSpawn *spawn;

		public:
			int cancel();
			int setDirections(std::vector<int> directions);
		};

		Spawning spawning;

	public:
		struct SpawnCreepOpts {
			emscripten::val *memory;
			std::vector<Structure*> energyStructures;
			bool dryRun;
			std::vector<int> directions;
		};

		int spawnCreep(std::vector<SCREEPS_STR> body, SCREEPS_STR name, SpawnCreepOpts opts);

		int recycleCreep(Creep *target);
		int renewCreep(Creep *target);
	};
}