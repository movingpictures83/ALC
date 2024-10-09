#ifndef ALCPLUGIN_H
#define ALCPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class ALCPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "ALC";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
