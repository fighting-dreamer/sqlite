/*
** 2010 February 23
**
** The author disclaims copyright to this source code.  In place of
** a legal notice, here is a blessing:
**
**    May you do good and not evil.
**    May you find forgiveness for yourself and forgive others.
**    May you share freely, never taking more than you give.
**
*************************************************************************
**
** This file implements routines used to report what compile-time options
** SQLite was built with.
*/

#ifndef SQLITE_OMIT_COMPILEOPTION_DIAGS /* IMP: R-16824-07538 */

/*
** Include the configuration header output by 'configure' if we're using the
** autoconf-based build
*/
#if defined(_HAVE_SQLITE_CONFIG_H) && !defined(SQLITECONFIG_H)
#include "config.h"
#define SQLITECONFIG_H 1
#endif

/* These macros are provided to "stringify" the value of the define
** for those options in which the value is meaningful. */
#define CTIMEOPT_VAL_(opt) #opt
#define CTIMEOPT_VAL(opt) CTIMEOPT_VAL_(opt)

/* Like CTIMEOPT_VAL, but especially for SQLITE_DEFAULT_LOOKASIDE. This
** option requires a separate macro because legal values contain a single
** comma. e.g. (-DSQLITE_DEFAULT_LOOKASIDE="100,100") */
#define CTIMEOPT_VAL2_(opt1,opt2) #opt1 "," #opt2
#define CTIMEOPT_VAL2(opt) CTIMEOPT_VAL2_(opt)

