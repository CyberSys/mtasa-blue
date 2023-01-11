// Do not edit this file manually because it has been generated by generator.cpp

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <array>

extern "C" std::array<FARPROC, 193> functions{};

void SetupLibraryExports(HMODULE handle) noexcept
{
    functions[0] = GetProcAddress(handle, "CloseDriver");
    functions[1] = GetProcAddress(handle, "DefDriverProc");
    functions[2] = GetProcAddress(handle, "DriverCallback");
    functions[3] = GetProcAddress(handle, "DrvGetModuleHandle");
    functions[4] = GetProcAddress(handle, "GetDriverModuleHandle");
    functions[5] = GetProcAddress(handle, "NotifyCallbackData");
    functions[6] = GetProcAddress(handle, "OpenDriver");
    functions[7] = GetProcAddress(handle, "PlaySound");
    functions[8] = GetProcAddress(handle, "PlaySoundA");
    functions[9] = GetProcAddress(handle, "PlaySoundW");
    functions[10] = GetProcAddress(handle, "SendDriverMessage");
    functions[11] = GetProcAddress(handle, "WOW32DriverCallback");
    functions[12] = GetProcAddress(handle, "WOW32ResolveMultiMediaHandle");
    functions[13] = GetProcAddress(handle, "WOWAppExit");
    functions[14] = GetProcAddress(handle, "aux32Message");
    functions[15] = GetProcAddress(handle, "auxGetDevCapsA");
    functions[16] = GetProcAddress(handle, "auxGetDevCapsW");
    functions[17] = GetProcAddress(handle, "auxGetNumDevs");
    functions[18] = GetProcAddress(handle, "auxGetVolume");
    functions[19] = GetProcAddress(handle, "auxOutMessage");
    functions[20] = GetProcAddress(handle, "auxSetVolume");
    functions[21] = GetProcAddress(handle, "joy32Message");
    functions[22] = GetProcAddress(handle, "joyConfigChanged");
    functions[23] = GetProcAddress(handle, "joyGetDevCapsA");
    functions[24] = GetProcAddress(handle, "joyGetDevCapsW");
    functions[25] = GetProcAddress(handle, "joyGetNumDevs");
    functions[26] = GetProcAddress(handle, "joyGetPos");
    functions[27] = GetProcAddress(handle, "joyGetPosEx");
    functions[28] = GetProcAddress(handle, "joyGetThreshold");
    functions[29] = GetProcAddress(handle, "joyReleaseCapture");
    functions[30] = GetProcAddress(handle, "joySetCapture");
    functions[31] = GetProcAddress(handle, "joySetThreshold");
    functions[32] = GetProcAddress(handle, "mci32Message");
    functions[33] = GetProcAddress(handle, "mciDriverNotify");
    functions[34] = GetProcAddress(handle, "mciDriverYield");
    functions[35] = GetProcAddress(handle, "mciExecute");
    functions[36] = GetProcAddress(handle, "mciFreeCommandResource");
    functions[37] = GetProcAddress(handle, "mciGetCreatorTask");
    functions[38] = GetProcAddress(handle, "mciGetDeviceIDA");
    functions[39] = GetProcAddress(handle, "mciGetDeviceIDFromElementIDA");
    functions[40] = GetProcAddress(handle, "mciGetDeviceIDFromElementIDW");
    functions[41] = GetProcAddress(handle, "mciGetDeviceIDW");
    functions[42] = GetProcAddress(handle, "mciGetDriverData");
    functions[43] = GetProcAddress(handle, "mciGetErrorStringA");
    functions[44] = GetProcAddress(handle, "mciGetErrorStringW");
    functions[45] = GetProcAddress(handle, "mciGetYieldProc");
    functions[46] = GetProcAddress(handle, "mciLoadCommandResource");
    functions[47] = GetProcAddress(handle, "mciSendCommandA");
    functions[48] = GetProcAddress(handle, "mciSendCommandW");
    functions[49] = GetProcAddress(handle, "mciSendStringA");
    functions[50] = GetProcAddress(handle, "mciSendStringW");
    functions[51] = GetProcAddress(handle, "mciSetDriverData");
    functions[52] = GetProcAddress(handle, "mciSetYieldProc");
    functions[53] = GetProcAddress(handle, "mid32Message");
    functions[54] = GetProcAddress(handle, "midiConnect");
    functions[55] = GetProcAddress(handle, "midiDisconnect");
    functions[56] = GetProcAddress(handle, "midiInAddBuffer");
    functions[57] = GetProcAddress(handle, "midiInClose");
    functions[58] = GetProcAddress(handle, "midiInGetDevCapsA");
    functions[59] = GetProcAddress(handle, "midiInGetDevCapsW");
    functions[60] = GetProcAddress(handle, "midiInGetErrorTextA");
    functions[61] = GetProcAddress(handle, "midiInGetErrorTextW");
    functions[62] = GetProcAddress(handle, "midiInGetID");
    functions[63] = GetProcAddress(handle, "midiInGetNumDevs");
    functions[64] = GetProcAddress(handle, "midiInMessage");
    functions[65] = GetProcAddress(handle, "midiInOpen");
    functions[66] = GetProcAddress(handle, "midiInPrepareHeader");
    functions[67] = GetProcAddress(handle, "midiInReset");
    functions[68] = GetProcAddress(handle, "midiInStart");
    functions[69] = GetProcAddress(handle, "midiInStop");
    functions[70] = GetProcAddress(handle, "midiInUnprepareHeader");
    functions[71] = GetProcAddress(handle, "midiOutCacheDrumPatches");
    functions[72] = GetProcAddress(handle, "midiOutCachePatches");
    functions[73] = GetProcAddress(handle, "midiOutClose");
    functions[74] = GetProcAddress(handle, "midiOutGetDevCapsA");
    functions[75] = GetProcAddress(handle, "midiOutGetDevCapsW");
    functions[76] = GetProcAddress(handle, "midiOutGetErrorTextA");
    functions[77] = GetProcAddress(handle, "midiOutGetErrorTextW");
    functions[78] = GetProcAddress(handle, "midiOutGetID");
    functions[79] = GetProcAddress(handle, "midiOutGetNumDevs");
    functions[80] = GetProcAddress(handle, "midiOutGetVolume");
    functions[81] = GetProcAddress(handle, "midiOutLongMsg");
    functions[82] = GetProcAddress(handle, "midiOutMessage");
    functions[83] = GetProcAddress(handle, "midiOutOpen");
    functions[84] = GetProcAddress(handle, "midiOutPrepareHeader");
    functions[85] = GetProcAddress(handle, "midiOutReset");
    functions[86] = GetProcAddress(handle, "midiOutSetVolume");
    functions[87] = GetProcAddress(handle, "midiOutShortMsg");
    functions[88] = GetProcAddress(handle, "midiOutUnprepareHeader");
    functions[89] = GetProcAddress(handle, "midiStreamClose");
    functions[90] = GetProcAddress(handle, "midiStreamOpen");
    functions[91] = GetProcAddress(handle, "midiStreamOut");
    functions[92] = GetProcAddress(handle, "midiStreamPause");
    functions[93] = GetProcAddress(handle, "midiStreamPosition");
    functions[94] = GetProcAddress(handle, "midiStreamProperty");
    functions[95] = GetProcAddress(handle, "midiStreamRestart");
    functions[96] = GetProcAddress(handle, "midiStreamStop");
    functions[97] = GetProcAddress(handle, "mixerClose");
    functions[98] = GetProcAddress(handle, "mixerGetControlDetailsA");
    functions[99] = GetProcAddress(handle, "mixerGetControlDetailsW");
    functions[100] = GetProcAddress(handle, "mixerGetDevCapsA");
    functions[101] = GetProcAddress(handle, "mixerGetDevCapsW");
    functions[102] = GetProcAddress(handle, "mixerGetID");
    functions[103] = GetProcAddress(handle, "mixerGetLineControlsA");
    functions[104] = GetProcAddress(handle, "mixerGetLineControlsW");
    functions[105] = GetProcAddress(handle, "mixerGetLineInfoA");
    functions[106] = GetProcAddress(handle, "mixerGetLineInfoW");
    functions[107] = GetProcAddress(handle, "mixerGetNumDevs");
    functions[108] = GetProcAddress(handle, "mixerMessage");
    functions[109] = GetProcAddress(handle, "mixerOpen");
    functions[110] = GetProcAddress(handle, "mixerSetControlDetails");
    functions[111] = GetProcAddress(handle, "mmDrvInstall");
    functions[112] = GetProcAddress(handle, "mmGetCurrentTask");
    functions[113] = GetProcAddress(handle, "mmTaskBlock");
    functions[114] = GetProcAddress(handle, "mmTaskCreate");
    functions[115] = GetProcAddress(handle, "mmTaskSignal");
    functions[116] = GetProcAddress(handle, "mmTaskYield");
    functions[117] = GetProcAddress(handle, "mmioAdvance");
    functions[118] = GetProcAddress(handle, "mmioAscend");
    functions[119] = GetProcAddress(handle, "mmioClose");
    functions[120] = GetProcAddress(handle, "mmioCreateChunk");
    functions[121] = GetProcAddress(handle, "mmioDescend");
    functions[122] = GetProcAddress(handle, "mmioFlush");
    functions[123] = GetProcAddress(handle, "mmioGetInfo");
    functions[124] = GetProcAddress(handle, "mmioInstallIOProcA");
    functions[125] = GetProcAddress(handle, "mmioInstallIOProcW");
    functions[126] = GetProcAddress(handle, "mmioOpenA");
    functions[127] = GetProcAddress(handle, "mmioOpenW");
    functions[128] = GetProcAddress(handle, "mmioRead");
    functions[129] = GetProcAddress(handle, "mmioRenameA");
    functions[130] = GetProcAddress(handle, "mmioRenameW");
    functions[131] = GetProcAddress(handle, "mmioSeek");
    functions[132] = GetProcAddress(handle, "mmioSendMessage");
    functions[133] = GetProcAddress(handle, "mmioSetBuffer");
    functions[134] = GetProcAddress(handle, "mmioSetInfo");
    functions[135] = GetProcAddress(handle, "mmioStringToFOURCCA");
    functions[136] = GetProcAddress(handle, "mmioStringToFOURCCW");
    functions[137] = GetProcAddress(handle, "mmioWrite");
    functions[138] = GetProcAddress(handle, "mmsystemGetVersion");
    functions[139] = GetProcAddress(handle, "mod32Message");
    functions[140] = GetProcAddress(handle, "mxd32Message");
    functions[141] = GetProcAddress(handle, "sndPlaySoundA");
    functions[142] = GetProcAddress(handle, "sndPlaySoundW");
    functions[143] = GetProcAddress(handle, "tid32Message");
    functions[144] = GetProcAddress(handle, "timeBeginPeriod");
    functions[145] = GetProcAddress(handle, "timeEndPeriod");
    functions[146] = GetProcAddress(handle, "timeGetDevCaps");
    functions[147] = GetProcAddress(handle, "timeGetSystemTime");
    functions[148] = GetProcAddress(handle, "timeGetTime");
    functions[149] = GetProcAddress(handle, "timeKillEvent");
    functions[150] = GetProcAddress(handle, "timeSetEvent");
    functions[151] = GetProcAddress(handle, "waveInAddBuffer");
    functions[152] = GetProcAddress(handle, "waveInClose");
    functions[153] = GetProcAddress(handle, "waveInGetDevCapsA");
    functions[154] = GetProcAddress(handle, "waveInGetDevCapsW");
    functions[155] = GetProcAddress(handle, "waveInGetErrorTextA");
    functions[156] = GetProcAddress(handle, "waveInGetErrorTextW");
    functions[157] = GetProcAddress(handle, "waveInGetID");
    functions[158] = GetProcAddress(handle, "waveInGetNumDevs");
    functions[159] = GetProcAddress(handle, "waveInGetPosition");
    functions[160] = GetProcAddress(handle, "waveInMessage");
    functions[161] = GetProcAddress(handle, "waveInOpen");
    functions[162] = GetProcAddress(handle, "waveInPrepareHeader");
    functions[163] = GetProcAddress(handle, "waveInReset");
    functions[164] = GetProcAddress(handle, "waveInStart");
    functions[165] = GetProcAddress(handle, "waveInStop");
    functions[166] = GetProcAddress(handle, "waveInUnprepareHeader");
    functions[167] = GetProcAddress(handle, "waveOutBreakLoop");
    functions[168] = GetProcAddress(handle, "waveOutClose");
    functions[169] = GetProcAddress(handle, "waveOutGetDevCapsA");
    functions[170] = GetProcAddress(handle, "waveOutGetDevCapsW");
    functions[171] = GetProcAddress(handle, "waveOutGetErrorTextA");
    functions[172] = GetProcAddress(handle, "waveOutGetErrorTextW");
    functions[173] = GetProcAddress(handle, "waveOutGetID");
    functions[174] = GetProcAddress(handle, "waveOutGetNumDevs");
    functions[175] = GetProcAddress(handle, "waveOutGetPitch");
    functions[176] = GetProcAddress(handle, "waveOutGetPlaybackRate");
    functions[177] = GetProcAddress(handle, "waveOutGetPosition");
    functions[178] = GetProcAddress(handle, "waveOutGetVolume");
    functions[179] = GetProcAddress(handle, "waveOutMessage");
    functions[180] = GetProcAddress(handle, "waveOutOpen");
    functions[181] = GetProcAddress(handle, "waveOutPause");
    functions[182] = GetProcAddress(handle, "waveOutPrepareHeader");
    functions[183] = GetProcAddress(handle, "waveOutReset");
    functions[184] = GetProcAddress(handle, "waveOutRestart");
    functions[185] = GetProcAddress(handle, "waveOutSetPitch");
    functions[186] = GetProcAddress(handle, "waveOutSetPlaybackRate");
    functions[187] = GetProcAddress(handle, "waveOutSetVolume");
    functions[188] = GetProcAddress(handle, "waveOutUnprepareHeader");
    functions[189] = GetProcAddress(handle, "waveOutWrite");
    functions[190] = GetProcAddress(handle, "wid32Message");
    functions[191] = GetProcAddress(handle, "wod32Message");
    functions[192] = GetProcAddress(handle, LPCSTR(2));
}