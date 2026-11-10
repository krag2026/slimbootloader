/** @file
  Realtek ALC897 HDA verb table for Slim Bootloader.
  Converted from the supplied Realtek HD Audio Configuration v5.0.3.3.
  Subsystem ID: 0x10EC0000

  The old NID 0x20 vendor-specific verbs are intentionally not included,
  because they are absent from the newly supplied Realtek table.
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

  // HDA Codec Subsystem ID
  0x00172000,
  0x00172100,
  0x001722EC,
  0x00172310,

  // Widget node 0x01
  0x0017FF00,
  0x0017FF00,
  0x0017FF00,
  0x0017FF00,

  // Pin widget 0x11 - S/PDIF-OUT2
  0x01171C00,
  0x01171D00,
  0x01171E00,
  0x01171F40,

  // Pin widget 0x12 - DMIC
  0x01271CF0,
  0x01271D11,
  0x01271E11,
  0x01271F41,

  // Pin widget 0x14 - FRONT (Port-D)
  0x01471CF0,
  0x01471D11,
  0x01471E11,
  0x01471F41,

  // Pin widget 0x15 - SURR (Port-A)
  0x01571CF0,
  0x01571D11,
  0x01571E11,
  0x01571F41,

  // Pin widget 0x16 - CEN/LFE (Port-G)
  0x01671CF0,
  0x01671D11,
  0x01671E11,
  0x01671F41,

  // Pin widget 0x17 - SIDESURR (Port-H)
  0x01771CF0,
  0x01771D11,
  0x01771E11,
  0x01771F41,

  // Pin widget 0x18 - MIC1 (Port-B)
  0x01871CF0,
  0x01871D11,
  0x01871E11,
  0x01871F41,

  // Pin widget 0x19 - MIC2 (Port-F)
  0x01971C20,
  0x01971D10,
  0x01971EA1,
  0x01971F02,

  // Pin widget 0x1A - LINE1 (Port-C)
  0x01A71CF0,
  0x01A71D11,
  0x01A71E11,
  0x01A71F41,

  // Pin widget 0x1B - LINE2 (Port-E)
  0x01B71C10,
  0x01B71D10,
  0x01B71E21,
  0x01B71F02,

  // Pin widget 0x1C - CD-IN
  0x01C71CF0,
  0x01C71D11,
  0x01C71E11,
  0x01C71F41,

  // Pin widget 0x1D - BEEP-IN
  0x01D71C01,
  0x01D71DC0,
  0x01D71E22,
  0x01D71F40,

  // Pin widget 0x1E - S/PDIF-OUT1
  0x01E71CF0,
  0x01E71D11,
  0x01E71E11,
  0x01E71F41,

  // Pin widget 0x1F - S/PDIF-IN
  0x01F71CF0,
  0x01F71D11,
  0x01F71E11,
  0x01F71F41
); // HdaVerbTableAlc897

#endif // __HDA_VERB_TABLE_H__
