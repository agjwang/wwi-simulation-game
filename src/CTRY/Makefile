OBJS = CTRY_Base.o CTRY_France.o CTRY_GreatBritain.o CTRY_Interacter.o

CC = g++

COMPILER_FLAGS = -Wall -c

LINKER_FLAGS = -Wall

interacter: $(OBJS)
	$(CC) $(LINKER_FLAGS) $(OBJS) -o interacter

CTRY_Base.o : CTRY_Base.cpp CTRY_Base.h
	$(CC) $(COMPILER_FLAGS) CTRY_Base.cpp

CTRY_France.o : CTRY_France.cpp CTRY_France.h CTRY_Base.h
	$(CC) $(COMPILER_FLAGS) CTRY_France.pp

CTRY_GreatBritain.o : CTRY_GreatBritain.cpp CTRY_GreatBritain.h CTRY_Base.h
	$(CC) $(COMPILER_FLAGS) CTRY_GreatBritain.cpp

CTRY_Interacter.o : CTRY_Interacter.cpp CTRY_Interacter.h CTRY_Countries.h CTRY_Base.h
	$(CC) $(COMPILER_FLAGS) CTRY_Interacter.cpp

clean:
	\rm *.o *~ p1
