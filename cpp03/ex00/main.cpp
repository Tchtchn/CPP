#include "ClapTrap.hpp"

int main()
{
	{
		std::cout << "--------------" << std::endl;
		std::cout << "--- ATTACK ---" << std::endl;
		std::cout << "--------------" << std::endl << std::endl;

		ClapTrap trap("Trappy");
		ClapTrap copy;

		for (int i = 0; i < 5; i++)
			trap.attack("Jeff");
		
		copy = trap;
		for (int i = 0; i < 6; i++)
			copy.attack("Alfred");
	}
	{
		std::cout << "-------------------" << std::endl;
		std::cout << "--- TAKE DAMAGE ---" << std::endl;
		std::cout << "-------------------" << std::endl;

		ClapTrap trap;

		for (int i = 0; i <= 4; i++)
		{
			trap.attack("Jeff");
			trap.takeDamage(3);
		}
	}
	{
		std::cout << "--------------" << std::endl;
		std::cout << "--- REPAIR ---" << std::endl;
		std::cout << "--------------" << std::endl;

		ClapTrap trap("HealBot");

		for (int i = 0; i <= 3; i++)
		{
			trap.takeDamage(4);
			trap.beRepaired(1);
		}
	}
	return (0);
}