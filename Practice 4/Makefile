CCFLAGS = -Wall -Werror -Wextra
Include = ./Include

Practice4: obj obj/main.o obj/Car.o obj/CarDealer.o obj/CCounter.o obj/Student.o
	g++ -I $(Include) $(CCFLAGS) --std=c++17 -o Practice4 obj/main.o obj/Car.o obj/CarDealer.o obj/CCounter.o obj/Student.o
	chmod +x Practice4

obj:
	mkdir obj

obj/main.o: Include/CarDealer.hpp Include/Car.hpp Include/CCounter.hpp Include/Student.hpp src/main.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/main.o -c src/main.cpp

obj/CarDealer.o: Include/CarDealer.hpp src/CarDealer.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/CarDealer.o -c src/CarDealer.cpp

obj/Car.o: Include/Car.hpp src/Car.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/Car.o -c src/Car.cpp

obj/CCounter.o: Include/CCounter.hpp src/CCounter.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/CCounter.o -c src/CCounter.cpp

obj/Student.o: Include/Student.hpp src/Student.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/Student.o -c src/Student.cpp

clean:
	rm -r obj
	rm Practice4