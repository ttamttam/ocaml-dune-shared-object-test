.PHONY: manualtest clean directdll

manualtest:
	jbuilder build @runmanualtest

directdll:
	jbuilder build automatic/dll/direct.so

clean:
	jbuilder clean
