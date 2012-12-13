#
# Author: Tiago Augusto Pimenta <tiagoapimenta@gmail.com>
#

TARGET  = bin/web-dumper

SOURCES = $(patsubst %,src/%.cpp,web-dumper)

OBJS    = $(SOURCES:src/%.cpp=.objs/%.o)

CFLAGS  = -O3
LDFLAGS = 
LIBS    = 

all: $(TARGET)
	strip $(TARGET)

$(TARGET): dirs $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $@ $(LIBS)

.objs/%.o: src/%.cpp
	$(CXX) $(CFLAGS) -c $? -o $@

dirs:
	-mkdir -p $(dir $(TARGET) $(OBJS))

clean:
	-rm $(TARGET) $(OBJS)
	-rmdir -p $(dir $(TARGET) $(OBJS))
