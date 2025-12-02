.PHONY: all re

all:
	cd /home/aandriam/Godot/godot_test_gdextension && scons compiledb=yes

re:
	clear && cd /home/aandriam/Godot/godot_test_gdextension && scons compiledb=yes
