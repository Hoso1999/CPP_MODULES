NAME		=	diamond

SRCS		=	$(wildcard *.cpp)

OBJS		=	$(patsubst %.cpp, %.o, $(SRCS))

CXX			=	c++

RM			=	rm -f

CXXFLAGS	=	-Wall -Wextra -Werror

%.o:		%.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re