CCFLAGS = -Werror -Wextra -Wall
Include = ./Include

Practice5: obj obj/main.o obj/Car.o obj/CarDealer.o obj/CBook.o obj/StoreArray.o obj/CPayRoll.o
	g++ -I Include $(CCFLAGS) --std=c++17 -o Practice5 obj/main.o obj/Car.o obj/CarDealer.o obj/CBook.o obj/StoreArray.o obj/CPayRoll.o
	chmod +x Practice5

obj:
	mkdir obj

obj/main.o: Include/CarDealer.hpp Include/Car.hpp Include/CBook.hpp Include/StoreArray.hpp src/main.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/main.o -c src/main.cpp

obj/CarDealer.o: Include/CarDealer.hpp src/CarDealer.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/CarDealer.o -c src/CarDealer.cpp

obj/Car.o: Include/Car.hpp src/Car.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/Car.o -c src/Car.cpp

obj/CBook.o: Include/CBook.hpp src/CBook.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/CBook.o -c src/CBook.cpp

obj/StoreArray.o: Include/StoreArray.hpp src/StoreArray.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/StoreArray.o -c src/StoreArray.cpp

obj/CPayRoll.o: Include/CPayRoll.hpp src/CPayRoll.cpp
	g++ -I Include $(CCFLAGS) --std=c++17 -o obj/CPayRoll.o -c src/CPayRoll.cpp

clean:
	rm -r obj
	rm Practice5