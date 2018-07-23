#include "Creep.h"

#include "RoomObject.h"
#include "Structure.h"
#include "ConstructionSite.h"
#include "StructureController.h"
#include "TargetableResource.h"
#include "Resource.h"

namespace Screeps {
	Creep::Creep() {
	}
	Creep::Creep(emscripten::val creep) {
	}
	int Creep::atttack(TargetableObject *target) {
		return 0;
	}
	int Creep::attackController(Structure *target) {
		return 0;
	}
	int Creep::build(ConstructionSite *target) {
		return 0;
	}
	int Creep::cancelOrder(SCREEPS_STR methodName) {
		return 0;
	}
	int Creep::claimController(StructureController *target) {
		return 0;
	}
	int Creep::dismantle(Structure *target) {
		return 0;
	}
	int Creep::drop(SCREEPS_STR resourceType, int amount) {
		return 0;
	}
	int Creep::generateSafeMode(StructureController *target) {
		return 0;
	}
	int Creep::getActiveBodyParts(SCREEPS_STR type) {
		return 0;
	}
	int Creep::harvest(TargetableResource *target) {
		return 0;
	}
	int Creep::heal(Creep *target) {
		return 0;
	}
	int Creep::move(int direction) {
		return 0;
	}
	int Creep::moveByPath(emscripten::val path) {
		return 0;
	}
	int Creep::moveTo(int x, int y, MoveToOps opts) {
		return 0;
	}
	int Creep::moveTo(RoomObject *target, MoveToOps opts) {
		return 0;
	}
	int Creep::notifyWhenAttacked(bool enabled) {
		return 0;
	}
	int Creep::pickup(Resource *target) {
		return 0;
	}
	int Creep::rangedAttack(TargetableObject *target) {
		return 0;
	}
	int Creep::rangedHeal(Creep *target) {
		return 0;
	}
	int Creep::rangedMassAttack() {
		return 0;
	}
	int Creep::repair(Structure *target) {
		return 0;
	}
	int Creep::reserveController(StructureController *target) {
		return 0;
	}
	int Creep::say(SCREEPS_STR message, bool public_) {
		return 0;
	}
	int Creep::signController(StructureController *target, SCREEPS_STR text) {
		return 0;
	}
	int Creep::suicide() {
		return 0;
	}
	int Creep::transfer(TargetableObject *target, SCREEPS_STR resourceType, int amount) {
		return 0;
	}
	int Creep::upgradeController(StructureController *target) {
		return 0;
	}
	int Creep::withdraw(Structure *target, SCREEPS_STR resourceType, int amount) {
		return 0;
	}
}