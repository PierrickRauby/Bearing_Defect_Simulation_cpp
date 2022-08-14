IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = RollingElement.hpp Bearing.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o RollingElement.o Bearing.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	    $(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	    rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 



