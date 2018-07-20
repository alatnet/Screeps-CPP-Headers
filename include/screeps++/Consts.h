#pragma once

#include "Common.h"

#include <map>

namespace Screeps {
	const int OK = 0;
	const int ERR_NOT_OWNER = -1;
	const int ERR_NO_PATH = -2;
	const int ERR_NAME_EXISTS = -3;
	const int ERR_BUSY = -4;
	const int ERR_NOT_FOUND = -5;
	const int ERR_NOT_ENOUGH_ENERGY = -6;
	const int ERR_NOT_ENOUGH_RESOURCES = -6;
	const int ERR_INVALID_TARGET = -7;
	const int ERR_FULL = -8;
	const int ERR_NOT_IN_RANGE = -9;
	const int ERR_INVALID_ARGS = -10;
	const int ERR_TIRED = -11;
	const int ERR_NO_BODYPART = -12;
	const int ERR_NOT_ENOUGH_EXTENSIONS = -6;
	const int ERR_RCL_NOT_ENOUGH = -14;
	const int ERR_GCL_NOT_ENOUGH = -15;

	const int FIND_EXIT_TOP = 1;
	const int FIND_EXIT_RIGHT = 3;
	const int FIND_EXIT_BOTTOM = 5;
	const int FIND_EXIT_LEFT = 7;
	const int FIND_EXIT = 10;
	const int FIND_CREEPS = 101;
	const int FIND_MY_CREEPS = 102;
	const int FIND_HOSTILE_CREEPS = 103;
	const int FIND_SOURCES_ACTIVE = 104;
	const int FIND_SOURCES = 105;
	const int FIND_DROPPED_ENERGY = -106;
	const int FIND_DROPPED_RESOURCES = 106;
	const int FIND_STRUCTURES = 107;
	const int FIND_MY_STRUCTURES = 108;
	const int FIND_HOSTILE_STRUCTURES = 109;
	const int FIND_FLAGS = 110;
	const int FIND_CONSTRUCTION_SITES = 111;
	const int FIND_MY_SPAWNS = 112;
	const int FIND_HOSTILE_SPAWNS = 113;
	const int FIND_MY_CONSTRUCTION_SITES = 114;
	const int FIND_HOSTILE_CONSTRUCTION_SITES = 115;
	const int FIND_MINERALS = 116;
	const int FIND_NUKES = 117;
	const int FIND_TOMBSTONES = 118;
	
	const int TOP = 1;
	const int TOP_RIGHT = 2;
	const int RIGHT = 3;
	const int BOTTOM_RIGHT = 4;
	const int BOTTOM = 5;
	const int BOTTOM_LEFT = 6;
	const int LEFT = 7;
	const int TOP_LEFT = 8;
	
	const int COLOR_RED = 1;
	const int COLOR_PURPLE = 2;
	const int COLOR_BLUE = 3;
	const int COLOR_CYAN = 4;
	const int COLOR_GREEN = 5;
	const int COLOR_YELLOW = 6;
	const int COLOR_ORANGE = 7;
	const int COLOR_BROWN = 8;
	const int COLOR_GREY = 9;
	const int COLOR_WHITE = 10;
	
	SCREEPS_STR LOOK_CREEPS = "creep";
	SCREEPS_STR LOOK_ENERGY = "energy";
	SCREEPS_STR LOOK_RESOURCES = "resource";
	SCREEPS_STR LOOK_SOURCES = "source";
	SCREEPS_STR LOOK_MINERALS = "mineral";
	SCREEPS_STR LOOK_STRUCTURES = "structure";
	SCREEPS_STR LOOK_FLAGS = "flag";
	SCREEPS_STR LOOK_CONSTRUCTION_SITES = "constructionSite";
	SCREEPS_STR LOOK_NUKES = "nuke";
	SCREEPS_STR LOOK_TERRAIN = "terrain";
	SCREEPS_STR LOOK_TOMBSTONES = "tombstone";

	SCREEPS_STR OBSTACLE_OBJECT_TYPES[15] = {
		"spawn",
		"creep",
		"wall",
		"source",
		"constructedWall",
		"extension",
		"link",
		"storage",
		"tower",
		"observer",
		"powerSpawn",
		"powerBank",
		"lab",
		"terminal",
		"nuker"
	};

	SCREEPS_STR MOVE = "move";
	SCREEPS_STR WORK = "work";
	SCREEPS_STR CARRY = "carry";
	SCREEPS_STR ATTACK = "attack";
	SCREEPS_STR RANGED_ATTACK = "ranged_attack";
	SCREEPS_STR TOUGH = "tough";
	SCREEPS_STR HEAL = "heal";
	SCREEPS_STR CLAIM = "claim";

