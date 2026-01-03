#include "terrainSystem.hpp"

void	initTerrain(terrain &t, const int &sizeValue)
{
	int	maxIndex;

	if (sizeValue <= 0)
		t.mapSize = 1;
	else
		t.mapSize = sizeValue;
	maxIndex = getMaxIndex(t);
	t.height = std::vector<float>(maxIndex, 0);
	t.terrainType = std::vector<type>(maxIndex, land);
}

void	resetTerrain(terrain &t)
{
	initTerrain(t, 1);
}
