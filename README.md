#  C++ Desktop App - Eye Tracking & Speech Generating (OpenCV)
## Overview


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