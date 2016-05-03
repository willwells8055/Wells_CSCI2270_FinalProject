#Makefile for finalProject
PROG=final
CC=g++
OBJS=FinalProject.o Forest.o
CPPFLAGS= -Wall -std=c++11

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)
FinalProject.o: FinalProject.cpp
	$(CC) -c $(CPPFLAGS) FinalProject.cpp
Forest.o: Forest.h Forest.cpp
	$(CC) -c $(CPPFLAGS) Forest.cpp
clean:
	$(RM) $(PROG) $(OBJS)
