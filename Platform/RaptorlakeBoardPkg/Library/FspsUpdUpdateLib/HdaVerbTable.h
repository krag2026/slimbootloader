/** @file
  Realtek ALC897 HDA verb table for Slim Bootloader.
  Configured for 5 active jacks (Front & Rear) with Jack Detect Override enabled.
  Subsystem ID: 0x10EC0000
**/

#ifndef __HDA_VERB_TABLE_H__
#define __HDA_VERB_TABLE_H__

#define HDAUDIO_VERB_TABLE_INIT(Vid,Did,Rid,Sdi,...) \
{ \
  { Vid, Did, Rid, Sdi, (sizeof((UINT32[]){__VA_ARGS__})/sizeof(UINT32)) }, \
  { __VA_ARGS__ } \
}

typedef struct {
  UINT16  VendorId;
  UINT16  DeviceId;
  UINT8   RevisionId;
  UINT8   SdiNum;
  UINT16  DataDwords;
} PCH_HDA_VERB_TABLE_HEADER;

typedef struct {
  PCH_HDA_VERB_TABLE_HEADER  Header;
  UINT32 Data[];
} HDAUDIO_VERB_TABLE;

HDAUDIO_VERB_TABLE HdaVerbTableAlc897 = HDAUDIO_VERB_TABLE_INIT(
  0x10EC, 0x0897,
  0xFF, 0xFF,

  // Widget node 0x01 - Function Reset FIRST
  0x0017FF00,
  0x0017FF00,
  0x0017FF00,
  0x0017FF00,

  // HDA Codec Subsystem ID
  0x00172000,
  0x00172100,
  0x001722EC,
  0x00172310,

  // Pin widget 0x11 - S/PDIF-OUT2 (Disabled)
  0x01171C00,
  0x01171D00,
  0x01171E00,
  0x01171F40,

  // Pin widget 0x12 - DMIC (Disabled)
  0x01271CF0,
  0x01271D11,
  0x01271E11,
  0x01271F41,

  // Pin widget 0x14 - REAR LINE-OUT (Port-D) -> 0x01014110 (Always Connected)
  0x01471C10,
  0x01471D41,
  0x01471E01,
  0x01471F01,

  // Pin widget 0x15 - SURR (Port-A) (Disabled)
  0x01571CF0,
  0x01571D11,
  0x01571E11,
  0x01571F41,

  // Pin widget 0x16 - CEN/LFE (Port-G) (Disabled)
  0x01671CF0,
  0x01671D11,
  0x01671E11,
  0x01671F41,

  // Pin widget 0x17 - SIDESURR (Port-H) (Disabled)
  0x01771CF0,
  0x01771D11,
  0x01771E11,
  0x01771F41,

  // Pin widget 0x18 - FRONT AUX-IN (Port-B) -> 0x02811140 (Always Connected)
  0x01871C40,
  0x01871D11,
  0x01871E81,
  0x01871F02,

  // Pin widget 0x19 - FRONT LINE-IN (Port-F) -> 0x02813130 (Always Connected)
  0x01971C30,
  0x01971D31,
  0x01971E81,
  0x01971F02,

  // Pin widget 0x1A - REAR LINE-IN (Port-C) -> 0x01813120 (Always Connected)
  0x01A71C20,
  0x01A71D31,
  0x01A71E81,
  0x01A71F01,

  // Pin widget 0x1B - FRONT LINE-OUT (Port-E) -> 0x02014150 (Always Connected)
  0x01B71C50,
  0x01B71D41,
  0x01B71E01,
  0x01B71F02,

  // Pin widget 0x1C - CD-IN (Disabled)
  0x01C71CF0,
  0x01C71D11,
  0x01C71E11,
  0x01C71F41,

  // Pin widget 0x1D - BEEP-IN (Disabled)
  0x01D71C01,
  0x01D71DC0,
  0x01D71E22,
  0x01D71F40,

  // Pin widget 0x1E - S/PDIF-OUT1 (Disabled)
  0x01E71CF0,
  0x01E71D11,
  0x01E71E11,
  0x01E71F41,

  // Pin widget 0x1F - S/PDIF-IN (Disabled)
  0x01F71CF0,
  0x01F71D11,
  0x01F71E11,
  0x01F71F41
); // HdaVerbTableAlc897

#endif // __HDA_VERB_TABLE_H__
