all: dev

dev:
	$(call RUN, g++ -o out main.cpp)

o:
	$(call RUN, ./out)
define RUN
	@printf "\033[34m%s\033[m " "==>"
	$1
endef
