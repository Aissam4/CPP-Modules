/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 23:26:26 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/24 22:39:22 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(){ return Account::_nbAccounts; }

int Account::getTotalAmount(){ return Account::_totalAmount; }

int Account::getNbDeposits(){ return Account::_totalNbDeposits; }

int Account::getNbWithdrawals(){ return Account::_totalNbWithdrawals; }

void	Account::_displayTimestamp()
{
	time_t time_;
	time_ = time(0);
	tm *gm = localtime(&time_);
	std::cout << "\033[0;36m[" << 1900 + gm->tm_year << "0" << 1 + gm->tm_mon << gm->tm_mday << "_" << gm->tm_hour << gm->tm_min << gm->tm_sec << "]\033[0m";
		
}

Account::Account(int initial_deposit){
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << " index:" << this->_nbAccounts << "; amount:" << this->_amount << "; created" << std::endl; 
}

Account::~Account(){
	this->_displayTimestamp();
	std::cout << " index : " << this->_nbAccounts << ";amount : " << _amount << ";closed" << std::endl;
	_nbAccounts++;
}

void	Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << "; total:" << _totalAmount << "; deposits:" <<  _totalNbDeposits << "; withdrawals:" << _totalNbWithdrawals << std::endl;
	_nbAccounts = 0;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << _nbAccounts << "; P_amount:" << this->_amount << "; deposits:" << deposit << "; amount:" << _amount + deposit << "; nb_deposits:" << 1 << std::endl;
	_nbDeposits++;
	_nbAccounts++;
	_totalNbDeposits++;
	this->_totalAmount += deposit;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		std::cout << " index:" << _nbAccounts << "; P_amount:" << this->_amount << "; withdrawal:refused" << std::endl;
		_nbAccounts++;
		return (false);
	}
	std::cout << " index:" << _nbAccounts << "; P_amount:" << this->_amount << "; withdrawal:" << withdrawal << "; amount:" << this->_amount - withdrawal << "; nb_withdrawals:" << 1 << std::endl;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_nbAccounts++;
	_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;
	return  (true);
}

void Account::displayStatus() const{
	_displayTimestamp();
	std::cout << " index:" << _nbAccounts << "; amount:" << _amount << "; deposits:" << _nbDeposits << "; withdrawals:" << _totalNbWithdrawals <<  std::endl;
	_nbAccounts++;
	if (_nbAccounts == 8)
	_nbAccounts = 0;
}
