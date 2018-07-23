#include "RoomPosition.h"

#include "ConstructionSite.h"
#include "Flag.h"

namespace Screeps {
	RoomPosition::RoomPosition(int x, int y, SCREEPS_STR roomName) {
	}
	RoomPosition::RoomPosition(emscripten::val roomPosition) {
	}
	int RoomPosition::createConstructionSite(ConstructionSite *ret, SCREEPS_STR structureType, SCREEPS_STR name) {
		return 0;
	}
	int RoomPosition::createFlag(Flag * ret, SCREEPS_STR name, SCREEPS_STR color, SCREEPS_STR) {
		return 0;
	}
	emscripten::val *RoomPosition::findClosestByPath(int type) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findClosestByPath(int type, emscripten::val ops) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findClosestByPath(std::vector<RoomPosition*> objects) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findClosestByPath(std::vector<RoomPosition*> objects, emscripten::val ops) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findClosestByRange(int type) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findClosestByRange(int type, emscripten::val ops) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findClosestByRange(std::vector<RoomPosition*> objects) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findClosestByRange(std::vector<RoomPosition*> objects, emscripten::val ops) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findInRange(int type, int range) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findInRange(int type, int range, emscripten::val ops) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findInRange(std::vector<RoomPosition*>, int range) {
		return nullptr;
	}
	emscripten::val *RoomPosition::findInRange(std::vector<RoomPosition*>, int range, emscripten::val opts) {
		return nullptr;
	}
	std::vector<Room::FindPathRet> RoomPosition::findPathTo(int x, int y, Room::FindPathOpts opts) {
		return std::vector<Room::FindPathRet>();
	}
	std::vector<Room::FindPathRet> RoomPosition::findPathTo(RoomPosition *target, Room::FindPathOpts opts) {
		return std::vector<Room::FindPathRet>();
	}
	int RoomPosition::getDirectionTo(int x, int y) {
		return 0;
	}
	int RoomPosition::getDirectionTo(RoomPosition *target) {
		return 0;
	}
	int RoomPosition::getRangeTo(int x, int y) {
		return 0;
	}
	int RoomPosition::getRangeTo(RoomPosition *target) {
		return 0;
	}
	bool RoomPosition::inRangeTo(int x, int y, int range) {
		return false;
	}
	bool RoomPosition::inRangeTo(RoomPosition *target, int range) {
		return false;
	}
	bool RoomPosition::isEqualTo(int x, int y) {
		return false;
	}
	bool RoomPosition::isEqualTo(RoomPosition *target) {
		return false;
	}
	bool RoomPosition::isNearTo(int x, int y) {
		return false;
	}
	bool RoomPosition::isNearTo(RoomPosition *target) {
		return false;
	}
	std::vector<Room::lookAtRet> RoomPosition::look() {
		return std::vector<Room::lookAtRet>();
	}
	emscripten::val *RoomPosition::lookFor(SCREEPS_STR type) {
		return nullptr;
	}
}