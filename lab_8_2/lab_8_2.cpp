// lab_8_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

size_t CountAInLastWord(const string s, string& lastWord)
{
	size_t lastSpace = s.find_last_not_of(" "); // останній символ, що не є пробілом
	size_t wordStart = s.find_last_of(" ", lastSpace); //пробіл і початко останнього слова
	lastWord = s.substr(wordStart + 1, lastSpace - wordStart); //слово

	int countA = 0;
	for (int i = 0; i < lastWord.length(); i++) // довжина
	{
		if (lastWord[i] == 'a')
			countA++;
	}
	return countA;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	string lastWord;

	cout << "Number of 'a' letters in the last word: " << CountAInLastWord(str, lastWord) << " in the last word: " << lastWord << endl;

	return 0;
}
