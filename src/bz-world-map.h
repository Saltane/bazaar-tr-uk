/* bz-world-map.h
 *
 * Copyright 2025 Alexander Vanhee
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define BZ_TYPE_WORLD_MAP (bz_world_map_get_type ())

G_DECLARE_FINAL_TYPE (BzWorldMap, bz_world_map, BZ, WORLD_MAP, GtkWidget)

GtkWidget *
bz_world_map_new (void);

GListModel *
bz_world_map_get_model (BzWorldMap *self);

void
bz_world_map_set_model (BzWorldMap *self,
                        GListModel *model);

G_END_DECLS