	const std::map<SCREEPS_STR, int> BODYPART_COST({
		{ "move", 50 },
		{ "work", 100 },
		{ "attack", 80 },
		{ "carry", 50 },
		{ "heal", 250 },
		{ "ranged_attack", 150 },
		{ "tough", 10 },
		{ "claim", 600 }
	});
	
	// WORLD_WIDTH and WORLD_HEIGHT constants are deprecated; please use Game.map.getWorldSize() instead
	const int WORLD_WIDTH = 202;
	const int WORLD_HEIGHT = 202;
	
	const int CREEP_LIFE_TIME = 1500;
	const int CREEP_CLAIM_LIFE_TIME = 600;
	const float CREEP_CORPSE_RATE = 0.2;
	
	const int CARRY_CAPACITY = 50;
	const int HARVEST_POWER = 2;
	const int HARVEST_MINERAL_POWER = 1;
	const int REPAIR_POWER = 100;
	const int DISMANTLE_POWER = 50;
	const int BUILD_POWER = 5;
	const int ATTACK_POWER = 30;
	const int UPGRADE_CONTROLLER_POWER = 1;
	const int RANGED_ATTACK_POWER = 10;
	const int HEAL_POWER = 12;
	const int RANGED_HEAL_POWER = 4;
	const float REPAIR_COST = 0.01;
	const float DISMANTLE_COST = 0.005;
	
	const int RAMPART_DECAY_AMOUNT = 300;
	const int RAMPART_DECAY_TIME = 100;
	const int RAMPART_HITS = 1;
	const std::map<int, int> RAMPART_HITS_MAX({
		{ 2, 300000 },
		{ 3, 1000000 },
		{ 4, 3000000 },
		{ 5, 10000000 },
		{ 6, 30000000 },
		{ 7, 100000000 },
		{ 8, 300000000 }
	});
	
	const int ENERGY_REGEN_TIME = 300;
	const int ENERGY_DECAY = 1000;
	
	const int SPAWN_HITS = 5000;
	const int SPAWN_ENERGY_START = 300;
	const int SPAWN_ENERGY_CAPACITY = 300;
	const int CREEP_SPAWN_TIME = 3;
	const float SPAWN_RENEW_RATIO = 1.2;
	
	const int SOURCE_ENERGY_CAPACITY = 3000;
	const int SOURCE_ENERGY_NEUTRAL_CAPACITY = 1500;
	const int SOURCE_ENERGY_KEEPER_CAPACITY = 4000;

	const int WALL_HITS = 1;
	const int WALL_HITS_MAX = 300000000;

	const int EXTENSION_HITS = 1000;

	const std::map<int,int> EXTENSION_ENERGY_CAPACITY({
		{ 0, 50 },
		{ 1, 50 },
		{ 2, 50 },
		{ 3, 50 },
		{ 4, 50 },
		{ 5, 50 },
		{ 6, 50 },
		{ 7, 100 },
		{ 8, 200 }
	});
	
	const int ROAD_HITS = 5000;
	const int ROAD_WEAROUT = 1;
	const int ROAD_DECAY_AMOUNT = 100;
	const int ROAD_DECAY_TIME = 1000;
	
	const int LINK_HITS = 1000;
	const int LINK_HITS_MAX = 1000;
	const int LINK_CAPACITY = 800;
	const int LINK_COOLDOWN = 1;
	const float LINK_LOSS_RATIO = 0.03;
	
	const int STORAGE_CAPACITY = 1000000;
	const int STORAGE_HITS = 10000;
	
	SCREEPS_STR STRUCTURE_SPAWN = "spawn";
	SCREEPS_STR STRUCTURE_EXTENSION = "extension";
	SCREEPS_STR STRUCTURE_ROAD = "road";
	SCREEPS_STR STRUCTURE_WALL = "constructedWall";
	SCREEPS_STR STRUCTURE_RAMPART = "rampart";
	SCREEPS_STR STRUCTURE_KEEPER_LAIR = "keeperLair";
	SCREEPS_STR STRUCTURE_PORTAL = "portal";
	SCREEPS_STR STRUCTURE_CONTROLLER = "controller";
	SCREEPS_STR STRUCTURE_LINK = "link";
	SCREEPS_STR STRUCTURE_STORAGE = "storage";
	SCREEPS_STR STRUCTURE_TOWER = "tower";
	SCREEPS_STR STRUCTURE_OBSERVER = "observer";
	SCREEPS_STR STRUCTURE_POWER_BANK = "powerBank";
	SCREEPS_STR STRUCTURE_POWER_SPAWN = "powerSpawn";
	SCREEPS_STR STRUCTURE_EXTRACTOR = "extractor";
	SCREEPS_STR STRUCTURE_LAB = "lab";
	SCREEPS_STR STRUCTURE_TERMINAL = "terminal";
	SCREEPS_STR STRUCTURE_CONTAINER = "container";
	SCREEPS_STR STRUCTURE_NUKER = "nuker";

