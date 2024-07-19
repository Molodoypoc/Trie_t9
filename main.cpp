#include<iostream>
#include"Trie.h"

int main() {
	std::cout << "Программа для дополнения слов, используйте только английскую раскладку" << std::endl;
	std::cout << "Напишите 'quit' чтобы выйти" << std::endl;
	TrieNode* root = getNewNode();
	insert(root, "a");
	insert(root, "ab");
	insert(root, "ac");
	insert(root, "abcd");
	insert(root, "abd");
	insert(root, "acbd");
	insert(root, "abdc");
	bool a = true;
	while (a) {
		std::cout << "Напишите текст: " << std::endl;

		std::string str;
		std::cin >> str;
		if (str == "quit")
		{
			a = false;
			continue;
		}
		std::cout << "Вариации слов:" << std::endl;
		Auto(root, str, "");
	}

	delete root;
	return 0;
}