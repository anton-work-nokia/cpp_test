#pragma once
#include "Printable.h"

class Entity: public Printable 
{
    private:
    std::string m_Name;

    public:
    Entity(std::string name);

    std::string getName() const override;
};