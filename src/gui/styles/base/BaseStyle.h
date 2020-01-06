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

#ifndef KEEPASSXC_BASESTYLE_H
#define KEEPASSXC_BASESTYLE_H

#include <QApplication>
#include <QProxyStyle>

class BaseStyle : public QProxyStyle
{
    Q_OBJECT

public:
    BaseStyle();
    explicit BaseStyle(QProxyStyle* style);

    using QProxyStyle::polish;
    void polish(QApplication* app) override;

protected:
    /**
     * @return Path to stylesheet which extends basestyle.qss
     */
    virtual QString getStylesheetPath() const = 0;
};


#endif //KEEPASSXC_BASESTYLE_H
