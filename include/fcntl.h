/*************************************************************************
 *
 * $Id: $
 *
 * Copyright (C) 2003 Bjorn Reese <breese@users.sourceforge.net>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE AUTHORS AND
 * CONTRIBUTORS ACCEPT NO RESPONSIBILITY IN ANY CONCEIVABLE MANNER.
 *
 ************************************************************************/

#ifndef PREDEF_FCNTL_H
#define PREDEF_FCNTL_H

#ifndef PREDEF_PREDEF_H
# include <predef/predef.h>
#endif

#if defined(PREDEF_STANDARD_XPG3) || defined(PREDEF_STANDARD_POSIX1990)
# define PREDEF_HEADER_FCNTL
# include <fcntl.h>
# define PREDEF_FUNC_CREAT
# define PREDEF_FUNC_FCNTL
# define PREDEF_FUNC_OPEN
#endif

#endif /* PREDEF_FCNTL_H */
