#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "ALCPlugin.h"

void ALCPlugin::input(std::string file) {
 inputfile = file;
}

void ALCPlugin::run() {}

void ALCPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "alc";
myCommand += " ";
myCommand += inputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<ALCPlugin> ALCPluginProxy = PluginProxy<ALCPlugin>("ALC", PluginManager::getInstance());
