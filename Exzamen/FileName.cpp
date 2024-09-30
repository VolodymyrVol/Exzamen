#include <iostream>
#include<vector>
#include"Obstacle.h"
using namespace std;

int main()
{
	vector<Participant*> participants = { new Human("Human"), new Cat("Cat"), new Robot("Robot") };
	vector<Obstacle*> obstacles = { new Racetrack(400), new Wall(2) };

    for (Participant* participant : participants) {
        bool success = true;
        for (Obstacle* obstacle : obstacles) {
            if (!obstacle->Overcome(*participant)) {
                success = false;
                break;
            }
        }
        cout << "\n";
    }
    for (Participant* participant : participants)
    {
        delete[] participant;
    }
    for (Obstacle* obstacle : obstacles)
    {
        delete[] obstacle;
    }
}.