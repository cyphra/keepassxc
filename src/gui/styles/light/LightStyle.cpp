/*
 *  Copyright (C) 2020 KeePassXC Team <team@keepassxc.org>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QFile>
#include <QStyleFactory>

#include "gui/styles/phantomstyle/phantomstyle.h"
#include "LightStyle.h"

LightStyle::LightStyle()
{
    setBaseStyle(new PhantomStyle);
}

LightStyle::LightStyle(QProxyStyle* style)
    : BaseStyle(style)
{
}

void LightStyle::polish(QPalette& palette)
{
    palette.setColor(QPalette::Active, QPalette::Window, QStringLiteral("#F4F4F4"));
    palette.setColor(QPalette::Inactive, QPalette::Window, QStringLiteral("#EFEFEF"));
    palette.setColor(QPalette::Disabled, QPalette::Window, QStringLiteral("#E8E8EA"));

    palette.setColor(QPalette::Active, QPalette::WindowText, QStringLiteral("#080809"));
    palette.setColor(QPalette::Inactive, QPalette::WindowText, QStringLiteral("#18181A"));
    palette.setColor(QPalette::Disabled, QPalette::WindowText, QStringLiteral("#828389"));

    palette.setColor(QPalette::Active, QPalette::Base, QStringLiteral("#F9F9F9"));
    palette.setColor(QPalette::Inactive, QPalette::Base, QStringLiteral("#F5F5F4"));
    palette.setColor(QPalette::Disabled, QPalette::Base, QStringLiteral("#EFEFF2"));

    palette.setColor(QPalette::Active, QPalette::AlternateBase, QStringLiteral("#ECF3E8"));
    palette.setColor(QPalette::Inactive, QPalette::AlternateBase, QStringLiteral("#EAF2E6"));
    palette.setColor(QPalette::Disabled, QPalette::AlternateBase, QStringLiteral("#E1E9DD"));

    palette.setColor(QPalette::All, QPalette::ToolTipBase, QStringLiteral("#538D1D"));
    palette.setColor(QPalette::All, QPalette::ToolTipText, QStringLiteral("#E2E3E7"));

    palette.setColor(QPalette::Active, QPalette::PlaceholderText, QStringLiteral("#71727D"));
    palette.setColor(QPalette::Inactive, QPalette::PlaceholderText, QStringLiteral("#878893"));
    palette.setColor(QPalette::Disabled, QPalette::PlaceholderText, QStringLiteral("#A3A4AC"));

    palette.setColor(QPalette::Active, QPalette::Text, QStringLiteral("#080809"));
    palette.setColor(QPalette::Inactive, QPalette::Text, QStringLiteral("#18181A"));
    palette.setColor(QPalette::Disabled, QPalette::Text, QStringLiteral("#828389"));

    palette.setColor(QPalette::Active, QPalette::Button, QStringLiteral("#D4D5DD"));
    palette.setColor(QPalette::Inactive, QPalette::Button, QStringLiteral("#DADBDA"));
    palette.setColor(QPalette::Disabled, QPalette::Button, QStringLiteral("#E7E8E8"));

    palette.setColor(QPalette::Active, QPalette::ButtonText, QStringLiteral("#181A18"));
    palette.setColor(QPalette::Inactive, QPalette::ButtonText, QStringLiteral("#5F6671"));
    palette.setColor(QPalette::Disabled, QPalette::ButtonText, QStringLiteral("#9499A0"));

    palette.setColor(QPalette::Active, QPalette::BrightText, QStringLiteral("#F3F3F4"));
    palette.setColor(QPalette::Inactive, QPalette::BrightText, QStringLiteral("#EDEFFD"));
    palette.setColor(QPalette::Disabled, QPalette::BrightText, QStringLiteral("#C6D7BE"));

    palette.setColor(QPalette::All, QPalette::Light, QStringLiteral("#F8F9FA"));
    palette.setColor(QPalette::All, QPalette::Midlight, QStringLiteral("#E8E9EC"));
    palette.setColor(QPalette::All, QPalette::Dark, QStringLiteral("#B9BAC4"));
    palette.setColor(QPalette::All, QPalette::Mid, QStringLiteral("#C8C9D0"));
    palette.setColor(QPalette::All, QPalette::Shadow, QStringLiteral("#6B6D7A"));

    palette.setColor(QPalette::Active, QPalette::Highlight, QStringLiteral("#59A314"));
    palette.setColor(QPalette::Inactive, QPalette::Highlight, QStringLiteral("#56961A"));
    palette.setColor(QPalette::Disabled, QPalette::Highlight, QStringLiteral("#638F50"));

    palette.setColor(QPalette::Active, QPalette::HighlightedText, QStringLiteral("#F3F3F4"));
    palette.setColor(QPalette::Inactive, QPalette::HighlightedText, QStringLiteral("#EDEFFD"));
    palette.setColor(QPalette::Disabled, QPalette::HighlightedText, QStringLiteral("#C6D7BE"));

    palette.setColor(QPalette::All, QPalette::Link, QStringLiteral("#3E9A10"));
    palette.setColor(QPalette::All, QPalette::LinkVisited, QStringLiteral("#418D1A"));
}

QString LightStyle::getStylesheetPath() const
{
    return QStringLiteral(":/styles/light/lightstyle.qss");
}
