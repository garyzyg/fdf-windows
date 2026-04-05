#ifndef CONFIG_H
#define CONFIG_H

#include <dirent.h>

#undef S_IFLNK
#undef CopyFile

#define rmdir _rmdir
#define mkdir _mkdir
#define stat _stat

#define chmod _chmod
#define vsnprintf _vsnprintf

#endif
