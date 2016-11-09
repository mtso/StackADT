#ifdef ADTLIB_EXPORTS
#define ADTLIB_API __declspec(dllexport) 
#else
#define ADTLIB_API __declspec(dllimport) 
#endif

namespace Demo {

	template <typename T>
	class Func {
	public:

		ADTLIB_API T Add(T x, T y);
		ADTLIB_API T Multiply(T x, T y);
	};
}