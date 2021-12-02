#pragma once

#include <string>
#include <vector>
#include "Eertree.h"

int main(int argc, char **argv)
{
    std::vector<std::string> args(argv + 1, argv + argc);
    Eertree::main(args);
}

