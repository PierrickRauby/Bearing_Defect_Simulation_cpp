IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = Vehicule.h Moto.h Voiture.h Camion.h Garage.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o Vehicule.o Moto.o  Voiture.o Camion.o Garage.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	    $(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	    rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 



