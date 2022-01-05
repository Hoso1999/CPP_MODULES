#include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    ++this->_nbAccounts;
    this->_totalAmount += initial_deposit;
}

void	Account::_displayTimestamp( void )
{
    time_t t = std::time(0);
    std::cout << t;
}