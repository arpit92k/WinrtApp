#include "pch.h"
#include "Source.h"
#include "CppLib.h"

namespace winrt::RuntimeComponent1::implementation
{
    int32_t Source::MyProperty()
    {
        cpplib::CppLib c;
        return c.value();
    }

    void Source::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    int32_t Source::MyProperty1()
    {
        throw hresult_not_implemented();
    }

    void Source::MyProperty1(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
