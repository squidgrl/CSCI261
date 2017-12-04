

#pragma once
#include <string>
using namespace std;

#define GRASS 0
#define POISON 1
#define FIRE 2
#define FLYING 3
#define WATER 4
#define NONE 5

string types[] = {"Grass","Poison","Fire","Flying","Water","No Type"};

double chart[5][6] = {{0.5,0.5,0.5,0.5,2.0,1.0},
					{2.0,0.5,1.0,1.0,1.0,1.0},
					{2.0,1.0,0.5,1.0,0.5,1.0},
					{2.0,1.0,1.0,1.0,1.0,1.0},
					{0.5,1.0,2.0,1.0,0.5,1.0}};
