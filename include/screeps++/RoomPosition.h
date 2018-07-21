#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>
#include <vector>

#include "Room.h"

namespace Screeps {
	class RoomPosition {
	public:
		RoomPosition(int x, int y, SCREEPS_STR roomName);
		
	public:
		SCREEPS_STR roomName;
		int x;
		int y;
		
	public:
		int createConstructionSite(SCREEPS_STR structureType, SCREEPS_STR name="", ConstructionSite *ret);
		int creatFlag(SCREEPS_STR name="", SCREEPS_STR color="", SCREEPS_STR=secondaryColor="", Flag *ret);


		val findClosestByPath(int type);
		val findClosestByPath(int type, val ops);                         
		val findClosestByPath(std::vector<RoomPosition> objects);
		val findClosestByPath(std::vector<RoomPosition> objects, val ops);

		val findClosestByRange(int type);
		val findClosestByRange(int type, val ops);
		val findClosestByRange(std::vector<RoomPosition> objects);
		val findClosestByRange(std::vector<RoomPosition> objects, val ops);

		val findInRange(int type, int range);
		val findInRange(int type, int range, val ops);
		val findInRange(std::vector<RoomPosition>, int range);
		val findInRange(std::vector<RoomPosition>, int range, val opts);

		std::vector<Room::FindPathRet> findPathTo(int x, int y, Room::FindPathOpts opts = Room::FindPathOpts());
		std::vector<Room::FindPathRet> findPathTo(RoomPosition target, Room::FindPathOpts opts = Room::FindPathOpts());

		int getDirectionTo(int x, int y);
		int getDirectionTo(RoomPosition target);

		int getRangeTo(int x, int y);
		int getRangeTo(RoomPosition target);

		bool inRangeTo(int x, int y, int range);
		bool inRangeTo(RoomPosition target, int range);

		bool isEqualTo(int x, int y);
		bool isEqualTo(RoomPosition target);

		bool isNearTo(int x, int y);
		bool isNearTo(RoomPosition target);

		std::vector<Room::lookAtRet> look();

		val lookFor(SCREEPS_STR type);
	};
}