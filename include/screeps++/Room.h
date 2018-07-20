#pragma once

#include "Common.h"

#include "RoomPosition.h"
#include "StructureController.h"
#include "StructureStorage.h"
#include "StructureTerminal.h"
#include "RoomVisual.h"

namespace Screeps {
	class Room;

	struct RoomOpts {
		bool ignoreCreeps;
		bool ignoreDestructibleStructures;
		bool ignoreRoads;
		std::function<void(SCREEPS_STR, CostMatrix)> costCallback;
		union {
			Room rooms;
			RoomPosition positions;
		} ignore;

		union {
			Room rooms;
			RoomPosition positions;
		} avoid;
		float maxOps;
		float heuristicWeight;
		bool serialize;
		int maxRooms;
		int range;
		int plainCost;
		int swampCost;
		
		RoomOpts(){
			this->ignoreCreeps = false;
			this->ignoreDestructibleStructure = false;
			this->ignoreRoads = false;
			this->costCallback = nullptr;
			this->ignore.positions = RoomPosition();
			this->avoid.positions = RoomPosition();
			this->maxOps = 2000;
			this->heuristicWeight = 1.2;
			this->serialize = false;
			this->maxRooms 16;
			this->range = 0;
			this->plainCost = 1;
			this->swampCost = 5;
		};
	};
	
	class Room {
	public:
		Room();

	public:
		StructureController controller;
		int energyAvailable;
		int energyCapacityAvailable;
		var memory;
		SCREEPS_STR name;
		StructureStorage storage;
		StructureTerminal terminal;
		RoomVisual visual;

	public:
		static SCREEPS_STR serializePath(/*array path*/); //FIGURE THIS OUT!!!
		static /*array*/ deserializePath(SCREEPS_STR path);

	public:
		int createConstructionSite(int x, int y, SCREEPS_STR structureType, SCREEPS_STR name="");
		int createConstructionSite(RoomPosition pos, SCREEPS_STR structureType, SCREEPS_STR name="");
		
		int createFlag(int x, int y, SCREEPS_STR name="", SCREEPS_STR color="", SCREEPS_STR secondaryColor="");
		int createFlag(RoomPosition pos, SCREEPS_STR name="", SCREEPS_STR color="", SCREEPS_STR secondaryColor="");
		
		std::vector<void*> find(int type, /*opts*/);
		
		int findExitTo(SCREEPS_STR room);
		int findExitTo(Room room);
		
		//findPath
		
		
	};
}