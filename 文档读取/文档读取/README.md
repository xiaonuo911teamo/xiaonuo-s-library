### ����˵��
    1. Kv()
        �չ��캯��
    2. void Kv::load(const std::string &file)
        ���ж�ȡfile������map���� data_����ͬ�е��������ո�ֿ����ַ��������׸��ַ���Ϊ�ؼ��֣���ȡ������ַ�������
        201502034216 Сŵ   --->  �����ͨ�� a["201502034216"] ��ȡ "Сŵ"
    3. void Kv::add(const std::string &key, const std::string &value)
        ׷��һ��map����
    4. std::string Kv::get(const std::string &key)
        ���ݹؼ��� key����ȡ���󣬲�����
    5. void Kv::remove(const std::string &key)
        ɾ���ùؼ���key�Ķ���
    6. void Kv::clear()
        ��ն���