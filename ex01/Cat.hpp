/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:10:27 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 16:56:36 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
    Brain *brain;
    
    public:
    Cat();
    Cat(const Cat &other);
    Cat& operator=(const Cat &other);
    virtual ~Cat();
    virtual void makeSound(void) const;
};