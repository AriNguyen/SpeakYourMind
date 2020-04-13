#  C++ Desktop App - Eye Tracking & Speech Generating (OpenCV)
- This is a project on making a desktop app using C++ 
- Why using C++: 

## Visual Studio 2019 on Windows 10: Setting up

#### Install WxWidgets
Follow instructions in this [video](https://www.youtube.com/watch?v=FOIbK4bJKS8&t=784s) at 10:10
1. Install WxWidgets from [here](https://www.wxwidgets.org/downloads/)
2. Create new systems environment **WXWIN** and set the path to the downloaded folder
3. In Visual Studio:
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
## Eye Tracking
Implement image gradient-based eye center algorithm by Fabian Timm

## Control Mouse Cursor
Use the build-in function SetCursorPos(int x, int y) to move the cursor to the desired positions
Learn more about SetCursorPos function in this [link](https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setcursorpos)
## Speech Generating: Use the Microsoft Speech SDK 5.3
Follow the instruction in this [link](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/ee125082%28v%3dvs.85%29)
Since Microsoft Speech SDK is already included in Visual Studio code, we just need to create a new window console application and create a precompile header file to use the SDK

## Auto Suggestion
Get English language word database from [here](https://github.com/dwyl/english-words). 
- data/word.txt: contains all English words
- data/words_alpha.txt: contains words that have no numbers and symbols
- data/words_dictionary: dictionary of words from words_alpha.text in form ["word": 1]

#### Trie Data Structure for AutoSuggestion 

## Reference
Timm and Barth. Accurate eye centre localisation by means of gradients. In Proceedings of the Int. Conference on Computer Theory and Applications (VISAPP), volume 1, pages 125-130, Algarve, Portugal, 2011. INSTICC

