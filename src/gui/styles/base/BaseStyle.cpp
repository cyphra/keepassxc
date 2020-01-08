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

#include "BaseStyle.h"
#include "gui/styles/phantomstyle/phantomstyle.h"

BaseStyle::BaseStyle()
{
    setBaseStyle(new PhantomStyle);
}

BaseStyle::BaseStyle(QProxyStyle* style)
    : QProxyStyle(style)
{
}

void BaseStyle::polish(QApplication* app)
{
    Q_INIT_RESOURCE(styles);
    QString stylesheet;

    QFile baseStylesheetFile(":/styles/base/basestyle.qss");
    if (baseStylesheetFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        stylesheet = baseStylesheetFile.readAll();
        baseStylesheetFile.close();
    } else {
        qWarning("Failed to load theme base stylesheet.");
    }

    QFile extensionStyleSheetFile(getStylesheetPath());
    if (extensionStyleSheetFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        stylesheet.append(extensionStyleSheetFile.readAll());
        extensionStyleSheetFile.close();
    } else {
        qWarning("Failed to load theme extension stylesheet.");
    }

    app->setStyleSheet(stylesheet);
}
