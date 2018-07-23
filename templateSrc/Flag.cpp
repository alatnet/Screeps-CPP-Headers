#include "Flag.h"

#include "RoomPosition.h"

namespace Screeps {
	Flag::Flag() {
	}

	Flag::Flag(emscripten::val flag) {
	}

	bool Flag::remove() {
		return false;
	}

	int Flag::setColor(SCREEPS_STR color, SCREEPS_STR secondaryColor) {
		return 0;
	}

	int Flag::setPosition(int x, int y) {
		return 0;
	}

	int Flag::setPosition(RoomPosition *pos) {
		return 0;
	}
}
