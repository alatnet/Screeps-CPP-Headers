#include "Game.h"

#include "ConstructionSite.h"
#include "Creep.h"
#include "Flag.h"
#include "StructureSpawn.h"
#include "Structure.h"

namespace Screeps {
	Game::Game() {
	}
	Game::Game(emscripten::val game) {
	}
	emscripten::val* Game::getObjectById(SCREEPS_STR id) {
		return nullptr;
	}
	void Game::notify(SCREEPS_STR msg, int groupInterval) {
	}

	//-------------------------------------------------------------------------------------
	//CPU
	//-------------------------------------------------------------------------------------
	Game::CPU::CPU() {
	}
	Game::CPU::CPU(emscripten::val cpu) {
	}
	std::map<SCREEPS_STR, int> Game::CPU::getHeapStatistics() {
		return std::map<SCREEPS_STR, int>();
	}
	float Game::CPU::getUsed() {
		return 0.0f;
	}
	int Game::CPU::setShardLimits(std::map<SCREEPS_STR, int> limits) {
		return 0;
	}

	//-------------------------------------------------------------------------------------
	//Map
	//-------------------------------------------------------------------------------------
	Game::Map::Map() {
	}
	Game::Map::Map(emscripten::val map) {
	}
	int Game::Map::findExit(std::map<SCREEPS_STR, Room> fromRoom, std::map<SCREEPS_STR, Room> toRoom, RoomOpts opts) {
		return 0;
	}
	int Game::Map::findRoute(std::map<SCREEPS_STR, Room> fromRoom, std::map<SCREEPS_STR, Room> toRoom, std::vector<FindRouteRet>& ret, std::function<float(SCREEPS_STR, SCREEPS_STR)> opts) {
		return 0;
	}
	int Game::Map::getRoomLinearDistance(SCREEPS_STR roomName1, SCREEPS_STR roomName2, bool continuous) {
		return 0;
	}
	const char * Game::Map::getTerrainAt(int x, int y, SCREEPS_STR roomName, RoomPosition *pos) {
		return nullptr;
	}
	int Game::Map::getWorldSize() {
		return 0;
	}
	bool Game::Map::isRoomAvailable(SCREEPS_STR roomName) {
		return false;
	}

	//-------------------------------------------------------------------------------------
	//Market
	//-------------------------------------------------------------------------------------
	Game::Market::Market() {
	}
	Game::Market::Market(emscripten::val market) {
	}
	int Game::Market::calcTransactionCost(int amount, SCREEPS_STR roomName1, SCREEPS_STR roomName2) {
		return 0;
	}
	int Game::Market::cancelOrder(SCREEPS_STR orderId) {
		return 0;
	}
	int Game::Market::changeOrderPrice(SCREEPS_STR orderId, float newPrice) {
		return 0;
	}
	int Game::Market::createOrder(SCREEPS_STR type, SCREEPS_STR resourceType, float price, int totalAmount, SCREEPS_STR roomName) {
		return 0;
	}
	int Game::Market::deal(SCREEPS_STR orderId, int amount, SCREEPS_STR yourRoomName) {
		return 0;
	}
	int Game::Market::extendOrder(SCREEPS_STR orderId, int addAmount) {
		return 0;
	}
	std::vector<Game::Market::ActiveOrder> Game::Market::getAllOrders() {
		return std::vector<Game::Market::ActiveOrder>();
	}
	Game::Market::ActiveOrder Game::Market::getOrderById(SCREEPS_STR id) {
		return Game::Market::ActiveOrder();
	}
}