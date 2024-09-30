#pragma once
#include <iostream>
#include "Participant.h"
using namespace std;
class Obstacle
{
public:
	virtual bool Overcome(Participant& participant) = 0;
};

class Racetrack : public Obstacle
{
	int distance;
public:
	Racetrack(int dist)
	{
		distance = dist;
	}
	bool Overcome(Participant& participant)
	{
		if (participant.getMaxRunDistance() >= distance) {
			cout << "Participant " << participant.getName() << " overcome racetrack on distance " << distance << " meters.\n";
			return true;
		}
		else {
			cout << "Participant " << participant.getName() << " did not overcome racetrack on distance " << distance << " meters.\n";
			return false;
		}
	}
};

class Wall : public Obstacle
{
	int height;
public:
	Wall(int h) 
	{
		height = h;
	}

	bool Overcome(Participant& participant)
	{
		if (participant.getMaxRunDistance() >= height) {
			cout << "Participant " << participant.getName() << " overcome wall on distance " << height << " meters.\n";
			return true;
		}
		else {
			cout << "Participant " << participant.getName() << " did not overcome wall on distance " << height << " meters.\n";
			return false;
		}
	}
};