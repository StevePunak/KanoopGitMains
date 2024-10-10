#include <QCoreApplication>
#include <iostream>
#include <git2.h>

int main(int argc, char *argv[])
{
    Q_UNUSED(argc) Q_UNUSED(argv)
    const char* path = "/home/spunak/tmp/gitlab/GitTesting";
    git_repository* repo = nullptr;
    int rc = git_repository_open(&repo, path);
    if(rc == 0) {
        std::cout << "Success";
    }
 }
