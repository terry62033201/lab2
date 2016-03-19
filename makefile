lab2: lab2.o bmi.o
	g++ -o lab2 lab2.o bmi.o
lab2.o: lab2.cpp bmi.h
	g++ -c lab2.cpp
bmi.o: bmi.cpp bmi.h
	g++ -c bmi.cpp

clean:
	rm lab2.o bmi.o lab2	
