#include"kv.h"
#include<iostream>
int main(void)
{
	Kv t;
	t.load("doc/student");
	std::cout << t.get("123") << std::endl;
	std::cout << t.get("124") << std::endl;
	std::cout << t.get("125") << std::endl;
	std::cout << t.get("126") << std::endl;
	while (1);
	return 0;
}