#ifndef DOWNLOADER_HPP
#define DOWNLOADER_HPP

#include <string>

using std::string;

void startDownloader(string autoSplittersDirectory);
void downloadFile(string url);

#endif