# Variables
CXX = g++
CXXFLAGS = -std=c++11 -I$(HOME)/Quantum-Computing-Algorithms/subset
LDFLAGS = -L$(HOME)/Quantum-Computing-Algorithms/subset -lgtest -lgtest_main -pthread

# Targets
all: test_subset_sum

# Include the headers during compilation, so it allows <> 
subset.o: tests/subset_sum.cpp
	$(CXX) $(CXXFLAGS) -c tests/subset_sum.cpp -o subset.o


# Link the guarded headers 
test_subset_sum: subset.o
	$(CXX) subset.o $(LDFLAGS) -o test_subset_sum

clean:
	rm -f subset.o test_subset_sum

