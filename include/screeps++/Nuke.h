#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>

#include "RoomObject.h"

namespace Screeps {
	class Nuke : public RoomObject {
	public:
		Nuke();
		Nuke(emscripten::val nuke);
		
	public:
		SCREEPS_STR id;
		SCREEPS_STR launchRoomName;
		int timeToLand;
	};
}