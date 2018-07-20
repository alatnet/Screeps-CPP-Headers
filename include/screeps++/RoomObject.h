#pragma once

#include "RoomPosition.h"
#include "Room.h"

namespace Screeps {
	class RoomObject {
	public:
		RoomPosition pos;
		Room room;
	};
}