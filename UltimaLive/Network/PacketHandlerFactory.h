/* @file
 *
 * Copyright(c) 2016 UltimaLive
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


#ifndef _PACKET_HANDLER_FACTORY_H
#define _PACKET_HANDLER_FACTORY_H

#include <map>
#include <stdint.h>
#include "BasePacketHandler.h"

/**
 * @class PacketHandlerFactory 
 *
 * @brief Abstract factory for packet handlers
 */
class PacketHandlerFactory
{
  public:
    static std::map<uint8_t, BasePacketHandler*> GenerateClientPacketHandlers (uint32_t versionMajor, uint32_t versionMinor, NetworkManager* pManager);
    static std::map<uint8_t, BasePacketHandler*> GenerateClientExtendedPacketHandlers (uint32_t versionMajor, uint32_t versionMinor, NetworkManager* pManager);
    static std::map<uint8_t, BasePacketHandler*> GenerateServerPacketHandlers (uint32_t versionMajor, uint32_t versionMinor, NetworkManager* pManager);
    static std::map<uint8_t, BasePacketHandler*> GenerateServerExtendedPacketHandlers (uint32_t versionMajor, uint32_t versionMinor, NetworkManager* pManager);
    static std::map<uint8_t, BasePacketHandler*> GenerateUltimaLiveServerPacketHandlers (uint32_t versionMajor, uint32_t versionMinor, NetworkManager* pManager);
};
#endif