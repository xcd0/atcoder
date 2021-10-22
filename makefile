all:
	make build

build:
	#rm -rf combined.cpp
	#python3 ac-library/expander.py *.cpp

	time clang++-13 \
		-std=c++17 \
		-Ofast \
		-Wall \
		-march=native \
		-Wpessimizing-move -Wredundant-move \
		-I ac-library/ \
		tmp.cpp
	#cat tmp.cpp | xsel -bi

test:
	make build
	cat q | ./a.out

cf:
	clang-format -i tmp.cpp

.PHONY: all build test cf
