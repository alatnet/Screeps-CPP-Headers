#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>
#include <vector>
#include <functional>

#include "PathFinder.h"

namespace Screeps {
	class Room;
	class RoomPosition;
	class StructureController;
	class StructureStorage;
	class StructureTerminal;
	class RoomVisual;
	class Creep;
	class Structure;
	class Resource;
	class Source;
	class Mineral;
	class Flag;
	class ConstructionSite;
	class Nuke;
	class Tombstone;

	struct RoomOpts {
		bool ignoreCreeps;
		bool ignoreDestructibleStructures;
		bool ignoreRoads;
		std::function<void(SCREEPS_STR, PathFinder::CostMatrix*)> costCallback;
		union {
			Room *rooms;
			RoomPosition *positions;
		} ignore;

		union {
			Room *rooms;
			RoomPosition *positions;
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
			this->ignoreDestructibleStructures = false;
			this->ignoreRoads = false;
			this->costCallback = nullptr;
			this->ignore.positions = nullptr;
			this->avoid.positions = nullptr;
			this->maxOps = 2000;
			this->heuristicWeight = 1.2;
			this->serialize = false;
			this->maxRooms = 16;
			this->range = 0;
			this->plainCost = 1;
			this->swampCost = 5;
		};
	};
	
	class Room {
	public:
		Room();
		Room(emscripten::val room);

	public:
		StructureController *controller;
		int energyAvailable;
		int energyCapacityAvailable;
		emscripten::val *memory;
		SCREEPS_STR name;
		StructureStorage *storage;
		StructureTerminal *terminal;
		RoomVisual *visual;

	public:
		static SCREEPS_STR serializePath(emscripten::val path); //FIGURE THIS OUT!!!
		static emscripten::val *deserializePath(SCREEPS_STR path);

	public:
		int createConstructionSite(int x, int y, SCREEPS_STR structureType, SCREEPS_STR name="");
		int createConstructionSite(RoomPosition *pos, SCREEPS_STR structureType, SCREEPS_STR name="");
		
		int createFlag(int x, int y, SCREEPS_STR name="", SCREEPS_STR color="", SCREEPS_STR secondaryColor="");
		int createFlag(RoomPosition *pos, SCREEPS_STR name="", SCREEPS_STR color="", SCREEPS_STR secondaryColor="");
		
		std::vector<void*> find(int type, emscripten::val opts);
		
		int findExitTo(SCREEPS_STR room);
		int findExitTo(Room *room);
		
		struct FindPathRet {
			int x;
			int y;
			int dx;
			int dy;
			int direction;
		};

		struct FindPathOpts {
			bool ignoreCreeps;
			bool ignoreDestructibleStructures;
			bool ignoreRoads;
			std::function<void(SCREEPS_STR, PathFinder::CostMatrix)> costCallback;
			std::vector<RoomPosition*> ignore;
			std::vector<RoomPosition*> avoid;
			int maxOps;
			float heuristicWeight;
			bool serialize;
			int maxRooms;
			int range;
			int plainCost;
			int swampCost;
			
			FindPathOpts(){
				this->ignoreCreeps = false;
				this->ignoreDestructibleStructures = false;
				this->ignoreRoads = false;
				this->costCallback = nullptr;
				this->maxOps = 2000;
				this->heuristicWeight = 1.2f;
				this->serialize = false;
				this->maxRooms = 16;
				this->range = 0;
				this->plainCost = 1;
				this->swampCost = 5;
			};
		};
		
		std::vector<FindPathRet> findPath(RoomPosition *fromPos, RoomPosition *toPos, FindPathOpts opts = FindPathOpts());
		
		RoomPosition *getPositionAt(int x, int y);
		
		struct lookAtRet {
			SCREEPS_STR type;
			union {
				Creep *creep;
				Structure *structure;
				Resource *resource;
				Source *source;
				Mineral *mineral;
				Flag *flag;
				ConstructionSite *constructionSite;
				Nuke *nuke;
				SCREEPS_STR terrain;
				Tombstone *tombstone;
			};
		};
		
		std::vector<lookAtRet> lookAt(int x, int y);
		std::vector<lookAtRet> lookAt(RoomPosition *target);

		/*std::map<int, std::map<int, lookAtRet>>*/ emscripten::val *lookAtArea(int top, int left, int bottom, int right, bool asArray = false);
		
		emscripten::val *lookForAtArea(SCREEPS_STR type, int top, int left, int bottom, int right, bool asArray = false);
	};
}