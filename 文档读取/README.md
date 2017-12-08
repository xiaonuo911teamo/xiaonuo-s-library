### 函数功能
	集成了一些对文本文件的操作，并且通过类方法实现。
### 函数说明
    1. Kv()
        空构造函数
    2. void Kv::load(const std::string &file)
        按行读取file，生成map数组 data_，将同行的两个被空格分开的字符串，以首个字符串为关键字，获取后面的字符串。如
        201502034216 小诺   --->  则可以通过 a["201502034216"] 获取 "小诺"
    3. void Kv::add(const std::string &key, const std::string &value)
        追加一个map对象
    4. std::string Kv::get(const std::string &key)
        根据关键字 key，读取对象，并返回
    5. void Kv::remove(const std::string &key)
        删除该关键字key的对象
    6. void Kv::clear()
        清空队列