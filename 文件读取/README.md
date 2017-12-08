###文件读取
	集成了读取一个根目录下所有文件的功能，并且可跨平台使用，windows/OS/UNIX/LINUX 都可以使用。

###函数说明
1. static long getTimestamp()
	获取系统的当前时间,是时间戳函数，当然也可以直接用 getTickCount()函数，注：同样需要使用两次的
2. static std::string getFileName(const std::string &path, const bool postfix = false);
	得到指定路径文件的名字，可选择是否包含扩展名
3. static std::vector<std::string> splitString(const std::string &str,const char delimiter)
	分隔字符串，可按照分隔符 delimiter 分隔路径，获取每段目录
4. static T min(const T &v1, const T &v2) 
	返回较小的数
5. static std::vector<std::string> getFiles(const std::string &folder,const bool all = true) 
	获得该目录下，文件的具体路径，默认为所有文件的路径。若all为false，返回值中只有一层目录下的文件路径，不包含子目录路径
6. static void print_str_lines(const char** lines)
	输出一个字符串数组，并有一个重载用于C++11的initializer_list<const char*>，{"string1", "string2"}
7. static void print_file_lines(const std::string &file) 
	按行输出文本文件
8. static unsigned int levenshtein_distance(const T &s1, const T &s2) 
	计算两个路径的差别度，即Levenshtein距离，可用于拼写纠错
9. static bool mkdir(const std::string folder) 
	建立一个文件夹
10. static bool imwrite(const std::string &file, const cv::Mat &image)
	存储图片，学习opencv时用的，如果您用不到，可以删除
11. static std::size_t get_last_slash(const std::string &path) 
	返回path中最后一个 '\\'或'/' 的位置, 注:双斜杠\ 由于格式转换符的关系，会被只记作一个字符
