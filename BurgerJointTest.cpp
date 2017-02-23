#include "BurgerKing.h"
#include "McDonalds.h"

#include "Burger.h"

#include <iostream>

int main()
{
	BurgerJoint * mcDonalds = new McDonalds();

    Burger * mcDonaldsCheeseBurger = mcDonalds->OrderBurger(std::string("cheeseburger"));
	std::cout << "I just ordered a " << mcDonaldsCheeseBurger->GetName() << "\n\n";
	delete mcDonaldsCheeseBurger;

	Burger * mcDonaldsBurger = mcDonalds->OrderBurger(std::string("burger"));
	std::cout << "I just ordered a " << mcDonaldsCheeseBurger->GetName() << "\n\n";
	delete mcDonaldsBurger;

	delete mcDonalds;

	BurgerJoint * burgerKing = new BurgerKing();

	Burger * burgerKingCheeseBurger = burgerKing->OrderBurger(std::string("cheeseburger"));
	std::cout << "I just ordered a " << burgerKingCheeseBurger->GetName() << "\n\n";
	delete burgerKingCheeseBurger;

	Burger * burgerKingBurger = burgerKing->OrderBurger(std::string("burger"));
	std::cout << "I just ordered a " << burgerKingBurger->GetName() << "\n\n";
	delete burgerKingBurger;

	delete burgerKing;

	return 0;
}
