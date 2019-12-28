/**
 * @file production.c
 * 
 * `production.c` implements a production rule, and 
 * operations on production rules.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 20/12/19.
 */


#include <production.h>


struct Production
{

    /**
     * @var name
     * 
     * `name` is the (hopefully) human readable l-value 
     * which identifies the production rule in the EBNF
     * input.
     */
    char* name;

    /**
     * @var terminal
     * 
     * `terminal` contains the literal value a production
     * rule represents, if and only if this production rule
     * is a terminal symbol.
     * 
     * `terminal` will be null if this production rule is
     * non-terminal.
     */
    char* terminal;

    /**
     * @var alternative 
     * 
     * `alternative` points to a list of production rules
     * which can be substituted for this production rule,
     * if and only if this production rule is a
     * non-terminal symbol.
     * 
     * `alternative` will be null if this production rule
     * is terminal.
     */
    struct Production* alternative;
    
};
