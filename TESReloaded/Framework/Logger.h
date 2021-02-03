#pragma once

class Logger {
public:
	static void CreateLog(const char* FileName);
	static void Log(const char* Message, ...);
	
	static char			MessageBuffer[1024];
	static FILE*		LogFile;

};