/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:50:07 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 16:55:16 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor called\n";
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called\n";
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Copy Constructor called of Brain\n";
}

Brain& Brain::operator=(const Brain &other)
{
	if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
	return (*this);
}

void Brain::setBrain(std::string idea)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

std::string Brain::getBrain(void)
{
    for (int i = 0; i < 100; i++)
        std::cout << this->ideas[i] << "\n";
}
