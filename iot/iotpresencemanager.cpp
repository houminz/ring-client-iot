/*
 *  Copyright (C) 2004-2017 Savoir-faire Linux Inc.
 *
 *  Author: Philippe Proulx <philippe.proulx@savoirfairelinux.com>
 *  Author: Houmin Wei <houmin.wei@pku.edu.cn>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.
 */

#include "iotpresencemanager.h"
#include "presencemanager_interface.h"

IotPresenceManager::IotPresenceManager()
{}

void
IotPresenceManager::publish(const std::string& accountID, const bool& status, const std::string& note)
{
    DRing::publish(accountID, status, note);
}

void
IotPresenceManager::answerServerRequest(const std::string& uri, const bool& flag)
{
    DRing::answerServerRequest(uri, flag);
}

void
IotPresenceManager::subscribeBuddy(const std::string& accountID, const std::string& uri, const bool& flag)
{
    DRing::subscribeBuddy(accountID, uri, flag);
}

auto
IotPresenceManager::getSubscriptions(const std::string& accountID) -> decltype(DRing::getSubscriptions(accountID))
{
    return DRing::getSubscriptions(accountID);
}

void
IotPresenceManager::setSubscriptions(const std::string& accountID, const std::vector<std::string>& uris)
{
    DRing::setSubscriptions(accountID, uris);
}