#pragma once

#include <cstdint>
#include <vector>

enum type : uint8_t
{
	water,
	land
};

struct		terrain
{
	int		mapSize;
	std::vector<type> terrainType;
	std::vector<float> height;
	std::vector<float> vertices;
	std::vector<float> normals;
};

const int	getIndex(const terrain &t, const int x, const int y);
const int	getX(const terrain &t, const int index);
const int	getY(const terrain &t, const int index);
const int	getMaxIndex(const terrain &t);
