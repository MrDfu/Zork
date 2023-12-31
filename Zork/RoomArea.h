#pragma once
#include <string>
#include <vector>
#include <functional>
#include <iostream>
#include "Item.h"

class Player;
class Item;


class RoomArea{
 public:

	RoomArea(std::string description, std::function<void(Player*)> eventFunction);
	RoomArea(std::string description);
	std::function<void(Player*)> roomEvent;

	void DefaultEvent();
	virtual ~RoomArea();
	bool hasEvent{false};
	bool hasItem{false};
	Item* item=nullptr;
	std::string description;
	std::string itemDescription{ "" };
};