	const std::map<SCREEPS_STR, int> CONSTRUCTION_COST({
		{ "spawn", 15000 },
		{ "extension", 3000 },
		{ "road", 300 },
		{ "constructedWall", 1 },
		{ "rampart", 1 },
		{ "link", 5000 },
		{ "storage", 30000 },
		{ "tower", 5000 },
		{ "observer", 8000 },
		{ "powerSpawn", 100000 },
		{ "extractor", 5000 },
		{ "lab", 50000 },
		{ "terminal", 100000 },
		{ "container", 5000 },
		{ "nuker", 100000 }
	});
	const int CONSTRUCTION_COST_ROAD_SWAMP_RATIO = 5;
	
	struct CONTROLLER_LEVELS_Struct {
		int level;
		int cost;
	};

	const std::map<int, int> CONTROLLER_LEVELS({
		{ 1, 200 },
		{ 2, 45000 },
		{ 3, 135000 },
		{ 4, 405000 },
		{ 5, 1215000 },
		{ 6, 3645000 },
		{ 7, 10935000 }
	});

	const std::map<
		SCREEPS_STR,
		std::map<
			int ,int
		>
	> CONTROLLER_STRUCTURES({
		{
			"spawn", {
				{ 0, 0 },
				{ 1, 1 },
				{ 2, 1 },
				{ 3, 1 },
				{ 4, 1 },
				{ 5, 1 },
				{ 6, 1 },
				{ 7, 2 },
				{ 8, 3 }
			}
		},
		{
			"extension", {
				{ 0, 0 },
				{ 1, 0 },
				{ 2, 5 },
				{ 3, 10 },
				{ 4, 20 },
				{ 5, 30 },
				{ 6, 40 },
				{ 7, 50 },
				{ 8, 60 }
			}
		},
		{
			"link", {
				{ 1, 0 },
				{ 2, 0 },
				{ 3, 0 },
				{ 4, 0 },
				{ 5, 2 },
				{ 6, 3 },
				{ 7, 4 },
				{ 8, 6 }
			}
		},
		{
			"road", {
				{ 0, 2500 },
				{ 1, 2500 },
				{ 2, 2500 },
				{ 3, 2500 },
				{ 4, 2500 },
				{ 5, 2500 },
				{ 6, 2500 },
				{ 7, 2500 },
				{ 8, 2500 }
			}
		},
		{
			"constructedWall", {
				{ 1, 0 },
				{ 2, 2500 },
				{ 3, 2500 },
				{ 4, 2500 },
				{ 5, 2500 },
				{ 6, 2500 },
				{ 7, 2500 },
				{ 8, 2500 }
			}
		},
		{
			"rampart", {
				{ 1, 0 },
				{ 2, 2500 },
				{ 3, 2500 },
				{ 4, 2500 },
				{ 5, 2500 },
				{ 6, 2500 },
				{ 7, 2500 },
				{ 8, 2500 }
			}
		},
		{
			"storage", {
				{ 1, 0 },
				{ 2, 0 },
				{ 3, 0 },
				{ 4, 1 },
				{ 5, 1 },
				{ 6, 1 },
				{ 7, 1 },
				{ 8, 1 }
			}
		},
		{
			"tower", {
				{ 1, 0 },
				{ 2, 0 },
				{ 3, 1 },
				{ 4, 1 },
				{ 5, 2 },
				{ 6, 2 },
				{ 7, 3 },
				{ 8, 6 }
			}
		},
		{
			"observer", {
				{ 1, 0 },
				{ 2, 0 },
				{ 3, 0 },
				{ 4, 0 },
				{ 5, 0 },
				{ 6, 0 },
				{ 7, 0 },
				{ 8, 1 }
			}
		},
		{
			"powerSpawn", {
				{ 1, 0 },
				{ 2, 0 },
				{ 3, 0 },
				{ 4, 0 },
				{ 5, 0 },
				{ 6, 0 },
				{ 7, 0 },
				{ 8, 1 }
			}
		},
		{
			"extractor", {
				{ 1, 0 },
				{ 2, 0 },
				{ 3, 0 },
				{ 4, 0 },
				{ 5, 0 },
				{ 6, 1 },
				{ 7, 1 },
				{ 8, 1 }
			}
		},
		{
			"terminal", {
				{ 1, 0 },
				{ 2, 0 },
				{ 3, 0 },
				{ 4, 0 },
				{ 5, 0 },
				{ 6, 1 },
				{ 7, 1 },
				{ 8, 1 }
			}
		},
		{
			"lab", {
				{ 1, 0 },
				{ 2, 0 },
				{ 3, 0 },
				{ 4, 0 },
				{ 5, 0 },
				{ 6, 3 },
				{ 7, 6 },
				{ 8, 10 }
			}
		},
		{
			"container", {
				{ 0, 5 },
				{ 1, 5 },
				{ 2, 5 },
				{ 3, 5 },
				{ 4, 5 },
				{ 5, 5 },
				{ 6, 5 },
				{ 7, 5 },
				{ 8, 5 }
			}
		},
		{
			"nuker", {
				{ 1, 0 },
				{ 2, 0 }, 
				{ 3, 0 },
				{ 4, 0 },
				{ 5, 0 },
				{ 6, 0 },
				{ 7, 0 },
				{ 8, 1 }
			}
		}
	});

