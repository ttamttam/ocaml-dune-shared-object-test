.PHONY: manualtest clean

manualtest:
	jbuilder build @runmanualtest

clean:
	jbuilder clean
