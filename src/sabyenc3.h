 /*=============================================================================
 *
 * Copyright (C) 2003, 2011 Alessandro Duca <alessandro.duca@gmail.com>
 * Modified in 2016 by Safihre <safihre@sabnzbd.org> for use within SABnzbd
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *=============================================================================
 */

#include <Python.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

/* Version information */
#define SABYENC_VERSION "6.0.0"

/* Constants */
#define SABYENC_LINESIZE    128
#define SABYENC_ZERO        0x00
#define SABYENC_CR          0x0d
#define SABYENC_LF          0x0a

/* The =yend line cannot be crazy long*/
#define MAX_TAIL_BYTES      256

/* Functions */
PyObject* decode_buffer(PyObject *, PyObject*);
PyObject* encode(PyObject *, PyObject*);
PyMODINIT_FUNC PyInit_sabyenc3(void);
