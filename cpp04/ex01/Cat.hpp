# ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        virtual ~Cat(void);
        void makeSound() const;
        Brain &getBrain() const;
    private:
        Brain *_CatBrain;
};

#endif