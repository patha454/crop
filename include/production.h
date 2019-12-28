/**
 * @file production.h
 * 
 * `production.h` provides a production data type and
 * functions which operate on productions.
 * 
 * A "production" or "production rule" is a rule with
 * describes how one grammar token can be substituted by
 * other grammar tokens.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 20/12/19.
 */


/**
 * @typedef Production
 * 
 * 'Production' provides a handel to a production rule.
 * 
 * Production rules should only be accessed or manipulated
 * by the functions which act on `typedef Production` and 
 * not the underlying `struct Production` to ensure the 
 * production graph remains consistant.
 */ 
typedef struct Production* Production;


char* get_production_name(const Production production);

int is_production_terminal(const Production production);


