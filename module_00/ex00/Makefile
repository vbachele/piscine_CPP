NAME = megaphone

OS = $(shell uname -s)
ifeq ($(OS),Darwin)
	CXX = c++-11
else
	CXX = c++
endif
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

S = megaphone.cpp
B = .build
D = $(S:%.cpp=$(B)/%.d)
O = $(D:.d=.o)

all: $(NAME)

$(NAME): $(O)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(B):
	mkdir $@

$(B)/%.o: %.cpp | $(B)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(B)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./$< "shhhhh... I think the students are asleep..."
	./$< Damnit " ! " "Sorry students, I thought this thing was off."
	./$<

push:
	@git add .
	@git status
	@git commit -m "cpp (make push)"
	@git push

.PHONY: all clean fclean re test