#pragma once
#include "Logger.h"
#include "LexTable.h"
#include "IdTable.h"

namespace TTM
{
	class LexicalAnalyzer
	{
	public:
		LexicalAnalyzer(LexTable& lextable, IdTable& idtable);

		void Scan(const std::vector<std::pair<std::string, int>>& sourceCode, Logger& log);
	private:
		LexTable& lextable;
		IdTable& idtable;

		char Tokenize(const std::string& str);
	};
}