	const std::map<int, int> CONTROLLER_DOWNGRADE({
		{ 1, 20000 },
		{ 2, 5000 },
		{ 3, 10000 },
		{ 4, 20000 },
		{ 5, 40000 },
		{ 6, 60000 },
		{ 7, 100000 },
		{ 8, 150000 }
	});
	const int CONTROLLER_DOWNGRADE_RESTORE = 100;
	const int CONTROLLER_DOWNGRADE_SAFEMODE_THRESHOLD = 5000;
	const int CONTROLLER_CLAIM_DOWNGRADE = 300;
	const int CONTROLLER_RESERVE = 1;
	const int CONTROLLER_RESERVE_MAX = 5000;
	const int CONTROLLER_MAX_UPGRADE_PER_TICK = 15;
	const int CONTROLLER_ATTACK_BLOCKED_UPGRADE = 1000;
	const int CONTROLLER_NUKE_BLOCKED_UPGRADE = 200;
	
	const int SAFE_MODE_DURATION = 20000;
	const int SAFE_MODE_COOLDOWN = 50000;
	const int SAFE_MODE_COST = 1000;
	
	const int TOWER_HITS = 3000;
	const int TOWER_CAPACITY = 1000;
	const int TOWER_ENERGY_COST = 10;
	const int TOWER_POWER_ATTACK = 600;
	const int TOWER_POWER_HEAL = 400;
	const int TOWER_POWER_REPAIR = 800;
	const int TOWER_OPTIMAL_RANGE = 5;
	const int TOWER_FALLOFF_RANGE = 20;
	const float TOWER_FALLOFF = 0.75;
	
	const int OBSERVER_HITS = 500;
	const int OBSERVER_RANGE = 10;
	
	const int POWER_BANK_HITS = 2000000;
	const int POWER_BANK_CAPACITY_MAX = 5000;
	const int POWER_BANK_CAPACITY_MIN = 500;
	const float POWER_BANK_CAPACITY_CRIT = 0.3;
	const int POWER_BANK_DECAY = 5000;
	const float POWER_BANK_HIT_BACK = 0.5;
	
	const int POWER_SPAWN_HITS = 5000;
	const int POWER_SPAWN_ENERGY_CAPACITY = 5000;
	const int POWER_SPAWN_POWER_CAPACITY = 100;
	const int POWER_SPAWN_ENERGY_RATIO = 50;
	
	const int EXTRACTOR_HITS = 500;
	const int EXTRACTOR_COOLDOWN = 5;
	
	const int LAB_HITS = 500;
	const int LAB_MINERAL_CAPACITY = 3000;
	const int LAB_ENERGY_CAPACITY = 2000;
	const int LAB_BOOST_ENERGY = 20;
	const int LAB_BOOST_MINERAL = 30;
	const int LAB_COOLDOWN = 10;
	const int LAB_REACTION_AMOUNT = 5;
	
	const float GCL_POW = 2.4;
	const int GCL_MULTIPLY = 1000000;
	const int GCL_NOVICE = 3;

	const void * MODE_SIMULATION = nullptr;
	const void * MODE_WORLD = nullptr;

	const int TERRAIN_MASK_WALL = 1;
	const int TERRAIN_MASK_SWAMP = 2;
	const int TERRAIN_MASK_LAVA = 4;
	
	const int MAX_CONSTRUCTION_SITES = 100;
	const int MAX_CREEP_SIZE = 50;
	
	const int MINERAL_REGEN_TIME = 50000;

	const std::map<SCREEPS_STR, int> MINERAL_MIN_AMOUNT({
		{ "H", 35000 },
		{ "O", 35000 },
		{ "L", 35000 },
		{ "K", 35000 },
		{ "Z", 35000 },
		{ "U", 35000 },
		{ "X", 35000 }
	});
	const int MINERAL_RANDOM_FACTOR = 2;

	const std::map<int, int> MINERAL_DENSITY({
		{ 1, 15000 },
		{ 2, 35000 },
		{ 3, 70000 },
		{ 4, 100000 }
	});
	
