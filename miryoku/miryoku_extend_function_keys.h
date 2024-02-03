// Copyright 2024 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#if defined (MIRYOKU_EXTEND_FUNCTION_KEYS_YES)
  #define U_PSCRN &kp F15
  #define U_SLCK &kp F14
  #define U_PAUSE_BREAK &kp F13
#else
  #define U_PSCRN &kp PSCRN
  #define U_SLCK &kp SLCK
  #define U_PAUSE_BREAK &kp PAUSE_BREAK
#endif
