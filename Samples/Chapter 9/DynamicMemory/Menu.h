/*  
 * Simple menu interface
 */
#if !defined(MENU_H_INCLUDED)
#define MENU_H_INCLUDED

//The different menu options
enum MenuOption
{
	MO_OpenFile,
	MO_CloseFile,
	MO_Quit,
};

//Displays a menu and waits for a response.
MenuOption DisplayMenu ( );

#endif