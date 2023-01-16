#ifndef __DSL_ESP_COMPONENT_H__
#define __DSL_ESP_COMPONENT_H__

#include <string>

namespace dsl
{
    namespace esp
    {
        namespace components
        {
            class Component
            {
            protected:
                std::string _name;

            public:
                Component(const std::string &name);
                virtual void setup() = 0;
                virtual void loop() = 0;
            };
        };
    };
};

#endif // __DSL_ESP_COMPONENT_H__