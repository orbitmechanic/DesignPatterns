# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\4_AcrylicVisitor.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\4_AcrylicVisitor.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\4_AcrylicVisitor.dir\flags.make

CMakeFiles\4_AcrylicVisitor.dir\main.cpp.obj: CMakeFiles\4_AcrylicVisitor.dir\flags.make
CMakeFiles\4_AcrylicVisitor.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4_AcrylicVisitor.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx64\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\4_AcrylicVisitor.dir\main.cpp.obj /FdCMakeFiles\4_AcrylicVisitor.dir\ /FS -c C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor\main.cpp
<<

CMakeFiles\4_AcrylicVisitor.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4_AcrylicVisitor.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx64\x86\cl.exe > CMakeFiles\4_AcrylicVisitor.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor\main.cpp
<<

CMakeFiles\4_AcrylicVisitor.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4_AcrylicVisitor.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx64\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\4_AcrylicVisitor.dir\main.cpp.s /c C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor\main.cpp
<<

# Object files for target 4_AcrylicVisitor
4_AcrylicVisitor_OBJECTS = \
"CMakeFiles\4_AcrylicVisitor.dir\main.cpp.obj"

# External object files for target 4_AcrylicVisitor
4_AcrylicVisitor_EXTERNAL_OBJECTS =

4_AcrylicVisitor.exe: CMakeFiles\4_AcrylicVisitor.dir\main.cpp.obj
4_AcrylicVisitor.exe: CMakeFiles\4_AcrylicVisitor.dir\build.make
4_AcrylicVisitor.exe: CMakeFiles\4_AcrylicVisitor.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4_AcrylicVisitor.exe"
	"C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\4_AcrylicVisitor.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x64\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx64\x86\link.exe /nologo @CMakeFiles\4_AcrylicVisitor.dir\objects1.rsp @<<
 /out:4_AcrylicVisitor.exe /implib:4_AcrylicVisitor.lib /pdb:C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor\cmake-build-debug\4_AcrylicVisitor.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\4_AcrylicVisitor.dir\build: 4_AcrylicVisitor.exe

.PHONY : CMakeFiles\4_AcrylicVisitor.dir\build

CMakeFiles\4_AcrylicVisitor.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\4_AcrylicVisitor.dir\cmake_clean.cmake
.PHONY : CMakeFiles\4_AcrylicVisitor.dir\clean

CMakeFiles\4_AcrylicVisitor.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor\cmake-build-debug C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor\cmake-build-debug C:\Users\orbit\Documents\code\DesignPatterns\cpp\behavioral\11_Visitor\4_AcrylicVisitor\cmake-build-debug\CMakeFiles\4_AcrylicVisitor.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\4_AcrylicVisitor.dir\depend

