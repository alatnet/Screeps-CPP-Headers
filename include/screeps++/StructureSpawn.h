#pragma once

#include "Common.h"

#include <emscrpiten.h>
#include <emscrpiten/val.h>
#include <vector>

#include "OwnedStructure.h"
#include "Creep.h"

namespace Screeps {
	class StructureSpawn : public OwnedStructure {
	public:
		StructureSpawn();

	public:
		int energy;
		int energyCapacity;
		val memory;
		SCREEPS_STR name;

		class Spawning {
		public:
			Spawning();

		public:
			std::vector<int> directions;
			SCREEPS_STR name;
			int needTime;
			int remainingTime;
			StructureSpawn spawn;

		public:
			int cancel();
			int setDirections(std::vector<int> directions);
		};

		Spawning spawning;

	public:
		struct SpawnCreepOpts {
			val memory;
			std::vector<Structure> energyStructures;
			bool dryRun;
			std::vector<int> directions;
		};

		int spawnCreep(std::vector<SCREEPS_STR> body, SCREEPS_STR name, SpawnCreepOpts opts);

		int recycleCreep(Creep target);
		int renewCreep(Creep target);
	};
}