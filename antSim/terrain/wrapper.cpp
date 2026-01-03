#include "godot_cpp/classes/ref.hpp"
#include "terrainSystem.hpp"
#include "wrapper.h"

void terrainAPI::_bind_methods()
{
}

terrainAPI::terrainAPI()
{
}

void terrainAPI::_ready()
{
	initTerrain(_terrain, 1);
	_mi->set_mesh(m);
}

void terrainAPI::_process(float delta)
{
}
