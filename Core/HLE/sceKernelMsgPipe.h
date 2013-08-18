// Copyright (c) 2012- PPSSPP Project.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2.0 or later versions.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License 2.0 for more details.

// A copy of the GPL 2.0 should have been included with the program.
// If not, see http://www.gnu.org/licenses/

// Official git repository and contact information can be found at
// https://github.com/hrydgard/ppsspp and http://www.ppsspp.org/.

#pragma once

int sceKernelCreateMsgPipe(const char *name, int partition, u32 attr, u32 size, u32 optionsPtr);
int sceKernelDeleteMsgPipe(SceUID uid);
void sceKernelSendMsgPipe();
void sceKernelSendMsgPipeCB();
void sceKernelTrySendMsgPipe();
void sceKernelReceiveMsgPipe();
void sceKernelReceiveMsgPipeCB();
void sceKernelTryReceiveMsgPipe();
int sceKernelCancelMsgPipe(SceUID uid, u32 numSendThreadsAddr, u32 numReceiveThreadsAddr);
void sceKernelReferMsgPipeStatus();

KernelObject *__KernelMsgPipeObject();
