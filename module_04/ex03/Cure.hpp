/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:22:17 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 01:55:27 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
#define __CURE_HPP__

# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure();	
		Cure( Cure const & src );
		~Cure(){};
		Cure*       clone() const;
		Cure &		operator=( Cure const & obj );
		void        use(ICharacter& target);
	private:

};
#endif