# Compilers
CC=gcc
CXX=g++

# Application name
NAME=primitive_data_types

# Header
HEADER=

STANDARD=-std=c++11
EXTENSIONS=-pedantic
ERRORS=-Wall -Wextra -g -O2
CFLAGS=$(STANDARD) $(EXTENSIONS) $(ERRORS)
CXXFLAGS=$(STANDARD) $(EXTENSIONS) $(ERRORS)

# All .c files
CCSRC=

# All .cpp files
CXXSRC=primitive_data_types_main.cpp

# List of all .o files
OBJS=$(CCSRC:%.c=%.o) $(CXXSRC:%.cpp=%.o)

# Additional libs 
LIBS=

# Compiles all .c files
.c.o: 
	$(CC) $(CFLAGS) -c $< -o $@

# Compiles all .cpp files
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Links
$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS) $(LIBS)

# Cleanes up
clean: 
	rm $(OBJS)