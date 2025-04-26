// ************************************************************************** //
//                                                                            //
//                Account.cpp                                                 //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //
#include "Account.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account() {}

// [19920104_091532] index:0;amount:42;created

Account::Account( int initial_deposit )
{
	_accountIndex = Account::_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	Account::_totalAmount += _amount;

	Account::_displayTimestamp();
	std::cout << " "
	<< "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " "
	<< "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "closed" << std::endl;
}

// Methode
void	Account::makeDeposit( int deposit )
{
	(void)deposit;
	std::cout << "Make deposit" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	std::cout << "Make withdrawal" << std::endl;
	return true;
}

int	Account::checkAmount( void ) const
{
	std::cout << "Check Amount" << std::endl;
	return 0;
}

// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " "
	<< "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "deposits:" << _nbDeposits << ";"
	<< "withdrawals:" << _nbWithdrawals << std::endl;
}

// Getter
int	Account::getNbAccounts( void ) { return Account::_nbAccounts; }
int	Account::getTotalAmount( void ) { return Account::_totalAmount; }
int	Account::getNbDeposits( void ) { return Account::_totalNbDeposits; }
int	Account::getNbWithdrawals( void ) { return Account::_totalNbWithdrawals; }

//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " "
	<< "accounts:" << Account::getNbAccounts() << ";"
	<< "total:" << Account::getTotalAmount() << ";"
	<< "deposits:" << Account::getNbDeposits() << ";"
	<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t		now = time(NULL);
	struct tm	*date = localtime(&now);

	std::cout << "[" << std::setfill('0')
	<< std::setw(4) << date->tm_year + 1900
	<< std::setw(2) << date->tm_mon + 1
	<< std::setw(2) << date->tm_mday << "_"
	<< std::setw(2) << date->tm_hour
	<< std::setw(2) << date->tm_min
	<< std::setw(2) << date->tm_sec
	<< "]";
}
