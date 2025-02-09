
/*
 * YAFFS: Yet another FFS. A NAND-flash specific file system. 
 *
 * Copyright (C) 2002 Aleph One Ltd.
 *   for Toby Churchill Ltd and Brightstar Engineering
 *
 * Created by Charles Manning <charles@aleph1.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * $Id: yaffs_tagsvalidity.h 1.1 2008/01/02 14:44:01Z afishman Exp $
 */
//yaffs_tagsvalidity.h

#ifndef __YAFFS_TAGS_VALIDITY_H__
#define __YAFFS_TAGS_VALIDITY_H__

#include "yaffs_guts.h"

//void yaffs_InitialiseTags(yaffs_ExtendedTags * tags);
int yaffs_ValidateTags(yaffs_ExtendedTags * tags);
#endif
