#include "PathFinder.h"

#include "RoomPosition.h"

namespace Screeps {
	PathFinder::PathFinder() {
	}
	PathFinder::PathFinder(emscripten::val pathFinder) {
	}
	PathFinder::SearchRet PathFinder::search(RoomPosition *origin, std::vector<Goal> goal, PathFinderOpts opts) {
		return SearchRet();
	}

	//-------------------------------------------------------------------------------------
	//CostMatrix
	//-------------------------------------------------------------------------------------
	PathFinder::CostMatrix::CostMatrix() {
	}
	PathFinder::CostMatrix::CostMatrix(emscripten::val costMatrix) {
	}
	void PathFinder::CostMatrix::set(int x, int y, int cost) {
	}
	int PathFinder::CostMatrix::get(int x, int y) {
		return 0;
	}
	PathFinder::CostMatrix *PathFinder::CostMatrix::clone() {
		return nullptr;
	}
	std::vector<int> PathFinder::CostMatrix::serialize() {
		return std::vector<int>();
	}
	PathFinder::CostMatrix *PathFinder::CostMatrix::deserialize(std::vector<int> val) {
		return nullptr;
	}
}