/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 23:26:26 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/24 00:58:31 by abarchil         ###   ########.fr       */
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
	std::cout << "[" << 1900 + gm->tm_year << "0" << 1 + gm->tm_mon << gm->tm_mday << "_" << gm->tm_hour << gm->tm_min << gm->tm_sec << "]";
		
}

Account::Account(int initial_deposit){
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->displayAccountsInfos();
	std::cout << " index : " << this->_nbAccounts << ";amount : " << this->_amount << ";created"; 
}

Account::~Account(){
	this->_displayTimestamp();
	std::cout << " index : " << this->_nbAccounts << ";amount : " << this->_amount << ";closed"; 
}
// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0

void	Account::displayAccountsInfos(){
	_displayTimestamp();
}
