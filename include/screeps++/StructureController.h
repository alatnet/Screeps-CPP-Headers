#pragma once

#include "OwnedStructure.h"

namespace Screeps {
	class StructureController : public OwnedStructure {
	public:
		StructureController();

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
			val Date;
		};

		Sign sign;
		int ticksToDowngrade;
		int upgradeBlock;

	public:
		int activateSafeMode();
		int unclaim();
	};
}