	const std::map<int, float> MINERAL_DENSITY_PROBABILITY({
		{ 1, 0.1 },
		{ 2, 0.5 },
		{ 3, 0.9 },
		{ 4, 1.0 }
	});
	const float MINERAL_DENSITY_CHANGE = 0.05;
	
	const int DENSITY_LOW = 1;
	const int DENSITY_MODERATE = 2;
	const int DENSITY_HIGH = 3;
	const int DENSITY_ULTRA = 4;
	
	const int TERMINAL_CAPACITY = 300000;
	const int TERMINAL_HITS = 3000;
	const float TERMINAL_SEND_COST = 0.1;
	const int TERMINAL_MIN_SEND = 100;
	const int TERMINAL_COOLDOWN = 10;
	
	const int CONTAINER_HITS = 250000;
	const int CONTAINER_CAPACITY = 2000;
	const int CONTAINER_DECAY = 5000;
	const int CONTAINER_DECAY_TIME = 100;
	const int CONTAINER_DECAY_TIME_OWNED = 500;
	
	const int NUKER_HITS = 1000;
	const int NUKER_COOLDOWN = 100000;
	const int NUKER_ENERGY_CAPACITY = 300000;
	const int NUKER_GHODIUM_CAPACITY = 5000;
	const int NUKE_LAND_TIME = 50000;
	const int NUKE_RANGE = 10;

	const std::map<int, int> NUKE_DAMAGE({
		{ 0, 10000000 },
		{ 2, 5000000 }
	});
	
	const int TOMBSTONE_DECAY_PER_PART = 5;

	const int PORTAL_DECAY = 30000;
	
	SCREEPS_STR ORDER_SELL = "sell";
	SCREEPS_STR ORDER_BUY = "buy";

	const float MARKET_FEE = 0.05;

	const int FLAGS_LIMIT = 10000;

	SCREEPS_STR SUBSCRIPTION_TOKEN = "token";
	
	SCREEPS_STR RESOURCE_ENERGY = "energy";
	SCREEPS_STR RESOURCE_POWER = "power";
	
	SCREEPS_STR RESOURCE_HYDROGEN = "H";
	SCREEPS_STR RESOURCE_OXYGEN = "O";
	SCREEPS_STR RESOURCE_UTRIUM = "U";
	SCREEPS_STR RESOURCE_LEMERGIUM = "L";
	SCREEPS_STR RESOURCE_KEANIUM = "K";
	SCREEPS_STR RESOURCE_ZYNTHIUM = "Z";
	SCREEPS_STR RESOURCE_CATALYST = "X";
	SCREEPS_STR RESOURCE_GHODIUM = "G";
	
	SCREEPS_STR RESOURCE_HYDROXIDE = "OH";
	SCREEPS_STR RESOURCE_ZYNTHIUM_KEANITE = "ZK";
	SCREEPS_STR RESOURCE_UTRIUM_LEMERGITE = "UL";
	
	SCREEPS_STR RESOURCE_UTRIUM_HYDRIDE = "UH";
	SCREEPS_STR RESOURCE_UTRIUM_OXIDE = "UO";
	SCREEPS_STR RESOURCE_KEANIUM_HYDRIDE = "KH";
	SCREEPS_STR RESOURCE_KEANIUM_OXIDE = "KO";
	SCREEPS_STR RESOURCE_LEMERGIUM_HYDRIDE = "LH";
	SCREEPS_STR RESOURCE_LEMERGIUM_OXIDE = "LO";
	SCREEPS_STR RESOURCE_ZYNTHIUM_HYDRIDE = "ZH";
	SCREEPS_STR RESOURCE_ZYNTHIUM_OXIDE = "ZO";
	SCREEPS_STR RESOURCE_GHODIUM_HYDRIDE = "GH";
	SCREEPS_STR RESOURCE_GHODIUM_OXIDE = "GO";
	
	SCREEPS_STR RESOURCE_UTRIUM_ACID = "UH2O";
	SCREEPS_STR RESOURCE_UTRIUM_ALKALIDE = "UHO2";
	SCREEPS_STR RESOURCE_KEANIUM_ACID = "KH2O";
	SCREEPS_STR RESOURCE_KEANIUM_ALKALIDE = "KHO2";
	SCREEPS_STR RESOURCE_LEMERGIUM_ACID = "LH2O";
	SCREEPS_STR RESOURCE_LEMERGIUM_ALKALIDE = "LHO2";
	SCREEPS_STR RESOURCE_ZYNTHIUM_ACID = "ZH2O";
	SCREEPS_STR RESOURCE_ZYNTHIUM_ALKALIDE = "ZHO2";
	SCREEPS_STR RESOURCE_GHODIUM_ACID = "GH2O";
	SCREEPS_STR RESOURCE_GHODIUM_ALKALIDE = "GHO2";
	
