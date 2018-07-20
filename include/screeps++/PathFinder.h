#pragma once

#include "Common.h"

#include <vector>       

#include "RoomPosition.h"

namespace Screeps {
	class PathFinder {
	public:
		PathFinder();

	public:
		class CostMatrix {
		public:
			CostMatrix();

		public:
			void set(int x, int y, int cost);
			int get(int x, int y);
			CostMatrix clone();
			std::vector<int> serialize();
			CostMatrix deserialize(std::vector<int> val);
		};

	public:
		struct SearchRet {
			std::vector<RoomPosition> path;
			int ops;
			float cost;
			bool incomplete;
		};
		
		struct Goal {
			RoomPosition pos;
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
				this->swamCost = 5;
				this->flee = false;
				this->maxOps = 2000;
				this->maxRooms = 16;
				this->maxCost = -1; //Infinity
				this->heuristicWeight = 1.2f;
			};
		};

		SearchRet search(RoomPosition origin, std::vector<Goal> goal, PathFinderOpts opts);
	};
}