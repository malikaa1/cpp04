#ifndef Brain_HPP
# define Brain_HPP

#include <iostream>

class Brain{
public:
	Brain(void);
	Brain(const Brain &src);
	virtual ~Brain(void);
	Brain &operator=(Brain const & brain);
	std::string ideas[100];
};
#endif