/*
 * Copyright (C) 2004-2012 Geometer Plus <contact@geometerplus.com>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef __ZTXTSTREAM_H__
#define __ZTXTSTREAM_H__

#include <ZLInputStream.h>

#include "PdbStream.h"

class ZLFile;

class ZTXTStream : public PdbStream {

public:
	ZTXTStream(const ZLFile &file);
	~ZTXTStream();
	bool open();

private:
	bool fillBuffer();

private:
	std::size_t myMaxRecordIndex;
	unsigned short myMaxRecordSize;
	std::size_t myRecordIndex;
};

#endif /* __ZTXTSTREAM_H__ */
