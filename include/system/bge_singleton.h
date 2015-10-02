#ifndef BGE_SINGLETON_H
#define BGE_SINGLETON_H

#include <bge_platform.h>
#include <bge_interfaces.h>

namespace Bubbles {
	template <typename T>
	class Singleton : INonCopyable {
	public:
		static T& instance() {
			static T _instance;

			return _instance;
		}
	protected:
		explicit Singleton<T>() { }
	};
}

#endif