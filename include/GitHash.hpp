#ifndef GIT_HASH_HEADER_FILE
#define GIT_HASH_HEADER_FILE

namespace GitHash
{
extern const char* const branch;
extern const char* const sha1;
extern const char* const shortSha1;
extern const char* const tags;
extern const char* const config;
extern const unsigned long long buildTimestamp;  // Unix timestamp (seconds since epoch)
extern const char* const buildTime;              // Pre-formatted: "YYYY-MM-DD HH:MM"
extern const bool        dirty;
} // namespace GitHash

#endif
