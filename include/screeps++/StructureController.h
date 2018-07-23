#pragma once

#include <emscripten.h>
#include <emscripten/val.h>

#include "OwnedStructure.h"

namespace Screeps {
	class StructureController : public OwnedStructure {
	public:
		StructureController();
		StructureController(emscripten::val structureController);

	public:
		int level;
		int progress;
		int progressTotal;
		
		struct Reservation {
			SCREEPS_STR username;
			int ticksToEnd;
		};

		Reservation reservation;
		int safeMode;
		int safeModeAvailable;
		int safeModeCooldown;

		struct Sign {
			SCREEPS_STR username;
			SCREEPS_STR text;
			int time;
			emscripten::val *Date;
		};

		Sign sign;
		int ticksToDowngrade;
		int upgradeBlock;

	public:
		int activateSafeMode();
		int unclaim();
	};
}