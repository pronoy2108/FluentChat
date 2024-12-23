﻿#pragma once

#include "UserViewModel.g.h"

using namespace winrt;

namespace winrt::FluentChat::implementation
{
    struct UserViewModel : UserViewModelT<UserViewModel>
    {
        UserViewModel() = default;

        hstring NickName();
        void NickName(hstring const& value);

        hstring Email();
        void Email(hstring const& value);

        hstring Password();
        void Password(hstring const& value);

        bool IsLogin();
        void IsLogin(bool const& value);

        event_token PropertyChanged(Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& value);
        void PropertyChanged(event_token const& token);

    private:
        void RaisePropertyChanged(hstring propertyName);
        hstring m_nickName;
        hstring m_email;
        hstring m_password;
        bool m_isLogin;
        event<Microsoft::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
    };
}

namespace winrt::FluentChat::factory_implementation
{
    struct UserViewModel : UserViewModelT<UserViewModel, implementation::UserViewModel>
    {
    };
}
