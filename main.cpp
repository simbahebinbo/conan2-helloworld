#include <cstdlib>
#include <cstdio>
#include <cstring>

#include <zlib.h>

int main()
{
    char buffer_in[256] = {
        "Conan is a MIT-licensed, Open Source package manager for C and C++ development "
        "for C and C++ development, allowing development teams to easily and efficiently "
        "manage their packages and dependencies across platforms and build systems."
    };
    char buffer_out[256] = {};

    z_stream defstream;
    defstream.zalloc = Z_NULL;
    defstream.zfree = Z_NULL;
    defstream.opaque = Z_NULL;
    defstream.avail_in = static_cast<uInt>(strlen(buffer_in));
    defstream.next_in = reinterpret_cast<Bytef*>(buffer_in);
    defstream.avail_out = static_cast<uInt>(sizeof(buffer_out));
    defstream.next_out = reinterpret_cast<Bytef*>(buffer_out);

    deflateInit(&defstream, Z_BEST_COMPRESSION);
    deflate(&defstream, Z_FINISH);
    deflateEnd(&defstream);

    printf("Uncompressed size is: %lu\n", strlen(buffer_in));
    printf("Compressed size is: %lu\n", strlen(buffer_out));

    printf("ZLIB VERSION: %s\n", zlibVersion());

    return EXIT_SUCCESS;
}
