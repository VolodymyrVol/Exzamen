#pragma once
#include <iostream>
#include<string>
using namespace std;
class Participant
{
protected:
	string name;
	int maxRunDistance;
	int maxJumpHeight;
public:
	Participant(string name, int runDist, int jumpHeight)
	{
		this->name = name;
		maxRunDistance = runDist;
		maxJumpHeight = jumpHeight;
	}
	virtual void Run(int dist) = 0;
	virtual void Jump(int height) = 0;
	string getName() 
	{
		return name; 
	}
	int getMaxRunDistance() 
	{
		return maxRunDistance; 
	}
	int getMaxJumpHeight() 
	{
		return maxJumpHeight; 
	}
};

class Human : public Participant
{
public:
	Human(string name) :Participant(name, 500, 2){}
	void Run(int dist)
	{
		if (dist <= maxRunDistance) {
			cout << name << " ran " << dist << " meters.\n";
		}
		else {
			cout << name << " can`t ran " << dist << " meters.\n";
		}
	}
	void Jump(int height) override {
		if (height <= maxJumpHeight) {
			cout << name << " jumped over " << height << " meters.\n";
		}
		else {
			cout << name << " could not jump over " << height << " meters.\n";
		}
	}
};

class Cat : public Participant
{
public:
	Cat(string name) :Participant(name, 300, 3) {}
	void Run(int dist)
	{
		if (dist <= maxRunDistance) {
			cout << name << " ran " << dist << " meters.\n";
		}
		else {
			cout << name << " can`t ran " << dist << " meters.\n";
		}
	}
	void Jump(int height) override {
		if (height <= maxJumpHeight) {
			cout << name << " jumped over " << height << " meters.\n";
		}
		else {
			cout << name << " could not jump over " << height << " meters.\n";
		}
	}
};

class Robot : public Participant
{
public:
	Robot(string name) :Participant(name, 1000, 1) {}
	void Run(int dist)
	{
		if (dist <= maxRunDistance) {
			cout << name << " ran " << dist << " meters.\n";
		}
		else {
			cout << name << " can`t ran " << dist << " meters.\n";
		}
	}
	void Jump(int height) override {
		if (height <= maxJumpHeight) {
			cout << name << " jumped over " << height << " meters.\n";
		}
		else {
			cout << name << " could not jump over " << height << " meters.\n";
		}
	}
};