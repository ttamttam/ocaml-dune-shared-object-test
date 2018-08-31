.PHONY: help test clean

help:
	@echo "make targets:"
	@echo " - test: build and test"
	@echo " - clean"

test:
	dune build @runautomatictest

clean:
	dune clean
