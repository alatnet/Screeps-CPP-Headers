#pragma once

#include "Common.h"

#include "RoomObject.h"

namespace Screeps {
	class Nuke : public RoomObject {
	public:
		Nuke();
		
	public:
		SCREEPS_STR id;
		SCREEPS_STR launchRoomName;
		int timeToLand;
	};
}