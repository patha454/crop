/**
 * @file default_level_tags.c
 * 
 * `default_level_tags.c` implements a set of default tags.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0.
 * @date 23/11/19.
 */


#include "scaffold/log/level_tags.h"


/**
 * @var default_tags
 * 
 * `default_tags` is the default tag set used by the logger.
 */
const level_tag_set default_tags =
{
    {"SILENT",      SILENT},
    {"DEBUG",       DEBUG},
    {"VVVINFO",     VV_VERBOSE_INFO},
    {"VVINFO",      V_VERBOSE_INFO},
    {"VINFO",       VERBOSE_INFO},
    {"INFO",        INFO},
    {"WARN",        WARNING},
    {"ERROR",       ERROR},
    {"CRITICAL",    CRITICAL_ERROR},
    {"CATASTROPIC", CATASTROPIC_ERROR}
};
