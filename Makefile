CPPS := $(wildcard *.cpp)
EXES := $(patsubst %.cpp,%.exe,$(CPPS))
# EXES := 000_hello_world.cpp

# $(info $(MDS))

all: $(EXES)	

# won't do anything if the exes exist
$(EXES): %.exe : %.cpp
	g++ --std=c++11 -o $@ $<
	
# remove exes to recompile 
clean: 
	rm $(EXES)

