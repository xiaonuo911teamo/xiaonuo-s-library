###�ļ���ȡ
	�����˶�ȡһ����Ŀ¼�������ļ��Ĺ��ܣ����ҿɿ�ƽ̨ʹ�ã�windows/OS/UNIX/LINUX ������ʹ�á�

###����˵��
1. static long getTimestamp()
	��ȡϵͳ�ĵ�ǰʱ��,��ʱ�����������ȻҲ����ֱ���� getTickCount()������ע��ͬ����Ҫʹ�����ε�
2. static std::string getFileName(const std::string &path, const bool postfix = false);
	�õ�ָ��·���ļ������֣���ѡ���Ƿ������չ��
3. static std::vector<std::string> splitString(const std::string &str,const char delimiter)
	�ָ��ַ������ɰ��շָ��� delimiter �ָ�·������ȡÿ��Ŀ¼
4. static T min(const T &v1, const T &v2) 
	���ؽ�С����
5. static std::vector<std::string> getFiles(const std::string &folder,const bool all = true) 
	��ø�Ŀ¼�£��ļ��ľ���·����Ĭ��Ϊ�����ļ���·������allΪfalse������ֵ��ֻ��һ��Ŀ¼�µ��ļ�·������������Ŀ¼·��
6. static void print_str_lines(const char** lines)
	���һ���ַ������飬����һ����������C++11��initializer_list<const char*>��{"string1", "string2"}
7. static void print_file_lines(const std::string &file) 
	��������ı��ļ�
8. static unsigned int levenshtein_distance(const T &s1, const T &s2) 
	��������·���Ĳ��ȣ���Levenshtein���룬������ƴд����
9. static bool mkdir(const std::string folder) 
	����һ���ļ���
10. static bool imwrite(const std::string &file, const cv::Mat &image)
	�洢ͼƬ��ѧϰopencvʱ�õģ�������ò���������ɾ��
11. static std::size_t get_last_slash(const std::string &path) 
	����path�����һ�� '\\'��'/' ��λ��, ע:˫б��\ ���ڸ�ʽת�����Ĺ�ϵ���ᱻֻ����һ���ַ�
