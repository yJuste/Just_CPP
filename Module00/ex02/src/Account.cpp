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

Account::Account( int initial_deposit )
{
	_accountIndex = Account::_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << " "
	<< "index:" << _accountIndex << ";"
	<< "amount:" << initial_deposit << ";"
	<< "created" << std::endl;

	Account::_totalAmount += _amount;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " "
	<< "index:" << _accountIndex << ";"
	<< "amount:" << checkAmount() << ";"
	<< "closed" << std::endl;
}

// Methode
void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << " "
	<< "index:" << _accountIndex << ";"
	<< "p_amount:" << checkAmount() << ";"
	<< "deposit:" << deposit << ";"
	<< "amount:" << checkAmount() + deposit << ";"
	<< "nb_deposits:" << _nbDeposits + 1 << std::endl;

	_nbDeposits++;
	Account::_totalNbDeposits++;
	_amount += deposit;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << " "
	<< "index:" << _accountIndex << ";"
	<< "p_amount:" << checkAmount() << ";";
	if (checkAmount() - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << withdrawal << ";"
	<< "amount:" << checkAmount() - withdrawal << ";"
	<< "nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;

	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	return (true);
}

// Getter
int	Account::checkAmount( void ) const { return _amount; }

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " "
	<< "index:" << _accountIndex << ";"
	<< "amount:" << checkAmount() << ";"
	<< "deposits:" << _nbDeposits << ";"
	<< "withdrawals:" << _nbWithdrawals << std::endl;
}

// Getter
int	Account::getNbAccounts( void ) { return Account::_nbAccounts; }
int	Account::getTotalAmount( void ) { return Account::_totalAmount; }
int	Account::getNbDeposits( void ) { return Account::_totalNbDeposits; }
int	Account::getNbWithdrawals( void ) { return Account::_totalNbWithdrawals; }

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
	<< std::setw(2) << date->tm_sec << "]";
}
