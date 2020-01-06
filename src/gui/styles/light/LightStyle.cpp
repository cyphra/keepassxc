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
    palette.setColor(QPalette::Active, QPalette::Window, QStringLiteral("#EFEFEF"));
    palette.setColor(QPalette::Inactive, QPalette::Window, QStringLiteral("#E7E8E8"));
    palette.setColor(QPalette::Disabled, QPalette::Window, QStringLiteral("#CECFCF"));

    palette.setColor(QPalette::Active, QPalette::WindowText, QStringLiteral("#080908"));
    palette.setColor(QPalette::Inactive, QPalette::WindowText, QStringLiteral("#0E0F0E"));
    palette.setColor(QPalette::Disabled, QPalette::WindowText, QStringLiteral("#616761"));

    palette.setColor(QPalette::Active, QPalette::Base, QStringLiteral("#F9F9F9"));
    palette.setColor(QPalette::Inactive, QPalette::Base, QStringLiteral("#F0F1F0"));
    palette.setColor(QPalette::Disabled, QPalette::Base, QStringLiteral("#DADCD9"));

    palette.setColor(QPalette::Active, QPalette::AlternateBase, QStringLiteral("#E5EFE1"));
    palette.setColor(QPalette::Inactive, QPalette::AlternateBase, QStringLiteral("#DFEAD9"));
    palette.setColor(QPalette::Disabled, QPalette::AlternateBase, QStringLiteral("#D5E0CF"));

    palette.setColor(QPalette::All, QPalette::ToolTipBase, QStringLiteral("#4E9E26"));
    palette.setColor(QPalette::All, QPalette::ToolTipText, QStringLiteral("#EAEBEA"));

    palette.setColor(QPalette::Active, QPalette::PlaceholderText, QStringLiteral("#181A18"));
    palette.setColor(QPalette::Inactive, QPalette::PlaceholderText, QStringLiteral("#454B45"));
    palette.setColor(QPalette::Disabled, QPalette::PlaceholderText, QStringLiteral("#8F998F"));

    palette.setColor(QPalette::Active, QPalette::Text, QStringLiteral("#080908"));
    palette.setColor(QPalette::Inactive, QPalette::Text, QStringLiteral("#0E0F0E"));
    palette.setColor(QPalette::Disabled, QPalette::Text, QStringLiteral("#616761"));

    palette.setColor(QPalette::Active, QPalette::Button, QStringLiteral("#CFD1D0"));
    palette.setColor(QPalette::Inactive, QPalette::Button, QStringLiteral("#DADBDA"));
    palette.setColor(QPalette::Disabled, QPalette::Button, QStringLiteral("#E7E8E8"));

    palette.setColor(QPalette::Active, QPalette::ButtonText, QStringLiteral("#181A18"));
    palette.setColor(QPalette::Inactive, QPalette::ButtonText, QStringLiteral("#454B45"));
    palette.setColor(QPalette::Disabled, QPalette::ButtonText, QStringLiteral("#8F998F"));

    palette.setColor(QPalette::Active, QPalette::BrightText, QStringLiteral("#E0E3E0"));
    palette.setColor(QPalette::Inactive, QPalette::BrightText, QStringLiteral("#D6DBD6"));
    palette.setColor(QPalette::Disabled, QPalette::BrightText, QStringLiteral("#B2B9B2"));

    palette.setColor(QPalette::All, QPalette::Light, QStringLiteral("#F6F6F6"));
    palette.setColor(QPalette::All, QPalette::Midlight, QStringLiteral("#D4D5D4"));
    palette.setColor(QPalette::All, QPalette::Dark, QStringLiteral("#929694"));
    palette.setColor(QPalette::All, QPalette::Mid, QStringLiteral("#B3B6B4"));
    palette.setColor(QPalette::All, QPalette::Shadow, QStringLiteral("#636564"));

    palette.setColor(QPalette::Active, QPalette::Highlight, QStringLiteral("#44941C"));
    palette.setColor(QPalette::Inactive, QPalette::Highlight, QStringLiteral("#4A812E"));
    palette.setColor(QPalette::Disabled, QPalette::Highlight, QStringLiteral("#597E46"));

    palette.setColor(QPalette::Active, QPalette::HighlightedText, QStringLiteral("#E0E3E0"));
    palette.setColor(QPalette::Inactive, QPalette::HighlightedText, QStringLiteral("#D6DBD6"));
    palette.setColor(QPalette::Disabled, QPalette::HighlightedText, QStringLiteral("#B2B9B2"));

    palette.setColor(QPalette::All, QPalette::Link, QStringLiteral("#368E0B"));
    palette.setColor(QPalette::All, QPalette::LinkVisited, QStringLiteral("#346B19"));
}

QString LightStyle::getStylesheetPath() const
{
    return QStringLiteral(":/styles/light/lightstyle.qss");
}
