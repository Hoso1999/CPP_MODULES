#include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}


Account::Account( int initial_deposit )
    : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    ++Account::_nbAccounts;
    Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::chrono::time_point<std::chrono::system_clock> now;
    now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_time = *localtime(&time_now);
	std::cout << std::setfill('0') << "[" << (utc_time.tm_year + 1900);
    std::cout << std::setw(2) << utc_time.tm_mon;
    std::cout << std::setw(2) << utc_time.tm_mday << "_";
    std::cout << std::setw(2) << utc_time.tm_hour;
    std::cout << std::setw(2) << utc_time.tm_min;
    std::cout << std::setw(2) << utc_time.tm_sec << "] ";		
}

void Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    ++this->_nbDeposits;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    ++Account::_totalNbDeposits;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

void Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount -= withdrawal;
    if (this->checkAmount())
        std::cout << "withdrawal:" << withdrawal << ";";
    else
    {
        std::cout << "withdrawal:" << "refused" << std::endl;
        this->_amount += withdrawal;
        return false;
    }
    ++Account::_totalNbWithdrawals;
    Account::_totalAmount -= withdrawal;
    ++this->_nbWithdrawals;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}

int		Account::checkAmount( void ) const
{
    return this->_amount >= 0;
}
