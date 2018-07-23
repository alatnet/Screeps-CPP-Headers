#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>
#include <vector>
#include <map>

#include "TargetableObject.h"

namespace Screeps {
	class RoomObject;
	class Structure;
	class ConstructionSite;
	class StructureController;
	class TargetableResource;
	class Resource;

	class Creep : public TargetableObject {
	public:
		Creep();
		Creep(emscripten::val creep);

	public:
		struct Body {
			SCREEPS_STR boost;
			SCREEPS_STR type;
			int hits;
		};

		std::vector<Body> body;
		
		std::map<SCREEPS_STR,int> Carry;
		
		int carryCapacity;
		int fatigue;
		int hits;
		int hitsMax;
		SCREEPS_STR id;

		emscripten::val *memory;
		
		bool my;
		SCREEPS_STR name;
		SCREEPS_STR owner;
		SCREEPS_STR saying;
		bool spawning;
		int ticksToLive;
		
	public:
		int atttack(TargetableObject *target);
		int attackController(Structure *target);
		int build(ConstructionSite *target);
		int cancelOrder(SCREEPS_STR methodName);
		int claimController(StructureController *target);
		int dismantle(Structure *target);
		int drop(SCREEPS_STR resourceType, int amount=-1);
		int generateSafeMode(StructureController *target);
		int getActiveBodyParts(SCREEPS_STR type);
		int harvest(TargetableResource *target);
		int heal(Creep *target);
		int move(int direction);
		int moveByPath(emscripten::val path); //FIGURE THIS OUT!

	public:
		struct MoveToOps {
			int resuePath;
			bool serializeMemory;
			bool noPathFinding;
			struct {
				SCREEPS_STR fill;
				SCREEPS_STR stroke;
				SCREEPS_STR lineStyle;
				float strokeWidth;
				float opacity;
			} visualizePathStyle;
		};

		int moveTo(int x, int y, MoveToOps opts);
		int moveTo(RoomObject *target, MoveToOps opts);
		
	public:
		int notifyWhenAttacked(bool enabled);
		int pickup(Resource *target);
		int rangedAttack(TargetableObject *target);
		int rangedHeal(Creep *target);
		int rangedMassAttack();
		int repair(Structure *target);
		int reserveController(StructureController *target);
		int say(SCREEPS_STR message, bool public_=false);
		int signController(StructureController *target, SCREEPS_STR text);
		int suicide();
		int transfer(TargetableObject *target, SCREEPS_STR resourceType, int amount=-1);
		int upgradeController(StructureController *target);
		int withdraw(Structure *target, SCREEPS_STR resourceType, int amount=-1);
	};
}