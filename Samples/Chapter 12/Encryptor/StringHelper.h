/*
 * COSC 1436
 *
 * Provides some standard string routines.
 */
#if !defined(STRINGHELPER_H_INCLUDED)
#define STRINGHELPER_H_INCLUDED

//SUMMARY: Determines if a string ends with a specific substring
//INPUT:
//   value - The string to check.
//   pattern - The pattern to look for.
//   ignoreCase - true to ignore the case.
//RETURNS: true if the string ends with the given pattern.
bool EndsWith ( char const* value, char const* pattern, bool ignoreCase = false )
{
	//A NULL pattern or value always fails
	if ((value == nullptr) || (pattern == nullptr))
		return false;

	//The value must be at least as large as the pattern
	int lenValue = strlen(value);
	int lenPattern = strlen(pattern);
	if (lenValue < lenPattern)
		return false;

	char const* pos = value + (lenValue - lenPattern);
	int index = 0;
	while (*pos != '\0')
	{
		char leftCh = ignoreCase ? tolower(*pos) : *pos;
		char rightCh = ignoreCase ? tolower(pattern[index]) : pattern[index];

		if (leftCh != rightCh)
			return false;

		++index;
	};

	return true;
};

//SUMMARY: Determines if a string begins with a specific substring
//INPUT:
//   value - The string to check.
//   pattern - The pattern to look for.
//   ignoreCase - true to ignore the case.
//RETURNS: true if the string starts with the given pattern.
bool StartsWith ( char const* value, char const* pattern, bool ignoreCase = false )
{
	//A NULL pattern or value always fails
	if ((value == nullptr) || (pattern == nullptr))
		return false;

	//The value must be at least as large as the pattern
	int lenPattern = strlen(pattern);
	if ((int)strlen(value) < lenPattern)
		return false;

	for (int index = 0; index < lenPattern; ++index)
	{
		char leftCh = ignoreCase ? tolower(value[index]) : value[index];
		char rightCh = ignoreCase ? tolower(pattern[index]) : pattern[index];

		if (leftCh != rightCh)
			return false;
	};

	return true;
};
#endif