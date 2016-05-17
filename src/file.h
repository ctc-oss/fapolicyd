/*
 * file.h - Header file for file.c
 * Copyright (c) 2016 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This software may be freely redistributed and/or modified under the
 * terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING. If not, write to the
 * Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * Authors:
 *   Steve Grubb <sgrubb@redhat.com>
 */

#ifndef FILE_HEADER
#define FILE_HEADER

#include <sys/types.h>

void file_init(void);
void file_close(void);
char *get_program_cwd_from_pid(pid_t pid, size_t blen, char *buf);
char *get_file_from_fd(int fd, pid_t pid, size_t blen, char *buf);
char *get_device_from_fd(int fd, size_t blen, char *buf);
char *get_file_type_from_fd(int fd, size_t blen, char *buf);
int  check_packaged_from_file(const char *filename);
char *get_hash_from_fd(int fd);

#endif