# TUTO BY AANDRIAM
* `git clone git@github.com:aandriamgit/CppSrc.git`
* `cd CppSrc`
* `rm -rf compile_commands.json`
* `ln -s /dir/to/godot_test_gdextension/compile_commands.json compile_commands.json`

# HOW TO USE

## in the .h file
* its better to publicly inherit from a godot class
* add the function `GDCLASS([the class name], [the parent class]);`
* in the protected add `static void _bind_methods();`
```
using namespace	godot;

class Summator : public Object
{
	GDCLASS(Summator, Object);

	int count;

  protected:
	static void _bind_methods();

  public:
	void add(const int &p_value);
	void reset();
	int get_total();

	Summator();
};
```

## in the .cpp file
* add a `void [class]::_bind_methods(){}`
* inside it add `ClassDB::bind_method(D_METHOD("[function member name]", "[its parameter(s)]"), &[a ptr to the methode itself]);` do it for all the function members of the class
```
void Summator::_bind_methods()
{
	ClassDB::bind_method(D_METHOD("add", "value"), &Summator::add);
	ClassDB::bind_method(D_METHOD("reset"), &Summator::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &Summator::get_total);
}
```


## in register_types.cpp
* finaly just add `GDREGISTER_RUNTIME_CLASS([your class name]);` inside initialize_gdextension_types function
```
void	initialize_gdextension_types(ModuleInitializationLevel p_level)
{
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE)
	{
		return ;
	}
	GDREGISTER_CLASS(Summator);
    //or
	GDREGISTER_RUNTIME_CLASS(rtsCamera);
}
```
