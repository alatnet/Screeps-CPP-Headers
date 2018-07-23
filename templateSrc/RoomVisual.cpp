#include "RoomVisual.h"

#include "RoomPosition.h"

namespace Screeps {
	RoomVisual::RoomVisual(SCREEPS_STR roomName) {
	}
	RoomVisual::RoomVisual(emscripten::val roomVisual) {
	}
	RoomVisual & RoomVisual::line(int x1, int y1, int x2, int y2, LineStyle style) {
		return *this;
	}
	RoomVisual & RoomVisual::line(RoomPosition pos1, RoomPosition pos2, LineStyle style) {
		return *this;
	}
	RoomVisual & RoomVisual::circle(int x, int y, CircleStyle style) {
		return *this;
	}
	RoomVisual & RoomVisual::circle(RoomPosition pos, CircleStyle style) {
		return *this;
	}
	RoomVisual & RoomVisual::rect(int x, int y, int width, int height, CommonFilledStyle style) {
		return *this;
	}
	RoomVisual & RoomVisual::rect(RoomPosition topLeftPos, int width, int height, CommonFilledStyle style) {
		return *this;
	}
	RoomVisual & RoomVisual::poly(std::vector<std::pair<int, int>> pos, CommonFilledStyle style) {
		return *this;
	}
	RoomVisual & RoomVisual::poly(std::vector<RoomPosition> pos, CommonFilledStyle style) {
		return *this;
	}
	RoomVisual & RoomVisual::text(SCREEPS_STR text, int x, int y, TextStyle style) {
		return *this;
	}
	RoomVisual & RoomVisual::text(SCREEPS_STR text, RoomPosition pos, TextStyle style) {
		return *this;
	}
	RoomVisual & RoomVisual::clear() {
		return *this;
	}
	RoomVisual & RoomVisual::getSize() {
		return *this;
	}
}