/* Copyright (c) 2017, Nordic Semiconductor ASA
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   1. Redistributions of source code must retain the above copyright notice, this
 *      list of conditions and the following disclaimer.
 *
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *
 *   3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *      contributors may be used to endorse or promote products derived from
 *      this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/**
 * @brief This module contains constant values definitions used by nRF 802.15.4 driver.
 *
 */

#ifndef NRF_DRV_RADIO802154_CONST_H_
#define NRF_DRV_RADIO802154_CONST_H_

#define ACK_HEADER_WITH_PENDING      0x12  // First byte of ACK frame containing pending bit
#define ACK_HEADER_WITHOUT_PENDING   0x02  // First byte of ACK frame without pending bit

#define ACK_LENGTH                   5         // Length of ACK frame
#define ACK_REQUEST_BIT              (1 << 5)  // Ack request bit
#define ACK_REQUEST_OFFSET           1         // Byte containing Ack request bit (+1 for frame length byte)
#define DEST_ADDR_TYPE_EXTENDED      0x0c      // Bits containing extended destination address type
#define DEST_ADDR_TYPE_MASK          0x0c      // Mask of bits containing destination address type
#define DEST_ADDR_TYPE_OFFSET        2         // Byte containing destination address type (+1 for frame length byte)
#define DEST_ADDR_TYPE_SHORT         0x08      // Bits containing short destination address type
#define DEST_ADDR_OFFSET             5         // Offset of destination address in Data frame
#define DSN_OFFSET                   3         // Byte containing DSN value (+1 for frame length byte)
#define FRAME_PENDING_BIT            (1 << 4)  // Pending bit
#define FRAME_PENDING_OFFSET         1         // Byte containing pending bit (+1 for frame length byte)
#define FRAME_TYPE_ACK               0x02      // Bits containing ACK frame type
#define FRAME_TYPE_BEACON            0x00      // Bits containing Beacon frame type
#define FRAME_TYPE_COMMAND           0x03      // Bits containing Command frame type
#define FRAME_TYPE_DATA              0x01      // Bits containing Data frame type
#define FRAME_TYPE_MASK              0x07      // Mask of bits containing frame type
#define FRAME_TYPE_OFFSET            1         // Byte containing frame type bits (+1 for frame length byte)
#define PAN_ID_COMPR_OFFSET          1         // Byte containing Pan Id compression bit (+1 for frame length byte)
#define PAN_ID_COMPR_MASK            0x40      // Pan Id compression bit
#define PAN_ID_OFFSET                3         // Offset of Pan Id in Data frame
#define SRC_ADDR_TYPE_EXTENDED       0xc0      // Bits containing extended source address type
#define SRC_ADDR_TYPE_MASK           0xc0      // Mask of bits containing source address type
#define SRC_ADDR_TYPE_OFFSET         2         // Byte containing source address type (+1 for frame length byte)
#define SRC_ADDR_TYPE_SHORT          0x80      // Bits containing short source address type
#define SRC_ADDR_OFFSET_SHORT_DST    8         // Offset of source address in Data frame if destination address is short
#define SRC_ADDR_OFFSET_EXTENDED_DST 14        // Offset of source address in Data frame if destination address is extended

#define CRC_LENGTH      2         // Length of CRC in 802.15.4 frames [bytes]
#define CRC_POLYNOMIAL  0x011021  // Polynomial used for CRC calculation in 802.15.4 frames

#define MHMU_MASK               0xff000700 // Mask of known bytes in ACK packet
#define MHMU_PATTERN            0x00000200 // Values of known bytes in ACK packet
#define MHMU_PATTERN_DSN_OFFSET 24         // Offset of DSN in MHMU_PATTER [bits]

#define PAN_ID_SIZE           2    // Size of Pan Id
#define SHORT_ADDRESS_SIZE    2    // Size of Short Mac Address
#define EXTENDED_ADDRESS_SIZE 8    // Size of Extended Mac Address
#define MAX_PACKET_SIZE       127  // Maximal size of radio packet


#endif // NRD_DRV_RADIO802154_CONST_H_
