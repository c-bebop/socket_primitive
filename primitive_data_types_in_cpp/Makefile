# Compilers
CC=gcc
CXX=g++

# Application name
NAME=primitive_data_types

# Header
HEADER=

STANDARD=-std=c++11
ERWEITERUNGEN=-pedantic
FEHLER=-Wall -Wextra -g -O2
CFLAGS=$(STANDARD) $(ERWEITERUNGEN) $(FEHLER)
CXXFLAGS=$(STANDARD) $(ERWEITERUNGEN) $(FEHLER)

# All .c files
CCSRC=

# All .cpp files
CXXSRC=primitive_data_types_main.cpp

# List of all .o files
OBJS=$(CCSRC:%.c=%.o) $(CXXSRC:%.cpp=%.o)

# Additional libs 
LIBS=

.c.o: 
	$(CC) $(CFLAGS) -c $< -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linken haengt von zwei Objekten ab!
$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS) $(LIBS)

clean: 
	rm $(OBJS)