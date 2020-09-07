<p align="center">
  <img width=400" src="https://github.com/Pikachuxxxx/Lumos/blob/master/Resources/MacOSIcons/Images.xcassets/AppIcon.appiconset/icon_512%401x.png">
</p>
<h1 align="center" style="border-bottom: none;">
  <a href="https://github.com/jmorton06/Lumos/">Lumos Engine</a>
</h1>
<h3 align="center">Cross-platform 2D and 3D Game Engine written in C++ that supports both OpenGL and Vulkan.</h3>
<p align="center">
  <a href="#building-🔨">Building</a> |
  <a href="#screenshots">Screenshots</a> |
  <a href="#features">Features</a> |
  <a href="#dependencies">Dependencies</a>
<br/>
<br/>
<a href="https://actions-badge.atrox.dev/jmorton06/Lumos/goto"><img alt="Build" src="https://img.shields.io/endpoint.svg?url=https%3A%2F%2Factions-badge.atrox.dev%2Fjmorton06%2FLumos%2Fbadge&style=flat-square&label=build&branch=master&event=push"/></a>
<a href=""><img alt="platforms" src="https://img.shields.io/badge/Platforms-Windows%20%7C%20Linux%20%7C%20macOS%20%7C%20iOS-blue?style=flat-square"/></a>
<a href="https://github.com/jmorton06/Lumos/blob/master/LICENSE"><img alt="license" src="https://img.shields.io/github/license/jmorton06/Lumos?style=flat-square"/></a>
<br/>
<a href="https://github.com/jmorton06/Lumos/issues"><img alt="Issues" src="https://img.shields.io/github/issues-raw/jmorton06/Lumos.svg?style=flat-square"/></a>
<a href=""><img alt="size" src="https://img.shields.io/github/repo-size/jmorton06/Lumos?style=flat-square"/></a>
<a href=""><img alt="stars" src="https://img.shields.io/github/stars/jmorton06/Lumos?style=social"/></a>
<br/>
</p>

#
## Building 🔨

```
git clone https://github.com/jmorton06/Lumos.git
```

#### Linux
```
sudo apt-get install -y g++-8 libxrandr-dev libxinerama-dev libxcursor-dev libxi-dev libopenal-dev mesa-common-dev
cd Lumos
Tools/premake5 gmake2
cd build
make -j8
```
#### Windows 
Run Scripts/GenerateVS.bat to generate a visual studio project.
```
cd Lumos
msbuild /p:Platform=x64 /p:Configuration=Release build/Lumos.sln
```
#### Mac
```
cd Lumos
Tools/premake5 xcode4
xcodebuild -project build/Sandbox.xcodeproj CODE_SIGN_IDENTITY="" CODE_SIGNING_REQUIRED=NO CODE_SIGNING_ALLOWED=NO
```

#### iOS
```
cd Lumos
Tools/premake5 xcode4 --os=ios
xcodebuild -project build/Sandbox.xcodeproj CODE_SIGN_IDENTITY="" CODE_SIGNING_REQUIRED=NO CODE_SIGNING_ALLOWED=NO
```
#

## Screenshots
![Lumos](/Resources/Screenshot-1610.png?raw=true)
#
## Features

* Support for Windows, Linux, macOS.
* Support for OpenGL/Vulkan.
* 3D audio using OpenAL-Soft.
* Rendering 3D models with deferred PBR shading.
* Debug gui using ImGui
* Custom maths library with simd optimisation.
* 3D collision detection - cuboid/sphere/pyramid.
* 2D collision detection - Box2D.
* Basic lua scripting support - bindings in progress.
#
## Contributing

* Contributions are welcome. Both new features and bug fixes. Just open a pull request.
#
## Dependencies
 * [imgui](https://github.com/ocornut/imgui) : Dear ImGui: Bloat-free Immediate Mode Graphical User interface for C++ with minimal dependencies.
 * [imguizmo](https://github.com/CedricGuillemet/ImGuizmo) : Immediate mode 3D gizmo for scene editing and other controls based on Dear Imgui.
 * [entt](https://github.com/skypjack/entt) : Fast and reliable entity-component system (ECS) 
 * [glfw](https://github.com/glfw/glfw) : A multi-platform library for OpenGL, OpenGL ES, Vulkan, window and input.
 * [spdlog](https://github.com/gabime/spdlog) : Fast C++ logging library.
 * [stb](https://github.com/nothings/stb) : Single-file public domain (or MIT licensed) libraries for C/C++.
 * [tinygltf](https://github.com/syoyo/tinygltf) : Header only C++11 tiny glTF 2.0 library
 * [tinyobjloader](https://github.com/syoyo/tinyobjloader) : Tiny but powerful single file wavefront obj loader
 * [volk](https://github.com/zeux/volk) : Meta loader for Vulkan API.
 * [glad](https://github.com/Dav1dde/glad) : Meta loader for OpenGL API.
 * [Box2D](https://github.com/erincatto/Box2D) : 2D physics engine.
 * [catch](https://github.com/catchorg/Catch2) : A testing framework.
 * [sol2](https://github.com/ThePhD/sol2) : C++ <-> Lua API wrapper
 * [IconFontCppHeaders](https://github.com/juliettef/IconFontCppHeaders) : C, C++ headers and C# classes for icon fonts
 * [cereal](https://github.com/USCiLab/cereal) : A C++11 library for serialization
