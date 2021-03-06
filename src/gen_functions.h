/*
 * gen_functions.h
 * Converts md files for the Mental Health and Wellness Knowledge Base
 * https://github.com/andy5995/mhwkb
 *
 * Copyright 2017 Andy Alt <andy400-dev@yahoo.com>
 * With contributions from
 *
 * Daniel Kelly <myself@danielkelly.me>
 *
 * and others mentioned in
 * https://github.com/andy5995/mhwkb/blob/master/CONTRIBUTING.md
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#ifndef GEN_FUNCTIONS_H
#define GEN_FUNCTIONS_H

#include "mhwkb.h"

void
del_char_shift_left (char *str, char c);

void
trim_char (char *str, char c);

void
buf_check (const char *str, const int len);

int
parse_tags_line (char *line, char tags[][TAG_MAX_LEN]);

/* strip any code from the tags */
char*
make_tags_real (const int tag_ctr, char tags[][TAG_MAX_LEN], char *article_links,
  struct p *page_calc);

void create_tag_html_files (const int tag_ctr, const char *output_dir,
  char tags[][TAG_MAX_LEN],
  const char *link_href, const char *link_title, const char *date_line);

#endif