	SCREEPS_STR RESOURCE_CATALYZED_UTRIUM_ACID = "XUH2O";
	SCREEPS_STR RESOURCE_CATALYZED_UTRIUM_ALKALIDE = "XUHO2";
	SCREEPS_STR RESOURCE_CATALYZED_KEANIUM_ACID = "XKH2O";
	SCREEPS_STR RESOURCE_CATALYZED_KEANIUM_ALKALIDE = "XKHO2";
	SCREEPS_STR RESOURCE_CATALYZED_LEMERGIUM_ACID = "XLH2O";
	SCREEPS_STR RESOURCE_CATALYZED_LEMERGIUM_ALKALIDE = "XLHO2";
	SCREEPS_STR RESOURCE_CATALYZED_ZYNTHIUM_ACID = "XZH2O";
	SCREEPS_STR RESOURCE_CATALYZED_ZYNTHIUM_ALKALIDE = "XZHO2";
	SCREEPS_STR RESOURCE_CATALYZED_GHODIUM_ACID = "XGH2O";
	SCREEPS_STR RESOURCE_CATALYZED_GHODIUM_ALKALIDE = "XGHO2";

	struct REACTIONS_Struct {
		SCREEPS_STR mineral;
		struct {
			SCREEPS_STR mineral;
			SCREEPS_STR result;
		} reaction[10];
	};

	const std::map<
		SCREEPS_STR,
		std::map<
			SCREEPS_STR,
			SCREEPS_STR
		>
	> REACTIONS({
		{
			"H", {
				{ "O", "OH" },
				{ "L", "LH" },
				{ "K", "KH" },
				{ "U", "UH" },
				{ "Z", "ZH" },
				{ "G", "GH" }
			}
		},
		{
			"O", {
				{ "H", "OH" },
				{ "L", "LO" },
				{ "K", "KO" },
				{ "U", "UO" },
				{ "Z", "ZO" },
				{ "G", "GO" }
			}
		},
		{
			"Z", {
				{ "K", "ZK" },
				{ "H", "ZH" },
				{ "O", "ZO" }
			}
		},
		{
			"L", {
				{ "U", "UL" },
				{ "H", "LH" },
				{ "O", "LO" }
			}
		},
		{
			"K", {
				{ "Z", "ZK" },
				{ "H", "KH" },
				{ "O", "KO" }
			}
		},
		{
			"G", {
				{ "H", "GH" },
				{ "O", "GO"}
			}
		},
		{
			"U", {
				{ "L", "UL" },
				{ "H", "UH" },
				{ "O", "UO" }
			}
		},
		{
			"OH", {
				{ "UH", "UH2O" },
				{ "UO", "UHO2" },
				{ "ZH", "ZH2O" },
				{ "ZO", "ZHO2" },
				{ "KH", "KH2O" },
				{ "KO", "KHO2" },
				{ "LH", "LH2O" },
				{ "LO", "LHO2" },
				{ "GH", "GH2O" },
				{ "GO", "GHO2" }
			}
		},
		{
			"X", {
				{ "UH2O", "XUH2O" },
				{ "UHO2", "XUHO2" },
				{ "LH2O", "XLH2O" },
				{ "LHO2", "XLHO2" },
				{ "KH2O", "XKH2O" },
				{ "KHO2", "XKHO2" },
				{ "ZH2O", "XZH2O" },
				{ "ZHO2", "XZHO2" },
				{ "GH2O", "XGH2O" },
				{ "GHO2", "XGHO2" }
			}
		},
		{
			"ZK", {
				{ "UL", "G" }
			}
		},
		{
			"UL", {
				{ "ZK", "G" }
			}
		},
		{
			"LH", {
				{ "OH", "LH2O" }
			}
		},
		{
			"ZH", {
				{ "OH", "ZH2O" }
			}
		},
		{
			"GH", {
				{ "OH", "GH2O"}
			}
		},
		{
			"KH", {
				{ "OH", "KH2O" }
			}
		},
		{
			"UH", {
				{ "OH", "UH2O" }
			}
		},
		{
			"LO", {
				{ "OH", "LHO2" }
			}
 		},
		 {
			"ZO", {
				{ "OH", "ZHO2" }
			}
		},
		{
			"KO", {
				{ "OH", "KHO2" }
			}
		},
		{
			"UO", {
				{ "OH", "UHO2" }
			}
		},
		{
			"GO", {
				{ "OH", "GHO2" }
			}
		},
		{
			"LH2O", {
				{ "X", "XLH2O" }
			}
		},
		{
			"KH2O", {
				{ "X", "XKH2O" }
			}
		},
		{
			"ZH2O", {
				{ "X", "XZH2O" }
			}
		},
		{
			"UH2O", {
				{ "X", "XUH2O" }
			}
		},
		{
			"GH2O", {
				{ "X", "XGH2O" }
			}
		},
		{
			"LHO2", {
				{ "X", "XLHO2" }
			}
		},
		{
			"UHO2", {
				{ "X", "XUHO2" }
			}
		}, 
		{
			"KHO2", {
				{ "X", "XKHO2" }
			}
		}, 
		{
			"ZHO2", {
				{ "X", "XZHO2" }
			}
		},
		{
			"GHO2", {
				{ "X", "XGHO2" }
			}
		}
	});

