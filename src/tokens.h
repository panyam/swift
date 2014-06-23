

#ifndef __SWIFT_TOKENS_H__
#define __SWIFT_TOKENS_H__

#include "swift_fwds.h"

enum class SwiftTokenCode
{
    // Literals
    TOKEN_IDENTIFER,
    TOKEN_BOOLEAN,
    TOKEN_NUMBER,     // includes, ints, longs, bigints, floats, doubles, bigdoubles
    TOKEN_STRING,
    TOKEN_ERROR,

    // Keywords in declarations
    TOKEN_CLASS,
    TOKEN_DEINIT,
    TOKEN_ENUM,
    TOKEN_EXTENSION,
    TOKEN_FUNC,
    TOKEN_IMPORT,
    TOKEN_INIT,
    TOKEN_LET,
    TOKEN_PROTOCOL,
    TOKEN_STATIC,
    TOKEN_STRUCT,
    TOKEN_SUBSCRIPT,
    TOKEN_TYPEALIAS,
    TOKEN_VAR,

    // Keywords in Statements
    TOKEN_BREAK,
    TOKEN_CASE
    TOKEN_CONTINUE,
    TOKEN_DEFAULT,
    TOKEN_DO,
    TOKEN_ELSE,
    TOKEN_FALLTHROUGH,
    TOKEN_IF,
    TOKEN_IN,
    TOKEN_FOR,
    TOKEN_RETURN,
    TOKEN_SWITCH,
    TOKEN_WHERE,
    TOKEN_WHILE,

    // Keywords in expressions and types
    TOKEN_AS,
    TOKEN_DYNAMICTYPE,
    TOKEN_IS,
    TOKEN_NEW,
    TOKEN_SUPER,
    TOKEN_SELF,    // "self"
    TOKEN_CSELF,    // "Self"
    TOKEN_TYPE,
    TOKEN___COLUMN__,
    TOKEN___FILE__,
    TOKEN___FUNCTION__,
    TOKEN___LINE__,

    // Keywords in special contexts - valid as identifiers outisde the contexts in which they appear:
    TOKEN_ASSOCIATIVITY,
    TOKEN_DIDSET,
    TOKEN_GET,
    TOKEN_INFIX,
    TOKEN_INOUT,
    TOKEN_LEFT,
    TOKEN_MUTATING,
    TOKEN_NONE,
    TOKEN_NONMUTATING,
    TOKEN_OPERATOR,
    TOKEN_OVERRIDE,
    TOKEN_POSTFIX,
    TOKEN_PRECEDENCE,
    TOKEN_PREFIX,
    TOKEN_RIGHT,
    TOKEN_SET,
    TOKEN_UNOWNED,
    TOKEN_UNOWNED_SAFE,     // unowned(safe)
    TOKEN_UNOWNED(UNSAFE),  // unowned(unsafe)
    TOKEN_WEAK,
    TOKEN_WILLSET,

    TOKEN_COMA,
    TOKEN_DOT,
    TOKEN_COLON,
    TOKEN_QMARK,
    TOKEN_OSQUARE,      // "["
    TOKEN_CSQUARE,      // "]"
    TOKEN_OBRACE,       // "{"
    TOKEN_CBRACE,       // "}"
    TOKEN_OPAREN,       // "("
    TOKEN_CPAREN,       // ")"
    TOKEN_OANGLE,       // "<"
    TOKEN_CANGLE,       // ">"

    // Operators
    TOKEN_PLUS,         // "+"
    TOKEN_MINUS,        // "-"
    TOKEN_MULT,         // "*"
    TOKEN_DIV,          // "/"
    TOKEN_MOD,          // "%"

    // Unary ops
    TOKEN_PLUSPLUS,     // "++"
    TOKEN_MINUSMINUS,   // "++"

    TOKEN_EQUALS,       // "="
    TOKEN_PLUSEQUALS,   // "+="
    TOKEN_MINUSEQUALS,  // "-="
    TOKEN_MULTEQUALS,   // "*="
    TOKEN_DIVEQUALS,    // "/="

    // Comparison ops
    TOKEN_EQ,           // "=="
    TOKEN_NE,           // "!="
    TOKEN_GE,           // ">="
    TOKEN_GT,           // ">"
    TOKEN_LE,           // "<="
    TOKEN_LT,           // "<"

    // Logical ops
    TOKEN_NOT,          // "!"
    TOKEN_OR,           // "||"
    TOKEN_AND,          // "&&"

    // Range ops
    TOKEN_HALFRANGE,     // ".."
    TOKEN_FULLRANGE,    // "..."
};

class SwiftTokenValue { };

class SwiftToken
{
public:
    SwiftToken(SwiftTokenCode code);
    virtual ~SwiftToken(SwiftTokenCode code);
    virtual int code();
    virtual int value();

public:
    SwiftTokenCode tokenCode;
};

class SwiftNumber : SwiftTokenValue
{
public:
    SwiftNumberType
};

class SwiftString : SwiftTokenValue
{
public:
};

class SwiftIdentifier : SwiftTokenValue
{
public:
};

#endif 

