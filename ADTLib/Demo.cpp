#include "stdafx.h"
#include "Demo.h"

namespace Demo {

	template <typename T>
	T Func<T>::Add(T x, T y)
	{
		return x + y;
	}

	template <typename T>
	T Func<T>::Multiply(T x, T y)
	{
		return x * y;
	}
}