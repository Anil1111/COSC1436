#if !defined(STOPWATCH_H_INCLUDED)
#define STOPWATCH_H_INCLUDED

#include <Windows.h>

/// SUMMARY: Provides a simple class for profiling time.
class Stopwatch
{
public:
	/// SUMMARY: Creates an instance of the class.
	Stopwatch ( )
	{
		LARGE_INTEGER liFreq = { 0 };
		QueryPerformanceFrequency(&liFreq);
		m_freq = liFreq.QuadPart / 1000.0;

		m_liStart.QuadPart = 0;
		m_liEnd.QuadPart = 0;
	};
 
	/// SUMMARY: Starts the stopwatch.
	void Start ( )
	{
		m_liEnd.QuadPart = 0;

		QueryPerformanceCounter(&m_liStart);		
	};

	/// SUMMARY: Stops the stopwatch
	void Stop ( )
	{
		QueryPerformanceCounter(&m_liEnd);
	};

	/// SUMMARY: Gets the elapsed time in ticks.
	LONGLONG GetElapsedTicks ( )
	{
		LARGE_INTEGER liEnd;
		if (m_liEnd.QuadPart == 0)
			QueryPerformanceCounter(&liEnd);
		else
			liEnd.QuadPart = m_liEnd.QuadPart;

		return liEnd.QuadPart - m_liStart.QuadPart;
	};

	/// SUMMARY: Gets the elapsed time in milliseconds.
	double GetTotalMilliseconds ( )
	{
		LONGLONG ll = GetElapsedTicks();

		return GetElapsedTicks() / m_freq;
	};

private:
	double m_freq;
	LARGE_INTEGER m_liStart, m_liEnd;
};

#endif