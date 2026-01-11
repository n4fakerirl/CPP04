/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:30 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 17:09:07 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Animal *zoo[10];
    Cat *cat = new Cat();

    for (int i = 0; i < 10; i++)
    {
        if (i <= 4)
            zoo[i] = new Cat();
        else
            zoo[i] = new Dog();
    }
    for (int i = 0; i < 10; i++)
        zoo[i]->makeSound();

    std::cout << "\n\n";
    cat->setBrain("HEY");
    cat->brain->getBrain();
    std::cout << "\n\n";

    for (int i = 0; i < 10; i++)
    {
        delete zoo[i];
    }
    delete cat;
    return 0;
}
