.PHONY: help test clean

help:
	@echo "make targets:"
	@echo " - test: build and test the automatic portable way"
	@echo " - clean"

test:
	jbuilder build @runautomatictest

clean:
	jbuilder clean
