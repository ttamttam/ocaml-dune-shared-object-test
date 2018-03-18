.PHONY: manualtest clean directdll

manualtest:
	jbuilder build @runmanualtest

directtest:
	jbuilder build @runautomatictest

directdll:
	jbuilder build automatic/dll/direct.so

clean:
	jbuilder clean
