#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>
#include <vector>

#include "Room.h"

namespace Screeps {
	class Room;
	class ConstructionSite;
	class Flag;

	class RoomPosition {
	public:
		RoomPosition(int x, int y, SCREEPS_STR roomName);
		RoomPosition(emscripten::val roomPosition);
		
	public:
		SCREEPS_STR roomName;
		int x;
		int y;
		
	public:
		int createConstructionSite(ConstructionSite *ret, SCREEPS_STR structureType, SCREEPS_STR name="");
		int createFlag(Flag *ret, SCREEPS_STR name="", SCREEPS_STR color="", SCREEPS_STR secondaryColor="");


		emscripten::val *findClosestByPath(int type);
		emscripten::val *findClosestByPath(int type, emscripten::val ops);
		emscripten::val *findClosestByPath(std::vector<RoomPosition*> objects);
		emscripten::val *findClosestByPath(std::vector<RoomPosition*> objects, emscripten::val ops);

		emscripten::val *findClosestByRange(int type);
		emscripten::val *findClosestByRange(int type, emscripten::val ops);
		emscripten::val *findClosestByRange(std::vector<RoomPosition*> objects);
		emscripten::val *findClosestByRange(std::vector<RoomPosition*> objects, emscripten::val ops);

		emscripten::val *findInRange(int type, int range);
		emscripten::val *findInRange(int type, int range, emscripten::val ops);
		emscripten::val *findInRange(std::vector<RoomPosition*>, int range);
		emscripten::val *findInRange(std::vector<RoomPosition*>, int range, emscripten::val opts);

		std::vector<Room::FindPathRet> findPathTo(int x, int y, Room::FindPathOpts opts = Room::FindPathOpts());
		std::vector<Room::FindPathRet> findPathTo(RoomPosition *target, Room::FindPathOpts opts = Room::FindPathOpts());

		int getDirectionTo(int x, int y);
		int getDirectionTo(RoomPosition *target);

		int getRangeTo(int x, int y);
		int getRangeTo(RoomPosition *target);

		bool inRangeTo(int x, int y, int range);
		bool inRangeTo(RoomPosition *target, int range);

		bool isEqualTo(int x, int y);
		bool isEqualTo(RoomPosition *target);

		bool isNearTo(int x, int y);
		bool isNearTo(RoomPosition *target);

		std::vector<Room::lookAtRet> look();

		emscripten::val *lookFor(SCREEPS_STR type);
	};
}