	std::map<
		SCREEPS_STR,
		std::map<
			SCREEPS_STR,
			std::map<
				SCREEPS_STR, float
			>
		>
	> BOOSTS({
		{
			"work",
			{
				{
					"UO",
					{
						{ "harvest", 3.0f }
					}
				},
				{
					"UHO2",
					{
						{ "harvest", 5.0f }
					}
                                },
                                {
					"XUHO2",
					{
						{ "harvest", 7.0f }
					}
				},
				{
					"LH",
					{
						{ "build", 1.5f },
						{ "repair", 1.5f }
					}
				},
				{
					"LH20",
					{
						{ "build", 1.8f },
						{ "repair", 1.8f }
					}
				},
				{
					"XLH2O",
					{
						{ "build", 2.0f },
						{ "repair", 2.0f }
					}
				},
				{
					"ZH",
					{
						{ "dismatle", 2.0f }
					}
				},
				{
					"ZH2O",
					{
						{ "dismantle", 3.0f }
					}
				},
				{
					"XZH2O",
					{
						{ "dismantle", 4.0f }
					}
				},
				{
					"GH",
					{
						{ "upgradeController", 1.5f }
					}
				},
				{
					"GH2O",
					{
						{ "upgradeController", 1.8f }
					}
				},
				{
					"XGH2O",
					{
						{ "upgradeController", 2.0f }
					}
				}
			}
		},
		{
			"attack",
			{
				{
					"UH",
					{
						{ "attack", 2.0f }
					}
				},
				{
					"UH2O",
					{
						{ "attack", 3.0f }
					}
				},
				{
					"XUH2O",
					{
						{ "attack", 4.0f }
					}
				}
			}
		},
		{
			"ranged_attack",
			{
				{
					"KO",
					{
						{ "rangedAttack", 2.0f },
						{ "rangedMassAttack", 2.0f }
					}
				},
				{
					"KHO2",
					{
						{ "rangedAttack", 3.0f },
						{ "rangedMassAttack", 3.0f }
					}
				},
				{
					"XKHO2",
					{
						{ "rangedAttack", 4.0f },
						{ "rangedMassAttack", 4.0f }
					}
				}
			}
		},
		{
			"heal",
			{
				{
					"LO",
					{
						{ "heal", 2.0f },
						{ "rangedHeal", 2.0f }
					}
				},
				{
					"LHO2",
					{
						{ "heal", 3.0f },
						{ "rangedHeal", 3.0f }
					}
				},
				{
					"XLHO2",
					{
						{ "heal", 4.0f },
						{ "rangedHeal", 4.0f }
					}
				}
                        }
		},
		{
			"carry",
			{
				{
					"KH",
					{
						{ "capacity", 2.0f }
					}
				},
				{
					"KH2O",
					{
						{ "capacity", 3.0f }
					}
				},
				{
					"XKH2O",
					{
						{ "capacity", 4.0f }
					}
				}
                        }
		},
		{
			"move",
			{
				{
					"ZO",
					{
						{ "fatigue", 2.0f }
					}
				},
				{
					"ZHO2",
					{
						{ "fatigue", 3.0f }
					}
				},
				{
					"XZHO2",
					{
						{ "fatigue", 4.0f }
					}
				}
                        }
		},
		{
			"tough",
			{
				{
					"GO",
					{
						{ "damage", 0.7f }
					}
				},
				{
					"GHO2",
					{
						{ "damage", 0.5f }
					}
				},
				{
					"XGHO2",
					{
						{ "damage", 0.3f }
					}
				}
                        }
		}
	});
	
