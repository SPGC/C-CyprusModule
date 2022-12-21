EXE = Practice8
CCFLAGS = -Wall -Werror -Wextra -MMD -I include
OBJ_DIR = obj
SRC_DIR = src
OBJECTS = $(OBJ_DIR)/main.o $(OBJ_DIR)/StaticStack.o $(OBJ_DIR)/Stack.o
all : $(EXE)

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(EXE) : $(OBJ_DIR) $(OBJECTS)
	$(CXX) -o $@ $(OBJECTS)

$(OBJECTS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CC_FLAGS) -c $< -o $@

include $(wildcard obj/*.d)

clean :
	$(RM) $(EXE) $(OBJECTS)
	$(RM) -r $(OBJ_DIR)

.PHONY: all clean
