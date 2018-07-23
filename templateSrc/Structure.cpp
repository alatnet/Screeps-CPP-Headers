#include "Structure.h"

namespace Screeps {
	Structure::Structure() {
	}
	Structure::Structure(emscripten::val structure) {
	}
	int Structure::destroy() {
		return 0;
	}
	bool Structure::isActive() {
		return false;
	}
	int Structure::notifyWhenAttacked() {
		return 0;
	}
}