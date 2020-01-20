#ifndef DEBUG_INFO_H
#define DEBUG_INFO_H

#include <cstdio>
#include <cstring>
#define NAME_LOG "debug.txt"

static bool isOpened = false;

static void clear_log()
{
  std::remove(NAME_LOG);
}

static void debug_to_file()
{
  if (!isOpened) {
    freopen(NAME_LOG, "w", stderr);
    isOpened = true;
  }
}

static void close_descriptor()
{
  fclose(stderr); 
}

#define DEBUG_TO_FILE_FORMAT(fmt, ...) debug_to_file(); fprintf(stderr, "[%s] ", __FUNCTION__); fprintf(stderr, fmt, ##__VA_ARGS__); close_descriptor();
#define DEBUG_TO_FILE(fmt, ...) debug_to_file(); fprintf(stderr, "[%s] %s", __FUNCTION__, fmt, ##__VA_ARGS__); close_descriptor();

#endif // DEBUG_INFO_H
