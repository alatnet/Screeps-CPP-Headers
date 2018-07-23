#pragma once

#include "Common.h"

#include <emscripten.h>
#include <emscripten/val.h>
#include <map>
#include <vector>

#include "Room.h"

namespace Screeps {
	class ConstructionSite;
	class Creep;
	class Flag;
	class StructureSpawn;
	class Structure;

	class Game {
	public:
		Game();
		Game(emscripten::val game);
		
	public:
		emscripten::val* getObjectById(SCREEPS_STR id);
		void notify(SCREEPS_STR msg, int groupInterval=0);

	public:
		ConstructionSite *constructionSites;
		
	public:
		class CPU {
		public:
			CPU();
			CPU(emscripten::val cpu);
		public:
			int limit;
			int tickLimit;
			int bucket;
			std::map<SCREEPS_STR,int> shardLimits;
		public:
			std::map<SCREEPS_STR, int> getHeapStatistics();
			float getUsed();
			int setShardLimits(std::map<SCREEPS_STR, int> limits);
		};
		
	public:
		class Map {
		public:
			Map();
			Map(emscripten::val map);
		public:
			std::map<SCREEPS_STR, SCREEPS_STR> describeExits(SCREEPS_STR);

			int findExit(
				std::map<SCREEPS_STR, Room> fromRoom,
				std::map<SCREEPS_STR, Room> toRoom,
				RoomOpts opts
			);

			struct FindRouteRet{
				int exit;
				const char* room;
			};

			int findRoute(
				std::map<SCREEPS_STR, Room> fromRoom,
				std::map<SCREEPS_STR, Room> toRoom,
				std::vector<FindRouteRet> &ret,
				std::function<float(SCREEPS_STR, SCREEPS_STR)> opts = nullptr
			);

			int getRoomLinearDistance(SCREEPS_STR roomName1, SCREEPS_STR roomName2, bool continuous = false);
			
			const char* getTerrainAt(int x, int y, SCREEPS_STR roomName, RoomPosition *pos);
			
			int getWorldSize();
			
			bool isRoomAvailable(SCREEPS_STR roomName);
		};
		
	public:
		class Market {
		public:
			Market();
			Market(emscripten::val market);
		
		public:
			int credits;
		
		public:
			struct Transaction {
				SCREEPS_STR transactionId;
				int time;
				struct {
					SCREEPS_STR username;
				} sender;
				struct {
					SCREEPS_STR username;
				} recipient;
				SCREEPS_STR resourceType;
				int amount;
				SCREEPS_STR from;
				SCREEPS_STR to;
				SCREEPS_STR description;
				struct{
					SCREEPS_STR id;
					SCREEPS_STR type;
					float price;
				} order;
			};

			Transaction incomingTransactions[100];
			Transaction outgoingTransactions[100];

		public:
			struct Order {
				SCREEPS_STR id;
				int created;
				bool active;
				SCREEPS_STR type;
				SCREEPS_STR resourceType;
				SCREEPS_STR roomName;
				int amount;
				int remainingAmount;
				int totalAmount;
				float price;
			};
			
			std::map<SCREEPS_STR, Order> orders;
			
		public:
			int calcTransactionCost(int amount, SCREEPS_STR roomName1, SCREEPS_STR roomName2);
			int cancelOrder(SCREEPS_STR orderId);
			int changeOrderPrice(SCREEPS_STR orderId, float newPrice);
			int createOrder(SCREEPS_STR type, SCREEPS_STR resourceType, float price, int totalAmount, SCREEPS_STR roomName = "");
			int deal(SCREEPS_STR orderId, int amount, SCREEPS_STR yourRoomName = "");
			int extendOrder(SCREEPS_STR orderId, int addAmount);

		public:
			struct ActiveOrder {
				SCREEPS_STR id;
				int created;
				SCREEPS_STR type;
				SCREEPS_STR resourceType;
				SCREEPS_STR roomName;
				int amount;
				int remainingAmount;
				float price;
			};
			
			std::vector<ActiveOrder> getAllOrders();

			ActiveOrder getOrderById(SCREEPS_STR id);
		};

	public:
		struct GCL {
			int level;
			int progress;
			int progressTotal;
		};
	
		struct Shard {
			SCREEPS_STR name;
			SCREEPS_STR type;
			bool ptr;
		};
		
	public:
		CPU cpu;
		std::map<SCREEPS_STR, Creep> creeps;
		std::map<SCREEPS_STR, Flag> flags;
		GCL gcl;
		Map map;
		Market market;
		std::map<emscripten::val, int> resources;
		std::map<SCREEPS_STR, Room> rooms;
		Shard shard;
		std::map<SCREEPS_STR, StructureSpawn> spawns;
		std::map<SCREEPS_STR, Structure> structures;
		int time;
	};
}