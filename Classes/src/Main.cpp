#include <iostream>

class Player {
public:
	int x, y;
	int speed;

	void Move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}
};

class Log {
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo;
public:
	void SetLevel(int level) {
		m_LogLevel = level;
	}
	
	void Error(const char* message) {
		if (m_LogLevel >= LogLevelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}

	void Warn(const char* message) {
		if (m_LogLevel >= LogLevelWarning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}

	void Info(const char* message) {
		if (m_LogLevel >= LogLevelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}
};

int main() {
	//Player player;
	//player.Move(1, -1);
	Log log;

	log.SetLevel(log.LogLevelWarning);
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");
	return 0;
}