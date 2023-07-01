#include <cstring>
#include <thread>
#include <unistd.h>

#include "headers/downloader.hpp"
#include "headers/autosplitter.hpp"
extern "C" {
    #include "headers/last-gtk.h"
}

using std::thread;

void launchArgs(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i], "-downloader") == 0)
        {
            startDownloader(autoSplittersDirectory);
        }
    }
}

int autoSplitterThread(int argc, char *argv[])
{
    launchArgs(argc, argv);
    chooseAutoSplitter();
    runAutoSplitter();

    return 0;
}

int main(int argc, char *argv[])
{
    checkDirectories();
    if (isatty(fileno(stdin)))
    {
        thread t1(autoSplitterThread, argc, argv);
        thread t2(open_timer, argc, argv);

        t1.join();
        t2.join();
    }
    else
    {
        open_timer(argc, argv);
    }

    return 0;
}