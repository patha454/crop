/**
 * @file log.c
 * 
 * `log.c` implements an urgency based logging system.
 * 
 * `log.c` implements logging facilities for messages,
 * warnings, and errors. `log.c` can divert log messages to
 * diffrent streams, or suppresed them based on their 
 * severity.
 * 
 * @author H Paterson.
 * @copyright Boost Software License 1.0
 * @date 23/11/19.
 */

#include <assert.h>
#include <stdio.h>
#include "log.h"

struct log_level_tag
{
    const char* const string;
    const enum log_level level;
};

static const struct log_level_tag default_tags[] =
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

struct log_level_stream
{
    FILE** stream;
    const enum log_level level;
};

static const struct log_level_stream default_streams[] =
{
    {NULL,      SILENT},
    {&stderr,   DEBUG},
    {&stderr,   VV_VERBOSE_INFO},
    {&stderr,   V_VERBOSE_INFO},
    {&stderr,   VERBOSE_INFO},
    {&stderr,   INFO},
    {&stderr,   WARNING},
    {&stderr,   ERROR},
    {&stderr,   CRITICAL_ERROR},
    {&stderr,   CATASTROPIC_ERROR}
};

typedef struct log_settings_s
{
    struct log_level_tag* tags;
    struct log_level_stream* streams;
} log_settings;

static const log_settings default_settings =
{
    (struct log_level_tag*) default_tags,
    (struct log_level_stream*) default_streams
};

static const log_settings* get_log_settings()
{
    return &default_settings;
}

static const char* get_level_tag(const unsigned int log_level,
                           const log_settings* const settings)
{
    assert(settings->tags[log_level].level == log_level);
    return settings->tags[log_level].string;
}

static FILE* get_level_stream(const unsigned int log_level,
                                    const log_settings* const settings)
{
    assert(settings->streams[log_level].level == log_level);
    return *(settings->streams[log_level].stream);
}

void _log(enum log_level level,
          const char* const message,
          const char* const file,
          const unsigned int line)
{
    fprintf(get_level_stream(level, get_log_settings()),
            "[ %s ] %s (%s:%d)\n",
            get_level_tag(level, get_log_settings()),
            message,
            file,
            line);
}

int main(void)
{
    log(DEBUG, "This is a test");
    return 0;
}
