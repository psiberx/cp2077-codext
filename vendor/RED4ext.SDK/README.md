# RED4ext.SDK

A library to create mods for REDengine 4 ([Cyberpunk 2077](https://www.cyberpunk.net)).

## What is this library?

RED4ext.SDK is a library that extends REDengine 4. It will allow modders to add new features, modify the game behavior, add new
scripting functions or call existing ones in your own mods.

This library is similar to:

* [Script Hook V](http://dev-c.com/GTAV/scripthookv)
* [Skyrim Script Extender](https://skse.silverlock.org/)

## Usage

### Header only version

Include the [header files](/include) in your project and use a C++20 compiler.

### Static library version

Add the [header files](/include) and the [source files](/src) to your project, define `RED4EXT_STATIC_LIB` and use a C++20 compiler.

## Build instructions

1. Download and install [Visual Studio 2022 Community Edition](https://www.visualstudio.com/) or a newer version.
2. Clone this repository.
3. Download and extract the content of [Premake 5](https://github.com/premake/premake-core/releases) in `premake` directory.
4. Go to the `premake` directory and run `generate_projects.bat`.
5. Open the solution (`RED4ext.SDK.sln`) located in `projects` directory.
6. Build the projects.

## Contributing

Do you want to contribute? Community feedback and contributions are highly appreciated!

**For general rules and guidelines see [CONTRIBUTING.md](/CONTRIBUTING.md).**
