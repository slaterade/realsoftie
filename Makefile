SRC=$(wildcard src/*.c)
OUTDIR=bin

all: $(OUTDIR)/realsoftie modules

$(OUTDIR)/realsoftie: $(SRC)
	gcc -o $@ $^

modules:
	$(MAKE) -C src/modules/debug
	$(MAKE) -C src/modules/time

.PHONY: clean

clean:
	rm -f $(OUTDIR)/*.so $(OUTDIR)/realsoftie
