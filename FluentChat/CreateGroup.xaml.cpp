﻿#include "pch.h"
#include "CreateGroup.xaml.h"
#if __has_include("CreateGroup.g.cpp")
#include "CreateGroup.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::FluentChat::implementation
{
    CreateGroup::CreateGroup()
    {
        InitializeComponent();
    }

    int32_t CreateGroup::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void CreateGroup::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void CreateGroup::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
