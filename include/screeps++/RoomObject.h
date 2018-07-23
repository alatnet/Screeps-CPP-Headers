#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

namespace Screeps {
	class RoomPosition;
	class Room;

	class RoomObject {
	public:
		RoomObject();
		RoomObject(emscripten::val roomObject);

	public:
		RoomPosition *pos;
		Room *room;
	};
}