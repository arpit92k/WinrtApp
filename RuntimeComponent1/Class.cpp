#include "pch.h"
#include "Class.h"
#include "CppLib.h"

namespace winrt::RuntimeComponent1::implementation
{
    int32_t Class::MyProperty()
    {
        cpplib::CppLib a;
        return a.value();
    }

    void Class::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    int32_t Class::MyProperty1()
    {
        throw hresult_not_implemented();
    }

    void Class::MyProperty1(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
