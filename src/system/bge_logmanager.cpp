#include <bge_logmanager.h>
#include <iostream>

namespace Bubbles {
	LogManager& g_LogManager = LogManager::instance();

	void LogManager::VStartup() {
		std::cout << "LogManager starting up..." << std::endl;
	}

	void LogManager::VShutdown() {
		std::cout << "LogManager shutting down..." << std::endl;
	}
}