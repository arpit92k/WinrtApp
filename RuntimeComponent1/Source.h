#pragma once
#include "Source.g.h"

namespace winrt::RuntimeComponent1::implementation
{
    struct Source : SourceT<Source>
    {
        Source() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);

        int32_t MyProperty1();
        void MyProperty1(int32_t value);
    };
}

namespace winrt::RuntimeComponent1::factory_implementation
{
    struct Source : SourceT<Source, implementation::Source>
    {
    };
}