	const std::map<SCREEPS_STR, int> REACTION_TIME({
		{ "OH", 20 },
		{ "ZK", 5 },
		{ "UL", 5 },
		{ "G", 5 },
		{ "UH", 10 },
		{ "UH2O", 5 },
		{ "XUH2O", 60 },
		{ "UO", 10 },
		{ "UHO2", 5 },
		{ "XUHO2", 60 },
		{ "KH", 10 },
		{ "KH2O", 5 },
		{ "XKH2O", 60 },
		{ "KO", 10 },
		{ "KHO2", 5 },
		{ "XKHO2", 60 },
		{ "LH", 15 },
		{ "LH2O", 10 },
		{ "XLH2O", 65 },
		{ "LO", 10 },
		{ "LHO2", 5 },
		{ "XLHO2", 60 },
		{ "ZH", 20 },
		{ "ZH2O", 40 },
		{ "XZH2O", 160 },
		{ "ZO", 10 },
		{ "ZHO2", 5 },
		{ "XZHO2", 60 },
		{ "GH", 10 },
		{ "GH2O", 15 },
		{ "XGH2O", 80 },
		{ "GO", 10 },
		{ "GHO2", 15 },
		{ "XGHO2", 90 }
	});

	constexpr int PORTAL_UNSTABLE = 10*24*3600*1000;
	constexpr int PORTAL_MIN_TIMEOUT = 12*24*3600*1000;
	constexpr int PORTAL_MAX_TIMEOUT = 22*24*3600*1000;
	
	const int POWER_BANK_RESPAWN_TIME = 50000;
	
	const int INVADERS_ENERGY_GOAL = 100000;

	SCREEPS_STR SYSTEM_USERNAME = "Screeps";

	SCREEPS_STR SIGN_NOVICE_AREA = "A new Novice Area is being planned somewhere in this sector. Please make sure all important rooms are reserved.";
	SCREEPS_STR SIGN_RESPAWN_AREA = "A new Respawn Area is being planned somewhere in this sector. Please make sure all important rooms are reserved.";
	
	SCREEPS_STR BODYPARTS_ALL[8] = {
		MOVE,
		WORK,
		CARRY,
		ATTACK,
		RANGED_ATTACK,
		TOUGH,
		HEAL,
		CLAIM
	};

	SCREEPS_STR RESOURCE_ALL[43] = {
		RESOURCE_ENERGY,
		RESOURCE_POWER,
		
		RESOURCE_HYDROGEN,
		RESOURCE_OXYGEN,
		RESOURCE_UTRIUM,
		RESOURCE_KEANIUM,
		RESOURCE_LEMERGIUM,
		RESOURCE_ZYNTHIUM,
		RESOURCE_CATALYST,
		RESOURCE_GHODIUM,

		RESOURCE_HYDROXIDE,
		RESOURCE_ZYNTHIUM_KEANITE,
		RESOURCE_UTRIUM_LEMERGITE,
		
		RESOURCE_UTRIUM_HYDRIDE,
		RESOURCE_UTRIUM_OXIDE,
		RESOURCE_KEANIUM_HYDRIDE,
		RESOURCE_KEANIUM_OXIDE,
		RESOURCE_LEMERGIUM_HYDRIDE,
		RESOURCE_LEMERGIUM_OXIDE,
		RESOURCE_ZYNTHIUM_HYDRIDE,
		RESOURCE_ZYNTHIUM_OXIDE,
		RESOURCE_GHODIUM_HYDRIDE,
		RESOURCE_GHODIUM_OXIDE,
		
		RESOURCE_UTRIUM_ACID,
		RESOURCE_UTRIUM_ALKALIDE,
		RESOURCE_KEANIUM_ACID,
		RESOURCE_KEANIUM_ALKALIDE,
		RESOURCE_LEMERGIUM_ACID,
		RESOURCE_LEMERGIUM_ALKALIDE,
		RESOURCE_ZYNTHIUM_ACID,
		RESOURCE_ZYNTHIUM_ALKALIDE,
		RESOURCE_GHODIUM_ACID,
		RESOURCE_GHODIUM_ALKALIDE,

		RESOURCE_CATALYZED_UTRIUM_ACID,
		RESOURCE_CATALYZED_UTRIUM_ALKALIDE,
		RESOURCE_CATALYZED_KEANIUM_ACID,
		RESOURCE_CATALYZED_KEANIUM_ALKALIDE,
		RESOURCE_CATALYZED_LEMERGIUM_ACID,
		RESOURCE_CATALYZED_LEMERGIUM_ALKALIDE,
		RESOURCE_CATALYZED_ZYNTHIUM_ACID,
		RESOURCE_CATALYZED_ZYNTHIUM_ALKALIDE,
		RESOURCE_CATALYZED_GHODIUM_ACID,
		RESOURCE_CATALYZED_GHODIUM_ALKALIDE
	};
	
	const int COLORS_ALL[10] = {
		COLOR_RED,
		COLOR_PURPLE,
		COLOR_BLUE,
		COLOR_CYAN,
		COLOR_GREEN,
		COLOR_YELLOW,
		COLOR_ORANGE,
		COLOR_BROWN,
		COLOR_GREY,
		COLOR_WHITE
	};
}