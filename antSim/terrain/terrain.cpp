#include "terrain.hpp"

const int	getIndex(const terrain &t, const int x, const int y)
{
	return (y * t.mapSize + x);
}

const int	getX(const terrain &t, const int index)
{
	return (index % t.mapSize);
}

const int	getY(const terrain &t, const int index)
{
	return (index / t.mapSize);
}

const int	getMaxIndex(const terrain &t)
{
	return (getIndex(t, t.mapSize, t.mapSize));
}
