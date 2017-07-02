/*
*  Copyright 2017  Smith AR <audoban@openmailbox.org>
*                  Michail Vourlakos <mvourlakos@gmail.com>
*
*  This file is part of Latte-Dock
*
*  Latte-Dock is free software; you can redistribute it and/or
*  modify it under the terms of the GNU General Public License as
*  published by the Free Software Foundation; either version 2 of
*  the License, or (at your option) any later version.
*
*  Latte-Dock is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef UNIVERSALSETTINGS_H
#define UNIVERSALSETTINGS_H

#include <QObject>

namespace Latte {

//! This class holds all the settings that are universally available
//! independent of layouts
class UniversalSettings : public QObject {
    Q_OBJECT
    //Q_PROPERTY(bool autostart READ autostart WRITE setAutostart NOTIFY autostartChanged)
    //Q_PROPERTY(bool exposeAltSession READ exposeAltSession WRITE setExposeAltSession NOTIFY exposeAltSessionChanged)

    //Q_PROPERTY(Latte::Dock::SessionType currentSession READ currentSession WRITE setCurrentSession NOTIFY currentSessionChanged)

    //Q_PROPERTY(QAction *altSessionAction READ altSessionAction NOTIFY altSessionActionChanged)
    //Q_PROPERTY(QAction *addWidgetsAction READ addWidgetsAction NOTIFY addWidgetsActionChanged)

public:
    UniversalSettings(QObject *parent = nullptr);
    ~UniversalSettings() override;
};

}

#endif //UNIVERSALSETTINGS_H
