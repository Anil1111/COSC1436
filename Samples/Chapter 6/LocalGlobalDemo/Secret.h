#pragma once

#include <stdio.h>
#include <stdarg.h>
#include <varargs.h>

class IndentPrint
{
public:
    // Summary: Decrements the indentation.
    static void Decrement ( )
    {
        --g_indentLevel;
    };

    // Summary: Increments the indentation.
    static void Increment ( )
    {
        ++g_indentLevel;
    };

    // Summary: Prints a message.
    // Parameters:
    //    message - [In] The message to print.
    static void Print ( char* message, ... )
    {
        va_list args;
        va_start(args, message);

        for (int index = 0; index < g_indentLevel; ++index)
            printf("\t");
        vprintf(message, args);
    };

private:
    static int g_indentLevel;
};

class Scope
{
public:
    // Summary: Creates a new scope.
    Scope ( char* name )
    {
        strcpy(m_name, name);
        
        IndentPrint::Print("Entering %s\n", m_name);
        IndentPrint::Increment();
    };

    // Summary: Cleans up the scope.
    ~Scope ( )
    {
        IndentPrint::Decrement();
        IndentPrint::Print("Exiting %s\n", m_name);
    };

private:			
    char m_name[100];
};

class VerboseInt
{
public:
    VerboseInt ( )
    {
        m_id = g_uniqueId++;

        IndentPrint::Print("[%d] Defined value %d\n", m_id, m_value);
    };

    VerboseInt ( int value )
    {
        m_id = g_uniqueId++;
        m_value = value;

        IndentPrint::Print("[%d] Defined value %d\n", m_id, m_value);
    };
        
    ~VerboseInt ( )
    {
        IndentPrint::Print("[%d] Undefined value %d\n", m_id, m_value);
    };
    
    VerboseInt& operator= ( int value )
    {
        m_value = value;

        return *this;
    };

    operator int ()
    { return m_value; };

private:
    static int g_uniqueId;

    int m_value;
    int m_id;
};