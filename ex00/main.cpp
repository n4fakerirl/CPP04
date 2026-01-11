/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:30 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 16:39:27 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\nTRUE ANIMALS\n\n";
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\nWRONG ANIMALS\n\n";
    const WrongAnimal* wrongmeow = new WrongCat();
    const WrongAnimal* wrongani = new WrongAnimal();
    std::cout << "\n" << wrongmeow->getType() << " " << std::endl;
    std::cout << wrongani->getType() << " " << std::endl;
    wrongmeow->makeSound();
    wrongani->makeSound();
    std::cout << "\n";
    std::cout << "\nDELETE TRUE ANIMALS\n\n";
    delete i;
    delete j;
    delete meta;
    std::cout << "\nDELETE WRONG ANIMALS\n\n";
    delete wrongani;
    delete wrongmeow;
    return 0;
}
