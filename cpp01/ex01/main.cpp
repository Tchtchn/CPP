#include "Zombie.hpp"

int main()
{
	Zombie* horde;
	int		N = 3;

	horde = zombieHorde(N, "Albert");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}