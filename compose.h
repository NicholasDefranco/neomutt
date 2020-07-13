/**
 * @file
 * GUI editor for an email's headers
 *
 * @authors
 * Copyright (C) 2018 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MUTT_COMPOSE_H
#define MUTT_COMPOSE_H

struct Buffer;
struct Email;
struct SendContext;

/* These Config Variables are only used in compose.c */
extern char *        C_ComposeFormat;
extern char *        C_Ispell;
extern unsigned char C_Postpone;

int mutt_compose_menu(struct SendContext *sctx);

#endif /* MUTT_COMPOSE_H */
