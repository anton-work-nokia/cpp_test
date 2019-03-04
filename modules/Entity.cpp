#include "Entity.h"

Entity::Entity(std::string name) : m_Name(name) {}

std::string Entity::getName() const 
{
    return m_Name;
}