#include "terrainSystem.hpp"

void	initTerrain(terrain &t, const int &sizeValue)
{
	int	maxIndex;

	if (sizeValue <= 0)
		t.mapSize = 1;
	else
		t.mapSize = sizeValue;
	maxIndex = getMaxIndex(t);
	t.height.resize(maxIndex, 0);
	t.terrainType.resize(maxIndex, land);
	t.vertices.resize((maxIndex * 6) * 3);
	t.normals.resize((maxIndex * 6) * 3);
}

void	resetTerrain(terrain &t)
{
	initTerrain(t, 1);
}
