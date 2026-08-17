// MANUAL
#include "NameTags.h"

NameTags::NameTags() : IModule(0, Category::VISUAL, "Displays the name of every user on the server.") {
}

NameTags::~NameTags() {
}

std::string NameTags::getModuleName() { return "NameTags"; }
