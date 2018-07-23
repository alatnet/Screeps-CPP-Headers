#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>
#include <vector>
#include <functional>

namespace Screeps {
	class RoomPosition;

	class PathFinder {
	public:
		PathFinder();
		PathFinder(emscripten::val pathFinder);

	public:
		class CostMatrix {
		public:
			CostMatrix();
			CostMatrix(emscripten::val costMatrix);

		public:
			void set(int x, int y, int cost);
			int get(int x, int y);
			CostMatrix *clone();
			std::vector<int> serialize();

		public:
			static CostMatrix *deserialize(std::vector<int> val);
		};

	public:
		struct SearchRet {
			std::vector<RoomPosition*> path;
			int ops;
			float cost;
			bool incomplete;
		};
		
		struct Goal {
			RoomPosition *pos;
			int range;
		};
		
		struct PathFinderOpts {
			std::function<bool(SCREEPS_STR)> roomCallback;
			int plainCost;
			int swampCost;
			bool flee;
			int maxOps;
			int maxRooms;
			int maxCost;
			float heuristicWeight;
			
			PathFinderOpts(){
				this->roomCallback = nullptr;
				this->plainCost = 1;
				this->swampCost = 5;
				this->flee = false;
				this->maxOps = 2000;
				this->maxRooms = 16;
				this->maxCost = -1; //Infinity
				this->heuristicWeight = 1.2f;
			};
		};

		SearchRet search(RoomPosition *origin, std::vector<Goal> goal, PathFinderOpts opts);
	};
}