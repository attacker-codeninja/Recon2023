#pragma once

#define IOCTL_OPEN_PROCESS \
	CTL_CODE(0x8000, 0x800, METHOD_BUFFERED, FILE_ANY_ACCESS)