/*
** An array of names of all compile-time options.  This array should 
** be sorted A-Z.
**
** This array looks large, but in a typical installation actually uses
** only a handful of compile-time options, so most times this array is usually
** rather short and uses little memory space.
*/
static const char * const sqlite3azCompileOpt[] = {

/* 
** BEGIN CODE GENERATED BY tool/mkctime.tcl 
*/
#if SQLITE_32BIT_ROWID
  "32BIT_ROWID",
#endif
#if SQLITE_4_BYTE_ALIGNED_MALLOC
  "4_BYTE_ALIGNED_MALLOC",
#endif
#if SQLITE_64BIT_STATS
  "64BIT_STATS",
#endif
#if SQLITE_ALLOW_COVERING_INDEX_SCAN
  "ALLOW_COVERING_INDEX_SCAN",
#endif
#if SQLITE_ALLOW_URI_AUTHORITY
  "ALLOW_URI_AUTHORITY",
#endif
#ifdef SQLITE_BITMASK_TYPE
  "BITMASK_TYPE=" CTIMEOPT_VAL(SQLITE_BITMASK_TYPE),
#endif
#if SQLITE_BUG_COMPATIBLE_20160819
  "BUG_COMPATIBLE_20160819",
#endif
#if SQLITE_CASE_SENSITIVE_LIKE
  "CASE_SENSITIVE_LIKE",
#endif
#if SQLITE_CHECK_PAGES
  "CHECK_PAGES",
#endif
#if defined(__clang__) && defined(__clang_major__)
  "COMPILER=clang-" CTIMEOPT_VAL(__clang_major__) "."
                    CTIMEOPT_VAL(__clang_minor__) "."
                    CTIMEOPT_VAL(__clang_patchlevel__),
#elif defined(_MSC_VER)
  "COMPILER=msvc-" CTIMEOPT_VAL(_MSC_VER),
#elif defined(__GNUC__) && defined(__VERSION__)
  "COMPILER=gcc-" __VERSION__,
#endif
#if SQLITE_COVERAGE_TEST
  "COVERAGE_TEST",
#endif
#if SQLITE_DEBUG
  "DEBUG",
#endif
#if SQLITE_DEFAULT_AUTOMATIC_INDEX
  "DEFAULT_AUTOMATIC_INDEX",
#endif
#if SQLITE_DEFAULT_AUTOVACUUM
  "DEFAULT_AUTOVACUUM",
#endif
#ifdef SQLITE_DEFAULT_CACHE_SIZE
  "DEFAULT_CACHE_SIZE=" CTIMEOPT_VAL(SQLITE_DEFAULT_CACHE_SIZE),
#endif
#if SQLITE_DEFAULT_CKPTFULLFSYNC
  "DEFAULT_CKPTFULLFSYNC",
#endif
#ifdef SQLITE_DEFAULT_FILE_FORMAT
  "DEFAULT_FILE_FORMAT=" CTIMEOPT_VAL(SQLITE_DEFAULT_FILE_FORMAT),
#endif
#ifdef SQLITE_DEFAULT_FILE_PERMISSIONS
  "DEFAULT_FILE_PERMISSIONS=" CTIMEOPT_VAL(SQLITE_DEFAULT_FILE_PERMISSIONS),
#endif
#if SQLITE_DEFAULT_FOREIGN_KEYS
  "DEFAULT_FOREIGN_KEYS",
#endif
#ifdef SQLITE_DEFAULT_JOURNAL_SIZE_LIMIT
  "DEFAULT_JOURNAL_SIZE_LIMIT=" CTIMEOPT_VAL(SQLITE_DEFAULT_JOURNAL_SIZE_LIMIT),
#endif
#ifdef SQLITE_DEFAULT_LOCKING_MODE
  "DEFAULT_LOCKING_MODE=" CTIMEOPT_VAL(SQLITE_DEFAULT_LOCKING_MODE),
#endif
#ifdef SQLITE_DEFAULT_LOOKASIDE
  "DEFAULT_LOOKASIDE=" CTIMEOPT_VAL2(SQLITE_DEFAULT_LOOKASIDE),
#endif
#if SQLITE_DEFAULT_MEMSTATUS
  "DEFAULT_MEMSTATUS",
#endif
#ifdef SQLITE_DEFAULT_MMAP_SIZE
  "DEFAULT_MMAP_SIZE=" CTIMEOPT_VAL(SQLITE_DEFAULT_MMAP_SIZE),
#endif
#ifdef SQLITE_DEFAULT_PAGE_SIZE
  "DEFAULT_PAGE_SIZE=" CTIMEOPT_VAL(SQLITE_DEFAULT_PAGE_SIZE),
#endif
#ifdef SQLITE_DEFAULT_PCACHE_INITSZ
  "DEFAULT_PCACHE_INITSZ=" CTIMEOPT_VAL(SQLITE_DEFAULT_PCACHE_INITSZ),
#endif
#ifdef SQLITE_DEFAULT_PROXYDIR_PERMISSIONS
  "DEFAULT_PROXYDIR_PERMISSIONS=" CTIMEOPT_VAL(SQLITE_DEFAULT_PROXYDIR_PERMISSIONS),
#endif
#if SQLITE_DEFAULT_RECURSIVE_TRIGGERS
  "DEFAULT_RECURSIVE_TRIGGERS",
#endif
#ifdef SQLITE_DEFAULT_ROWEST
  "DEFAULT_ROWEST=" CTIMEOPT_VAL(SQLITE_DEFAULT_ROWEST),
#endif
#ifdef SQLITE_DEFAULT_SECTOR_SIZE
  "DEFAULT_SECTOR_SIZE=" CTIMEOPT_VAL(SQLITE_DEFAULT_SECTOR_SIZE),
#endif
#ifdef SQLITE_DEFAULT_SYNCHRONOUS
  "DEFAULT_SYNCHRONOUS=" CTIMEOPT_VAL(SQLITE_DEFAULT_SYNCHRONOUS),
#endif
#ifdef SQLITE_DEFAULT_WAL_AUTOCHECKPOINT
  "DEFAULT_WAL_AUTOCHECKPOINT=" CTIMEOPT_VAL(SQLITE_DEFAULT_WAL_AUTOCHECKPOINT),
#endif
#ifdef SQLITE_DEFAULT_WAL_SYNCHRONOUS
  "DEFAULT_WAL_SYNCHRONOUS=" CTIMEOPT_VAL(SQLITE_DEFAULT_WAL_SYNCHRONOUS),
#endif
#ifdef SQLITE_DEFAULT_WORKER_THREADS
  "DEFAULT_WORKER_THREADS=" CTIMEOPT_VAL(SQLITE_DEFAULT_WORKER_THREADS),
#endif
#if SQLITE_DIRECT_OVERFLOW_READ
  "DIRECT_OVERFLOW_READ",
#endif
#if SQLITE_DISABLE_DIRSYNC
  "DISABLE_DIRSYNC",
#endif
#if SQLITE_DISABLE_FTS3_UNICODE
  "DISABLE_FTS3_UNICODE",
#endif
#if SQLITE_DISABLE_FTS4_DEFERRED
  "DISABLE_FTS4_DEFERRED",
#endif
#if SQLITE_DISABLE_INTRINSIC
  "DISABLE_INTRINSIC",
#endif
#if SQLITE_DISABLE_LFS
  "DISABLE_LFS",
#endif
#if SQLITE_DISABLE_PAGECACHE_OVERFLOW_STATS
  "DISABLE_PAGECACHE_OVERFLOW_STATS",
#endif
#if SQLITE_DISABLE_SKIPAHEAD_DISTINCT
  "DISABLE_SKIPAHEAD_DISTINCT",
#endif
#ifdef SQLITE_ENABLE_8_3_NAMES
  "ENABLE_8_3_NAMES=" CTIMEOPT_VAL(SQLITE_ENABLE_8_3_NAMES),
#endif
#if SQLITE_ENABLE_API_ARMOR
  "ENABLE_API_ARMOR",
#endif
#if SQLITE_ENABLE_ATOMIC_WRITE
  "ENABLE_ATOMIC_WRITE",
#endif
#if SQLITE_ENABLE_BATCH_ATOMIC_WRITE
  "ENABLE_BATCH_ATOMIC_WRITE",
#endif
#if SQLITE_ENABLE_CEROD
  "ENABLE_CEROD=" CTIMEOPT_VAL(SQLITE_ENABLE_CEROD),
#endif
#if SQLITE_ENABLE_COLUMN_METADATA
  "ENABLE_COLUMN_METADATA",
#endif
#if SQLITE_ENABLE_COLUMN_USED_MASK
  "ENABLE_COLUMN_USED_MASK",
#endif
#if SQLITE_ENABLE_COSTMULT
  "ENABLE_COSTMULT",
#endif
#if SQLITE_ENABLE_CURSOR_HINTS
  "ENABLE_CURSOR_HINTS",
#endif
#if SQLITE_ENABLE_DBSTAT_VTAB
  "ENABLE_DBSTAT_VTAB",
#endif
#if SQLITE_ENABLE_EXPENSIVE_ASSERT
  "ENABLE_EXPENSIVE_ASSERT",
#endif
#if SQLITE_ENABLE_FTS1
  "ENABLE_FTS1",
#endif
#if SQLITE_ENABLE_FTS2
  "ENABLE_FTS2",
#endif
#if SQLITE_ENABLE_FTS3
  "ENABLE_FTS3",
#endif
#if SQLITE_ENABLE_FTS3_PARENTHESIS
  "ENABLE_FTS3_PARENTHESIS",
#endif
#if SQLITE_ENABLE_FTS3_TOKENIZER
  "ENABLE_FTS3_TOKENIZER",
#endif
#if SQLITE_ENABLE_FTS4
  "ENABLE_FTS4",
#endif
#if SQLITE_ENABLE_FTS5
  "ENABLE_FTS5",
#endif
#if SQLITE_ENABLE_GEOPOLY
  "ENABLE_GEOPOLY",
#endif
#if SQLITE_ENABLE_HIDDEN_COLUMNS
  "ENABLE_HIDDEN_COLUMNS",
#endif
#if SQLITE_ENABLE_ICU
  "ENABLE_ICU",
#endif
#if SQLITE_ENABLE_IOTRACE
  "ENABLE_IOTRACE",
#endif
#if SQLITE_ENABLE_JSON1
  "ENABLE_JSON1",
#endif
#if SQLITE_ENABLE_LOAD_EXTENSION
  "ENABLE_LOAD_EXTENSION",
#endif
#ifdef SQLITE_ENABLE_LOCKING_STYLE
  "ENABLE_LOCKING_STYLE=" CTIMEOPT_VAL(SQLITE_ENABLE_LOCKING_STYLE),
#endif
#if SQLITE_ENABLE_MEMORY_MANAGEMENT
  "ENABLE_MEMORY_MANAGEMENT",
#endif
#if SQLITE_ENABLE_MEMSYS3
  "ENABLE_MEMSYS3",
#endif
#if SQLITE_ENABLE_MEMSYS5
  "ENABLE_MEMSYS5",
#endif
#if SQLITE_ENABLE_MULTIPLEX
  "ENABLE_MULTIPLEX",
#endif
#if SQLITE_ENABLE_NORMALIZE
  "ENABLE_NORMALIZE",
#endif
#if SQLITE_ENABLE_NULL_TRIM
  "ENABLE_NULL_TRIM",
#endif
#if SQLITE_ENABLE_OVERSIZE_CELL_CHECK
  "ENABLE_OVERSIZE_CELL_CHECK",
#endif
#if SQLITE_ENABLE_PREUPDATE_HOOK
  "ENABLE_PREUPDATE_HOOK",
#endif
#if SQLITE_ENABLE_QPSG
  "ENABLE_QPSG",
#endif
#if SQLITE_ENABLE_RBU
  "ENABLE_RBU",
#endif
#if SQLITE_ENABLE_RTREE
  "ENABLE_RTREE",
#endif
#if SQLITE_ENABLE_SELECTTRACE
  "ENABLE_SELECTTRACE",
#endif
#if SQLITE_ENABLE_SESSION
  "ENABLE_SESSION",
#endif
#if SQLITE_ENABLE_SHARED_SCHEMA
  "ENABLE_SHARED_SCHEMA",
#endif
#if SQLITE_ENABLE_SNAPSHOT
  "ENABLE_SNAPSHOT",
#endif
#if SQLITE_ENABLE_SORTER_REFERENCES
  "ENABLE_SORTER_REFERENCES",
#endif
#if SQLITE_ENABLE_SQLLOG
  "ENABLE_SQLLOG",
#endif
#if defined(SQLITE_ENABLE_STAT4)
  "ENABLE_STAT4",
#elif defined(SQLITE_ENABLE_STAT3)
  "ENABLE_STAT3",
#endif
#if SQLITE_ENABLE_STMTVTAB
  "ENABLE_STMTVTAB",
#endif
#if SQLITE_ENABLE_STMT_SCANSTATUS
  "ENABLE_STMT_SCANSTATUS",
#endif
#if SQLITE_ENABLE_UNKNOWN_SQL_FUNCTION
  "ENABLE_UNKNOWN_SQL_FUNCTION",
#endif
#if SQLITE_ENABLE_UNLOCK_NOTIFY
  "ENABLE_UNLOCK_NOTIFY",
#endif
#if SQLITE_ENABLE_UPDATE_DELETE_LIMIT
  "ENABLE_UPDATE_DELETE_LIMIT",
#endif
#if SQLITE_ENABLE_URI_00_ERROR
  "ENABLE_URI_00_ERROR",
#endif
#if SQLITE_ENABLE_VFSTRACE
  "ENABLE_VFSTRACE",
#endif
#if SQLITE_ENABLE_WHERETRACE
  "ENABLE_WHERETRACE",
#endif
#if SQLITE_ENABLE_ZIPVFS
  "ENABLE_ZIPVFS",
#endif
#if SQLITE_EXPLAIN_ESTIMATED_ROWS
  "EXPLAIN_ESTIMATED_ROWS",
#endif
#if SQLITE_EXTRA_IFNULLROW
  "EXTRA_IFNULLROW",
#endif
#ifdef SQLITE_EXTRA_INIT
  "EXTRA_INIT=" CTIMEOPT_VAL(SQLITE_EXTRA_INIT),
#endif
#ifdef SQLITE_EXTRA_SHUTDOWN
  "EXTRA_SHUTDOWN=" CTIMEOPT_VAL(SQLITE_EXTRA_SHUTDOWN),
#endif
#ifdef SQLITE_FTS3_MAX_EXPR_DEPTH
  "FTS3_MAX_EXPR_DEPTH=" CTIMEOPT_VAL(SQLITE_FTS3_MAX_EXPR_DEPTH),
#endif
#if SQLITE_FTS5_ENABLE_TEST_MI
  "FTS5_ENABLE_TEST_MI",
#endif
#if SQLITE_FTS5_NO_WITHOUT_ROWID
  "FTS5_NO_WITHOUT_ROWID",
#endif
#if SQLITE_HAS_CODEC
  "HAS_CODEC",
#endif
#if HAVE_ISNAN || SQLITE_HAVE_ISNAN
  "HAVE_ISNAN",
#endif
#if SQLITE_HOMEGROWN_RECURSIVE_MUTEX
  "HOMEGROWN_RECURSIVE_MUTEX",
#endif
#if SQLITE_IGNORE_AFP_LOCK_ERRORS
  "IGNORE_AFP_LOCK_ERRORS",
#endif
#if SQLITE_IGNORE_FLOCK_LOCK_ERRORS
  "IGNORE_FLOCK_LOCK_ERRORS",
#endif
#if SQLITE_INLINE_MEMCPY
  "INLINE_MEMCPY",
#endif
#if SQLITE_INT64_TYPE
  "INT64_TYPE",
#endif
#ifdef SQLITE_INTEGRITY_CHECK_ERROR_MAX
  "INTEGRITY_CHECK_ERROR_MAX=" CTIMEOPT_VAL(SQLITE_INTEGRITY_CHECK_ERROR_MAX),
#endif
#if SQLITE_LIKE_DOESNT_MATCH_BLOBS
  "LIKE_DOESNT_MATCH_BLOBS",
#endif
#if SQLITE_LOCK_TRACE
  "LOCK_TRACE",
#endif
#if SQLITE_LOG_CACHE_SPILL
  "LOG_CACHE_SPILL",
#endif
#ifdef SQLITE_MALLOC_SOFT_LIMIT
  "MALLOC_SOFT_LIMIT=" CTIMEOPT_VAL(SQLITE_MALLOC_SOFT_LIMIT),
#endif
#ifdef SQLITE_MAX_ATTACHED
  "MAX_ATTACHED=" CTIMEOPT_VAL(SQLITE_MAX_ATTACHED),
#endif
#ifdef SQLITE_MAX_COLUMN
  "MAX_COLUMN=" CTIMEOPT_VAL(SQLITE_MAX_COLUMN),
#endif
#ifdef SQLITE_MAX_COMPOUND_SELECT
  "MAX_COMPOUND_SELECT=" CTIMEOPT_VAL(SQLITE_MAX_COMPOUND_SELECT),
#endif
#ifdef SQLITE_MAX_DEFAULT_PAGE_SIZE
  "MAX_DEFAULT_PAGE_SIZE=" CTIMEOPT_VAL(SQLITE_MAX_DEFAULT_PAGE_SIZE),
#endif
#ifdef SQLITE_MAX_EXPR_DEPTH
  "MAX_EXPR_DEPTH=" CTIMEOPT_VAL(SQLITE_MAX_EXPR_DEPTH),
#endif
#ifdef SQLITE_MAX_FUNCTION_ARG
  "MAX_FUNCTION_ARG=" CTIMEOPT_VAL(SQLITE_MAX_FUNCTION_ARG),
#endif
#ifdef SQLITE_MAX_LENGTH
  "MAX_LENGTH=" CTIMEOPT_VAL(SQLITE_MAX_LENGTH),
#endif
#ifdef SQLITE_MAX_LIKE_PATTERN_LENGTH
  "MAX_LIKE_PATTERN_LENGTH=" CTIMEOPT_VAL(SQLITE_MAX_LIKE_PATTERN_LENGTH),
#endif
#ifdef SQLITE_MAX_MEMORY
  "MAX_MEMORY=" CTIMEOPT_VAL(SQLITE_MAX_MEMORY),
#endif
#ifdef SQLITE_MAX_MMAP_SIZE
  "MAX_MMAP_SIZE=" CTIMEOPT_VAL(SQLITE_MAX_MMAP_SIZE),
#endif
#ifdef SQLITE_MAX_MMAP_SIZE_
  "MAX_MMAP_SIZE_=" CTIMEOPT_VAL(SQLITE_MAX_MMAP_SIZE_),
#endif
#ifdef SQLITE_MAX_PAGE_COUNT
  "MAX_PAGE_COUNT=" CTIMEOPT_VAL(SQLITE_MAX_PAGE_COUNT),
#endif
#ifdef SQLITE_MAX_PAGE_SIZE
  "MAX_PAGE_SIZE=" CTIMEOPT_VAL(SQLITE_MAX_PAGE_SIZE),
#endif
#ifdef SQLITE_MAX_SCHEMA_RETRY
  "MAX_SCHEMA_RETRY=" CTIMEOPT_VAL(SQLITE_MAX_SCHEMA_RETRY),
#endif
#ifdef SQLITE_MAX_SQL_LENGTH
  "MAX_SQL_LENGTH=" CTIMEOPT_VAL(SQLITE_MAX_SQL_LENGTH),
#endif
#ifdef SQLITE_MAX_TRIGGER_DEPTH
  "MAX_TRIGGER_DEPTH=" CTIMEOPT_VAL(SQLITE_MAX_TRIGGER_DEPTH),
#endif
#ifdef SQLITE_MAX_VARIABLE_NUMBER
  "MAX_VARIABLE_NUMBER=" CTIMEOPT_VAL(SQLITE_MAX_VARIABLE_NUMBER),
#endif
#ifdef SQLITE_MAX_VDBE_OP
  "MAX_VDBE_OP=" CTIMEOPT_VAL(SQLITE_MAX_VDBE_OP),
#endif
#ifdef SQLITE_MAX_WORKER_THREADS
  "MAX_WORKER_THREADS=" CTIMEOPT_VAL(SQLITE_MAX_WORKER_THREADS),
#endif
#if SQLITE_MEMDEBUG
  "MEMDEBUG",
#endif
#if SQLITE_MIXED_ENDIAN_64BIT_FLOAT
  "MIXED_ENDIAN_64BIT_FLOAT",
#endif
#if SQLITE_MMAP_READWRITE
  "MMAP_READWRITE",
#endif
#if SQLITE_MUTEX_NOOP
  "MUTEX_NOOP",
#endif
#if SQLITE_MUTEX_NREF
  "MUTEX_NREF",
#endif
#if SQLITE_MUTEX_OMIT
  "MUTEX_OMIT",
#endif
#if SQLITE_MUTEX_PTHREADS
  "MUTEX_PTHREADS",
#endif
#if SQLITE_MUTEX_W32
  "MUTEX_W32",
#endif
#if SQLITE_NEED_ERR_NAME
  "NEED_ERR_NAME",
#endif
#if SQLITE_NOINLINE
  "NOINLINE",
#endif
#if SQLITE_NO_SYNC
  "NO_SYNC",
#endif
#if SQLITE_OMIT_ALTERTABLE
  "OMIT_ALTERTABLE",
#endif
#if SQLITE_OMIT_ANALYZE
  "OMIT_ANALYZE",
#endif
#if SQLITE_OMIT_ATTACH
  "OMIT_ATTACH",
#endif
#if SQLITE_OMIT_AUTHORIZATION
  "OMIT_AUTHORIZATION",
#endif
#if SQLITE_OMIT_AUTOINCREMENT
  "OMIT_AUTOINCREMENT",
#endif
#if SQLITE_OMIT_AUTOINIT
  "OMIT_AUTOINIT",
#endif
#if SQLITE_OMIT_AUTOMATIC_INDEX
  "OMIT_AUTOMATIC_INDEX",
#endif
#if SQLITE_OMIT_AUTORESET
  "OMIT_AUTORESET",
#endif
#if SQLITE_OMIT_AUTOVACUUM
  "OMIT_AUTOVACUUM",
#endif
#if SQLITE_OMIT_BETWEEN_OPTIMIZATION
  "OMIT_BETWEEN_OPTIMIZATION",
#endif
#if SQLITE_OMIT_BLOB_LITERAL
  "OMIT_BLOB_LITERAL",
#endif
#if SQLITE_OMIT_BTREECOUNT
  "OMIT_BTREECOUNT",
#endif
#if SQLITE_OMIT_CAST
  "OMIT_CAST",
#endif
#if SQLITE_OMIT_CHECK
  "OMIT_CHECK",
#endif
#if SQLITE_OMIT_COMPLETE
  "OMIT_COMPLETE",
#endif
#if SQLITE_OMIT_COMPOUND_SELECT
  "OMIT_COMPOUND_SELECT",
#endif
#if SQLITE_OMIT_CONFLICT_CLAUSE
  "OMIT_CONFLICT_CLAUSE",
#endif
#if SQLITE_OMIT_CTE
  "OMIT_CTE",
#endif
#if SQLITE_OMIT_DATETIME_FUNCS
  "OMIT_DATETIME_FUNCS",
#endif
#if SQLITE_OMIT_DECLTYPE
  "OMIT_DECLTYPE",
#endif
#if SQLITE_OMIT_DEPRECATED
  "OMIT_DEPRECATED",
#endif
#if SQLITE_OMIT_DISKIO
  "OMIT_DISKIO",
#endif
#if SQLITE_OMIT_EXPLAIN
  "OMIT_EXPLAIN",
#endif
#if SQLITE_OMIT_FLAG_PRAGMAS
  "OMIT_FLAG_PRAGMAS",
#endif
#if SQLITE_OMIT_FLOATING_POINT
  "OMIT_FLOATING_POINT",
#endif
#if SQLITE_OMIT_FOREIGN_KEY
  "OMIT_FOREIGN_KEY",
#endif
#if SQLITE_OMIT_GET_TABLE
  "OMIT_GET_TABLE",
#endif
#if SQLITE_OMIT_HEX_INTEGER
  "OMIT_HEX_INTEGER",
#endif
#if SQLITE_OMIT_INCRBLOB
  "OMIT_INCRBLOB",
#endif
#if SQLITE_OMIT_INTEGRITY_CHECK
  "OMIT_INTEGRITY_CHECK",
#endif
#if SQLITE_OMIT_LIKE_OPTIMIZATION
  "OMIT_LIKE_OPTIMIZATION",
#endif
#if SQLITE_OMIT_LOAD_EXTENSION
  "OMIT_LOAD_EXTENSION",
#endif
#if SQLITE_OMIT_LOCALTIME
  "OMIT_LOCALTIME",
#endif
#if SQLITE_OMIT_LOOKASIDE
  "OMIT_LOOKASIDE",
#endif
#if SQLITE_OMIT_MEMORYDB
  "OMIT_MEMORYDB",
#endif
#if SQLITE_OMIT_OR_OPTIMIZATION
  "OMIT_OR_OPTIMIZATION",
#endif
#if SQLITE_OMIT_PAGER_PRAGMAS
  "OMIT_PAGER_PRAGMAS",
#endif
#if SQLITE_OMIT_PARSER_TRACE
  "OMIT_PARSER_TRACE",
#endif
#if SQLITE_OMIT_POPEN
  "OMIT_POPEN",
#endif
#if SQLITE_OMIT_PRAGMA
  "OMIT_PRAGMA",
#endif
#if SQLITE_OMIT_PROGRESS_CALLBACK
  "OMIT_PROGRESS_CALLBACK",
#endif
#if SQLITE_OMIT_QUICKBALANCE
  "OMIT_QUICKBALANCE",
#endif
#if SQLITE_OMIT_REINDEX
  "OMIT_REINDEX",
#endif
#if SQLITE_OMIT_SCHEMA_PRAGMAS
  "OMIT_SCHEMA_PRAGMAS",
#endif
#if SQLITE_OMIT_SCHEMA_VERSION_PRAGMAS
  "OMIT_SCHEMA_VERSION_PRAGMAS",
#endif
#if SQLITE_OMIT_SHARED_CACHE
  "OMIT_SHARED_CACHE",
#endif
#if SQLITE_OMIT_SHUTDOWN_DIRECTORIES
  "OMIT_SHUTDOWN_DIRECTORIES",
#endif
#if SQLITE_OMIT_SUBQUERY
  "OMIT_SUBQUERY",
#endif
#if SQLITE_OMIT_TCL_VARIABLE
  "OMIT_TCL_VARIABLE",
#endif
#if SQLITE_OMIT_TEMPDB
  "OMIT_TEMPDB",
#endif
#if SQLITE_OMIT_TEST_CONTROL
  "OMIT_TEST_CONTROL",
#endif
#if SQLITE_OMIT_TRACE
  "OMIT_TRACE",
#endif
#if SQLITE_OMIT_TRIGGER
  "OMIT_TRIGGER",
#endif
#if SQLITE_OMIT_TRUNCATE_OPTIMIZATION
  "OMIT_TRUNCATE_OPTIMIZATION",
#endif
#if SQLITE_OMIT_UTF16
  "OMIT_UTF16",
#endif
#if SQLITE_OMIT_VACUUM
  "OMIT_VACUUM",
#endif
#if SQLITE_OMIT_VIEW
  "OMIT_VIEW",
#endif
#if SQLITE_OMIT_VIRTUALTABLE
  "OMIT_VIRTUALTABLE",
#endif
#if SQLITE_OMIT_WAL
  "OMIT_WAL",
#endif
#if SQLITE_OMIT_WSD
  "OMIT_WSD",
#endif
#if SQLITE_OMIT_XFER_OPT
  "OMIT_XFER_OPT",
#endif
#if SQLITE_PCACHE_SEPARATE_HEADER
  "PCACHE_SEPARATE_HEADER",
#endif
#if SQLITE_PERFORMANCE_TRACE
  "PERFORMANCE_TRACE",
#endif
#if SQLITE_POWERSAFE_OVERWRITE
  "POWERSAFE_OVERWRITE",
#endif
#if SQLITE_PREFER_PROXY_LOCKING
  "PREFER_PROXY_LOCKING",
#endif
#if SQLITE_PROXY_DEBUG
  "PROXY_DEBUG",
#endif
#if SQLITE_REVERSE_UNORDERED_SELECTS
  "REVERSE_UNORDERED_SELECTS",
#endif
#if SQLITE_RTREE_INT_ONLY
  "RTREE_INT_ONLY",
#endif
#if SQLITE_SECURE_DELETE
  "SECURE_DELETE",
#endif
#if SQLITE_SMALL_STACK
  "SMALL_STACK",
#endif
#ifdef SQLITE_SORTER_PMASZ
  "SORTER_PMASZ=" CTIMEOPT_VAL(SQLITE_SORTER_PMASZ),
#endif
#if SQLITE_SOUNDEX
  "SOUNDEX",
#endif
#ifdef SQLITE_STAT4_SAMPLES
  "STAT4_SAMPLES=" CTIMEOPT_VAL(SQLITE_STAT4_SAMPLES),
#endif
#ifdef SQLITE_STMTJRNL_SPILL
  "STMTJRNL_SPILL=" CTIMEOPT_VAL(SQLITE_STMTJRNL_SPILL),
#endif
#if SQLITE_SUBSTR_COMPATIBILITY
  "SUBSTR_COMPATIBILITY",
#endif
#if SQLITE_SYSTEM_MALLOC
  "SYSTEM_MALLOC",
#endif
#if SQLITE_TCL
  "TCL",
#endif
#ifdef SQLITE_TEMP_STORE
  "TEMP_STORE=" CTIMEOPT_VAL(SQLITE_TEMP_STORE),
#endif
#if SQLITE_TEST
  "TEST",
#endif
#if defined(SQLITE_THREADSAFE)
  "THREADSAFE=" CTIMEOPT_VAL(SQLITE_THREADSAFE),
#elif defined(THREADSAFE)
  "THREADSAFE=" CTIMEOPT_VAL(THREADSAFE),
#else
  "THREADSAFE=1",
#endif
#if SQLITE_UNLINK_AFTER_CLOSE
  "UNLINK_AFTER_CLOSE",
#endif
#if SQLITE_UNTESTABLE
  "UNTESTABLE",
#endif
#if SQLITE_USER_AUTHENTICATION
  "USER_AUTHENTICATION",
#endif
#if SQLITE_USE_ALLOCA
  "USE_ALLOCA",
#endif
#if SQLITE_USE_FCNTL_TRACE
  "USE_FCNTL_TRACE",
#endif
#if SQLITE_USE_URI
  "USE_URI",
#endif
#if SQLITE_VDBE_COVERAGE
  "VDBE_COVERAGE",
#endif
#if SQLITE_WIN32_MALLOC
  "WIN32_MALLOC",
#endif
#if SQLITE_ZERO_MALLOC
  "ZERO_MALLOC",
#endif
/* 
** END CODE GENERATED BY tool/mkctime.tcl 
*/
};

const char **sqlite3CompileOptions(int *pnOpt){
  *pnOpt = sizeof(sqlite3azCompileOpt) / sizeof(sqlite3azCompileOpt[0]);
  return (const char**)sqlite3azCompileOpt;
}

#endif /* SQLITE_OMIT_COMPILEOPTION_DIAGS */
