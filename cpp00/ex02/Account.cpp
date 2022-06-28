#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	std::cout << "[" << time(NULL) << "] ";
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account( void )
{
	std::cout << "[" << time(NULL) << "] ";
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

Account::Account( void )
{

}


int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

// void	Account::displayAccountsInfos( void )
// {

// }

// void	Account::makeDeposit( int deposit )
// {

// }

// bool	Account::makeWithdrawal( int withdrawal )
// {

// }

// int		Account::checkAmount( void ) const
// {

// }

// void	Account::displayStatus( void ) const
// {

// }

// void	Account::_displayTimestamp( void )
// {

// }
