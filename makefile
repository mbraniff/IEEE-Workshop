1: 1.cpp
	@g++ 1.cpp -o 1

2: 2.cpp
	@g++ 2.cpp -o 2

3: 3.cpp
	@g++ 2.cpp -o 3

clean:
	@touch 1
	@rm 1
	@touch 2
	@rm 2
	@touch 3
	@rm 3