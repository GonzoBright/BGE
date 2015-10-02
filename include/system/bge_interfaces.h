#ifndef BGE_INTERFACES_H
#define BGE_INTERFACES_H

#include <bge_platform.h>

namespace Bubbles {
	class BGE_API INonCopyable {
	protected:
		INonCopyable() {
			
		}

		~INonCopyable() {
			
		}

	private:
		INonCopyable(const INonCopyable& other);
		const INonCopyable& operator = (const INonCopyable& other);
	};

	class BGE_API IManager {
	public:
		virtual void VStartup() = 0;
		virtual void VShutdown() = 0;
	};
}

#endif