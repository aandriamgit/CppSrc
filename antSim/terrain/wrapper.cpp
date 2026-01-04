// #include "godot_cpp/classes/environment.hpp"
// #include "godot_cpp/classes/world_environment.hpp"
#include "godot_cpp/classes/object.hpp"
#include "godot_cpp/variant/vector3.hpp"
#include "terrainSystem.hpp"
#include "wrapper.h"

void terrainAPI::_bind_methods()
{
}

terrainAPI::terrainAPI()
{
}

void terrainAPI::initWorldEnv()
{
	// _we = get_node<WorldEnvironment>("WorldEnvironment");
	// if (_we)
	// {
	// 	Ref<Environment> env = _we->get_environment();
	// 	if (env.is_valid())
	// 	{
	// 		env->set_background(godot::Environment::BG_COLOR);
	// 		env->set_bg_color(Color(0.0, 206.0, 255.0));
	// 		ok i give up
	// 	}
	// }
}

void terrainAPI::initGeography()
{
	initTerrain(_terrain, 1);
	_mi = Object::cast_to<MeshInstance3D>(get_child(0));
	_mi->set_scale(Vector3(_terrain.mapSize, 1, _terrain.mapSize * 100));
}

void terrainAPI::_ready()
{
	// initWorldEnv();
	initGeography();
}

void terrainAPI::_process(float delta)
{
}
