# ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <cstdlib>

class Brain
{
    public:
        Brain(void);
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        virtual ~Brain(void);
        std::string getIdeas(int i) const;
    private:
        std::string _ideas[100];
};

#endif