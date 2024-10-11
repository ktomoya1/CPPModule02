PROGRAM := a.out

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
DEBUGFLAGS = -g -fsanitize=address

INCDIR = inc
SRCDIR = src
OBJDIR = obj

SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

all: $(PROGRAM)

$(PROGRAM): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(PROGRAM)

re: fclean all

ifeq ($(MAKECMDGOALS), debug)
CXXFLAGS += $(DEBUGFLAGS)
endif

debug: re

fmt:
	$(if $(SRC), clang-format --style=Google -i $(SRC))

.PHONY: all clean fclean re debug fmt
