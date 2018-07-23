#include "Room.h"

#include "RoomPosition.h"
#include "StructureController.h"
#include "StructureStorage.h"
#include "StructureTerminal.h"
#include "RoomVisual.h"
#include "Creep.h"
#include "Structure.h"
#include "Resource.h"
#include "Source.h"
#include "Mineral.h"
#include "Flag.h"
#include "ConstructionSite.h"
#include "Nuke.h"
#include "Tombstone.h"

namespace Screeps {
	Room::Room() {
	}
	Room::Room(emscripten::val room) {
	}
	SCREEPS_STR Room::serializePath(emscripten::val path) {
		return "";
	}
	emscripten::val *Room::deserializePath(SCREEPS_STR path) {
		return nullptr;
	}
	int Room::createConstructionSite(int x, int y, SCREEPS_STR structureType, SCREEPS_STR name) {
		return 0;
	}
	int Room::createConstructionSite(RoomPosition *pos, SCREEPS_STR structureType, SCREEPS_STR name) {
		return 0;
	}
	int Room::createFlag(int x, int y, SCREEPS_STR name, SCREEPS_STR color, SCREEPS_STR secondaryColor) {
		return 0;
	}
	int Room::createFlag(RoomPosition *pos, SCREEPS_STR name, SCREEPS_STR color, SCREEPS_STR secondaryColor) {
		return 0;
	}
	std::vector<void*> Room::find(int type, emscripten::val opts) {
		return std::vector<void*>();
	}
	int Room::findExitTo(SCREEPS_STR room) {
		return 0;
	}
	int Room::findExitTo(Room *room) {
		return 0;
	}
	std::vector<Room::FindPathRet> Room::findPath(RoomPosition *fromPos, RoomPosition *toPos, FindPathOpts opts) {
		return std::vector<Room::FindPathRet>();
	}
	RoomPosition *Room::getPositionAt(int x, int y) {
		return nullptr;
	}
	std::vector<Room::lookAtRet> Room::lookAt(int x, int y) {
		return std::vector<Room::lookAtRet>();
	}
	std::vector<Room::lookAtRet> Room::lookAt(RoomPosition *target) {
		return std::vector<Room::lookAtRet>();
	}
	emscripten::val *Room::lookAtArea(int top, int left, int bottom, int right, bool asArray) {
		return nullptr;
	}
	emscripten::val *Room::lookForAtArea(SCREEPS_STR type, int top, int left, int bottom, int right, bool asArray) {
		return nullptr;
	}
}