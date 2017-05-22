OBJS = REND_Main.cpp REND_DisplayManager.cpp REND_InputManager.cpp REND_Window.cpp  

CC = g++

INCLUDE_PATHS = -l/usr/local/include -l/opt/X11/include

LIBRARY_PATHS = -L/usr/local/lib -

COMPILER_FLAGS = -w

LINKER_FLAGS = -framework OpenGL -lglfw3 -lglew

OBJ_NAME = rendtest

all: $(OBJS)
	$(CC) $(OBJS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o$(OBJ_NAME)
