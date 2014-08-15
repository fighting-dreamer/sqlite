#/bin/sh
#
# Run this script in a directory with a working makefile to check for 
# compiler warnings in SQLite.
#
rm -f sqlite3.c
make sqlite3.c

# Apple-specific defines used for platform specific feature support
DEFINES="-DSQLITE_OMIT_LOAD_EXTENSION=1 -DSQLITE_ENABLE_LOCKING_STYLE=1 -DSQLITE_ENABLE_AUTO_PROFILE=1 -DUSE_PREAD=1 -DSQLITE_THREADSAFE=2 -DSQLITE_MAX_LENGTH=2147483645 -DSQLITE_MAX_VARIABLE_NUMBER=500000 -DSQLITE_ENABLE_APPLE_SPI=1 -DHAVE_USLEEP=1 -DSQLITE_OMIT_AUTORESET=1 -DSQLITE_ENABLE_PURGEABLE_PCACHE=1 -DSQLITE_DEFAULT_CKPTFULLFSYNC=1 -DSQLITE_DEFAULT_WAL_SAFETYLEVEL=2 -DSQLITE_USE_URI=1 -DSQLITE_WRITE_WALFRAME_PREBUFFERED=1 -DSQLITE_ENABLE_PERSIST_WAL=1 -DUSE_GUARDED_FD=1 -DSQLITE_ENABLE_FLOCKTIMEOUT=1 -DSQLITE_OMIT_BUILTIN_TEST=1 -DSQLITE_DEFAULT_MEMSTATUS=0 -DSQLITE_DEFAULT_PAGE_SIZE=4096 -DSQLITE_DEFAULT_JOURNAL_SIZE_LIMIT=32768 -DSQLITE_DEFAULT_CACHE_SIZE=500 -DSQLITE_ENABLE_RTREE=1 -DSQLITE_ENABLE_FTS3=1 -DSQLITE_ENABLE_FTS3_PARENTHESIS=1"

echo '********** No optimizations.  Includes FTS4 and RTREE *********'
gcc -c -Wshadow -Wall -Wextra -Weverything -Wno-long-long -std=c89 \
      -ansi $DEFINES -DHAVE_STDINT_H -DSQLITE_ENABLE_FTS4 -DSQLITE_ENABLE_RTREE \
      sqlite3.c
echo '********** No optimizations. ENABLE_STAT4. THREADSAFE=0 *******'
gcc -c -Wshadow -Wall -Wextra -Weverything -Wno-long-long -std=c89 \
      -ansi $DEFINES -DSQLITE_ENABLE_STAT4 -DSQLITE_THREADSAFE=0 \
      sqlite3.c
echo '********** Optimized -O3.  Includes FTS4 and RTREE ************'
gcc -O3 -c -Wshadow -Wall -Wextra -Weverything -Wno-long-long -std=c89 \
      -ansi $DEFINES -DHAVE_STDINT_H -DSQLITE_ENABLE_FTS4 -DSQLITE_ENABLE_RTREE \
      sqlite3.c
