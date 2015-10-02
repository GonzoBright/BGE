#ifndef BGE_LOGMANAGER_H
#define BGE_LOGMANAGER_H

#include <bge_platform.h>
#include <bge_singleton.h>

namespace Bubbles {
	class BGE_API LogManager : public Singleton<LogManager>, IManager {
		friend class Singleton<LogManager>;

	public:
		void VStartup()  override;
		void VShutdown() override;
	};

	extern BGE_API LogManager& g_LogManager;
}

#endif