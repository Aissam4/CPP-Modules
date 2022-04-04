/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:44:23 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 02:08:50 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *materias[4];
		int         nbr;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &obj);
        MateriaSource &operator= (const MateriaSource &obj);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        virtual ~MateriaSource();
};

#endif