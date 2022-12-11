EXE = Practice7
CCFLAGS = -Wall -Werror -Wextra -MMD -I include
OBJ_DIR = obj
SRC_DIR = src
OBJECTS = $(OBJ_DIR)/main.o $(OBJ_DIR)/CMessage1.o $(OBJ_DIR)/CMessage2.o $(OBJ_DIR)/CTest.o $(OBJ_DIR)/CAccount.o $(OBJ_DIR)/Car.o \
		$(OBJ_DIR)/F1Car.o $(OBJ_DIR)/Truck.o $(OBJ_DIR)/ConvertibleCar.o $(OBJ_DIR)/CarDealer.o $(OBJ_DIR)/CCurrentAccount.o $(OBJ_DIR)/CDepositAccount.o \
		$(OBJ_DIR)/CInvestmentAccount.o
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





