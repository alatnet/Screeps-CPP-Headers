#include "Source.h"

namespace Screeps {
	Source::Source() : RoomPosition(0,0,"") {
	}
	Source::Source(emscripten::val source) : RoomPosition(source) {
	}
}