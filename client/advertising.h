/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2016  Intel Corporation. All rights reserved.
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

void ad_register(DBusConnection *conn, GDBusProxy *manager, const char *type);
void ad_unregister(DBusConnection *conn, GDBusProxy *manager);

void ad_advertise_uuids(const char *arg);
void ad_advertise_service(const char *arg);
void ad_advertise_manufacturer(const char *arg);
void ad_advertise_tx_power(bool value);
void ad_advertise_name(bool value);
void ad_advertise_appearance(bool value);
void ad_advertise_local_name(const char *name);
