#  C++ Desktop App - Eye Tracking & Speech Generating (OpenCV)
## Overview
- This is a project on making a desktop app using C++ 
- Why using C++: 

## Visual Studio 2019 on Windows 10
- Create Windows Desktop App

## Install WxWidgets
Follow instructions in this [video](https://www.youtube.com/watch?v=FOIbK4bJKS8&t=784s) at 10:10
1. Install WxWidgets from [here](https://www.wxwidgets.org/downloads/)
2. Create new systems environment **WXWIN** and set the path to the downloaded folder
3. In Visual Studio:
    - Add new Class
    - Right click on Project -> Properties: 
        - Set **Configuration** to All "Configurations"
        - In **Configuration Properties**:
            - In **C/C++** -> **Precompiled Headers** -> Set **Precompiled Header** to "Not using Precompiled Headers"
            - In **C/C++** -> **General** -> Set **Additional Include Directories** to "$(WXWIN)\include; $(WXWIN)\include\msvc;"
            - In **Linker** -> **Genral** -> Set **Additonal Library Dictionaries** to "$(WXWIN)\lib\vc_lib"
    
    When building solution, I encountered this error "_w64 can only be specified on int, long and pointer types". This is how I solve them:
    - Go to View -> Other Windows -> Property Manager: A window will display
    - Right click on your project name in Property Manager Window -> Click **Add Existing Property Sheet** 
    - Select path/to/wxwidgets.props from the wxwidgets folder that just be downloaded
    - Build again
## Use the Microsoft Speech SDK 5.3
Follow the instruction in this link (https://docs.microsoft.com/en-us/previous-versions/windows/desktop/ee125082%28v%3dvs.85%29)
Since Microsoft Speech SDK is already included in Visual Studio code, we just need to create a new window console application and create a precompile header file to use the SDK
## Create a new window console application in Visual Studio
	-Click create a new profile
	-search "window console application"
	-select create a blank project 
## Create precompile header file in Visual Studio
	-In the Soucre Files folder -> Add -> New file -> header file -> name it STDAfx.h(optional)
	-paste the source code form this link (https://docs.microsoft.com/en-us/previous-versions/windows/desktop/ee125082%28v%3dvs.85%29) to STDAfx.h
	-Include STDAfx.h file in the main.cpp file
