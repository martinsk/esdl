/*
 *  Copyright (c) 2001 Dan Gudmundsson
 *  See the file "license.terms" for information on usage and redistribution
 *  of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 * 
 *     $Id$
 * Function pointers for sdl functions
 */

{ SDL_InitFunc, "SDL_InitFunc", es_init },
{ SDL_QuitFunc, "SDL_QuitFunc", es_quit },
{ SDL_GetErrorFunc, "SDL_GetErrorFunc", es_getError },
{ ESDL_OpenglInitFunc,  "ESDL_opengl_init", es_init_opengl},
{ SDL_SetVideoModeFunc, "SDL_SetVideoModeFunc",  es_setVideoMode },      
{ SDL_VideoDriverNameFunc, "SDL_VideoDriverNameFunc",  es_videoDriverName },      
{ SDL_GetVideoSurfaceFunc, "SDL_GetVideoSurfaceFunc",  es_getVideoSurface },
{ SDL_GetVideoInfoFunc, "SDL_GetVideoInfoFunc",     es_getVideoInfo },
{ SDL_VideoModeOKFunc, "SDL_VideoModeOKFunc",      es_videoModeOK },  
{ SDL_ListModesFunc, "SDL_ListModesFunc",        es_listModes },
{ SDL_SetColorKeyFunc, "SDL_SetColorKeyFunc",      es_setColorKey },
{ SDL_DisplayFormatFunc, "SDL_DisplayFormatFunc",    es_displayFormat },
{ SDL_BlitSurfaceFunc, "SDL_BlitSurfaceFunc",      es_blitSurface },
{ SDL_FillRectFunc, "SDL_FillRectFunc",         es_fillRect },
{ SDL_UpdateRectsFunc, "SDL_UpdateRectsFunc",      es_updateRects },
{ SDL_FlipFunc, "SDL_FlipFunc",             es_flip },
{ SDL_SetColorsFunc, "SDL_SetColorsFunc",        es_setColors },
{ SDL_MapRGBFunc, "SDL_MapRGBFunc",           es_mapRGB },
{ SDL_GetRGBFunc, "SDL_GetRGBFunc",           es_getRGB },
{ SDL_CreateRGBSurfaceFunc, "SDL_CreateRGBSurfaceFunc", es_createRGBSurface },
{ SDL_CreateRGBSurfaceFromFunc, "SDL_CreateRGBSurfaceFromFunc",  es_createRGBSurfaceFrom },
{ SDL_FreeSurfaceFunc, "SDL_FreeSurfaceFunc",      es_freeSurface },
{ SDL_LockSurfaceFunc, "SDL_LockSurfaceFunc",      es_lockSurface },
{ SDL_UnlockSurfaceFunc, "SDL_UnlockSurfaceFunc",    es_unlockSurface },
{ SDL_LoadBMPFunc, "SDL_LoadBMPFunc",    es_loadBMP },
{ SDL_SaveBMPFunc, "SDL_SaveBMPFunc",    es_saveBMP }, 
{ SDL_SetAlphaFunc, "SDL_SetAlphaFunc",    es_setAlpha }, 
/* { SDL_SetClippingFunc, "SDL_SetClippingFunc",    es_setClipping }, Removed */

{ SDL_SetGammaFunc,     "SDL_SetGamma",     es_setGamma },
{ SDL_SetGammaRampFunc, "SDL_SetGammaRamp", es_setGammaRamp },
{ SDL_GetGammaRampFunc, "SDL_GetGamma",     es_getGammaRamp },

{ SDL_MapRGBAFunc, "SDL_MapRGBAFunc",           es_mapRGBA },
{ SDL_GetRGBAFunc, "SDL_GetRGBAFunc", es_getRGBA},
{ SDL_GetClipRectFunc, "SDL_GetClipRectFunc", es_getClipRect},
{ SDL_SetClipRectFunc, "SDL_SetClipRectFunc", es_setClipRect},
{ SDL_DisplayFormatAlphaFunc, "SDL_DisplayFormatAlphaFunc", es_displayFormatAlpha},

{ SDL_WM_SetCaptionFunc, "SDL_WM_SetCaptionFunc", es_wm_setCaption },
{ SDL_WM_GetCaptionFunc, "SDL_WM_GetCaptionFunc", es_wm_getCaption },
{ SDL_WM_SetIconFunc, "SDL_WM_SetIconFunc",    es_wm_setIcon },
{ SDL_WM_IconifyWindowFunc, "SDL_WM_IconifyWindowFunc",    es_wm_iconifyWindow },
{ SDL_WM_ToggleFullScreenFunc, "SDL_WM_ToggleFullScreenFunc",    es_wm_toggleFullScreen },
{ SDL_WM_GrabInputFunc, "SDL_WM_GrabInputFunc",    es_wm_grabInput },
{ SDL_WM_GetInfoFunc, "SDL_WM_GetInfoFunc",     es_wm_getInfo },
{ SDL_WM_IsMaximizedFunc, "SDL_WM_IsMaximizedFunc",     es_wm_isMaximized },
{ SDL_WM_MaximizeFunc, "SDL_WM_MaximizeFunc",     es_wm_maximize },

   /** EVENT FUNCTIONS */
{ SDL_PumpEventsFunc, "SDL_PumpEventsFunc",  es_pumpEvents },
{ SDL_PeepEventsFunc, "SDL_PeepEventsFunc",    es_peepEvents },
{ SDL_PollEventFunc, "SDL_PollEventFunc",    es_pollEvent },
{ SDL_WaitEventFunc, "SDL_WaitEventFunc",    es_waitEvent },
{ SDL_EventStateFunc, "SDL_EventStateFunc",    es_eventState },
{ SDL_GetAppStateFunc, "SDL_GetAppStateFunc", es_getAppState },
{ SDL_GetModStateFunc, "SDL_GetModStateFunc", es_getModState },
{ SDL_SetModStateFunc, "SDL_SetModStateFunc", es_setModState },
{ SDL_GetKeyStateFunc, "SDL_GetKeyStateFunc", es_getKeyState },
{ SDL_EnableUNICODEFunc, "SDL_EnableUNICODEFunc", es_enableUNICODE },
{ SDL_GetKeyNameFunc, "SDL_GetKeyNameFunc",    es_getKeyName },
{ SDL_EnableKeyRepeatFunc, "SDL_EnableKeyRepeatFunc",    es_enableKeyRepeat },

   /* Mouse Functions */
{ SDL_GetMouseStateFunc, "SDL_GetMouseStateFunc",  es_getMouseState },
{ SDL_GetRelativeMouseStateFunc, "SDL_GetRelativeMouseStateFunc",    es_getRelativeMouseState },
{ SDL_WarpMouseFunc, "SDL_WarpMouseFunc",    es_warpMouse },
{ SDL_CreateCursorFunc, "SDL_CreateCursorFunc",    es_createCursor },
{ SDL_SetCursorFunc, "SDL_SetCursorFunc",    es_setCursor },   
{ SDL_GetCursorFunc, "SDL_GetCursorFunc",    es_getCursor },
{ SDL_FreeCursorFunc, "SDL_FreeCursorFunc",    es_freeCursor },
{ SDL_ShowCursorFunc, "SDL_ShowCursorFunc",    es_showCursor },

   /* Joystick functions */
{ SDL_NumJoysticksFunc, "SDL_NumJoysticksFunc", es_numJoysticks },
{ SDL_JoystickNameFunc, "SDL_JoystickNameFunc", es_joystick_name },
{ SDL_JoystickOpenFunc, "SDL_JoystickOpenFunc", es_joystick_open },
{ SDL_JoystickOpenedFunc, "SDL_JoystickOpenedFunc", es_joystick_opened },
{ SDL_JoystickIndexFunc, "SDL_JoystickIndexFunc", es_joystick_index },
{ SDL_JoystickNumAxesFunc, "SDL_JoystickNumAxesFunc", es_joystick_numAxes },
{ SDL_JoystickNumBallsFunc, "SDL_JoystickNumBallsFunc", es_joystick_numBalls },
{ SDL_JoystickNumHatsFunc, "SDL_JoystickNumHatsFunc", es_joystick_numHats },
{ SDL_JoystickNumButtonsFunc, "SDL_JoystickNumButtonsFunc", es_joystick_numButtons },
{ SDL_JoystickUpdateFunc, "SDL_JoystickUpdateFunc", es_joystick_update },
{ SDL_JoystickEventStateFunc, "SDL_JoystickEventStateFunc", es_joystick_eventState },
{ SDL_JoystickGetAxisFunc, "SDL_JoystickGetAxisFunc", es_joystick_getAxis },
{ SDL_JoystickGetHatFunc, "SDL_JoystickGetHatFunc", es_joystick_getHat },
{ SDL_JoystickGetButtonFunc, "SDL_JoystickGetButtonFunc", es_joystick_getButton },
{ SDL_JoystickGetBallFunc, "SDL_JoystickGetBallFunc", es_joystick_getBall },
{ SDL_JoystickCloseFunc, "SDL_JoystickCloseFunc", es_joystick_close },

   /* SDL open gl support funcs */
{ SDL_GL_SetAttributeFunc, "SDL_GL_SetAttributeFunc", es_gl_setAttribute },
{ SDL_GL_GetAttributeFunc, "SDL_GL_GetAttributeFunc",    es_gl_getAttribute },
{ SDL_GL_SwapBuffersFunc, "SDL_GL_SwapBuffersFunc",    es_gl_swapBuffers },

   /* Erl sdl functions */
{ ESDL_getSurfaceFunc, "ESDL_getSurfaceFunc",  es_getSurface },
{ ESDL_getPixelFormatFunc, "ESDL_getPixelFormatFunc",    es_getPixelFormat },
{ ESDL_getPaletteFunc, "ESDL_getPaletteFunc",    es_getPalette },
{ ESDL_getPixelsFunc, "ESDL_getPixelsFunc",    es_getPixels },
{ SDL_UTIL_copySdlImage2GLArrayFunc, "SDL_UTIL_copySdlImage2GLArrayFunc",    copySdlImage2GLArray },
{ SDL_UTIL_DebugFunc, "SDL_UTIL_DebugFunc", sdl_util_debug},

   /* SDL AUDIO functions */
{ SDL_AudioDriverNameFunc, "SDL_AudioDriverNameFunc", es_audioDriverName },
{ SDL_OpenAudioFunc, "SDL_OpenAudioFunc", es_openAudio },
{ SDL_GetAudioStatusFunc, "SDL_GetAudioStatusFunc",    es_getAudioStatus },
{ SDL_PauseAudioFunc, "SDL_PauseAudioFunc",    es_pauseAudio },
{ SDL_LoadWAVFunc, "SDL_LoadWAVFunc",    es_loadWAV },

{ SDL_FreeWAVFunc, "SDL_FreeWAVFunc",  es_freeWAV },
{ SDL_BuildAudioCVTFunc, "SDL_BuildAudioCVTFunc",    es_buildAudioCVT },
{ SDL_ConvertAudioFunc, "SDL_ConvertAudioFunc",    es_convertAudio },
{ SDL_MixAudioFunc, "SDL_MixAudioFunc",    es_mixAudio },
{ SDL_LockAudioFunc, "SDL_LockAudioFunc",    es_lockAudio },
{ SDL_UnlockAudioFunc, "SDL_UnlockAudioFunc",    es_unlockAudio },
{ SDL_CloseAudioFunc, "SDL_CloseAudioFunc",    es_closeAudio },
{ play_audioFunc, "play_audioFunc",    play_audio },

/*  MY GL memory handling funcs */
{ mygl_allocFunc, "mygl_allocFunc", mygl_alloc },
{ mygl_writeFunc, "mygl_writeFunc", mygl_write },

/* SDL TTF functions */
#ifdef _USE_SDL_TTF
{ SDL_TTF_Linked_VersionFunc, "SDL_TTF_Linked_VersionFunc", es_ttf_linkedVersion },
{ SDL_TTF_ByteSwappedUNICODEFunc, "SDL_TTF_ByteSwappedUNICODEFunc", es_ttf_byteSwappedUNICODE },
{ SDL_TTF_InitFunc, "SDL_TTF_InitFunc", es_ttf_init },
{ SDL_TTF_OpenFontFunc, "SDL_TTF_OpenFontFunc", es_ttf_openFont },
{ SDL_TTF_OpenFontIndexFunc, "SDL_TTF_OpenFontIndexFunc", es_ttf_openFontIndex },
{ SDL_TTF_OpenFontRWFunc, "SDL_TTF_OpenFontRWFunc", es_ttf_openFontRW },
{ SDL_TTF_OpenFontIndexRWFunc, "SDL_TTF_OpenFontIndexRWFunc", es_ttf_openFontIndexRW },
{ SDL_TTF_GetFontStyleFunc, "SDL_TTF_GetFontStyleFunc", es_ttf_getFontStyle },
{ SDL_TTF_SetFontStyleFunc, "SDL_TTF_SetFontStyleFunc", es_ttf_setFontStyle },
{ SDL_TTF_FontHeightFunc, "SDL_TTF_FontHeightFunc", es_ttf_fontHeight },
{ SDL_TTF_FontAscentFunc, "SDL_TTF_FontAscentFunc", es_ttf_fontAscent },
{ SDL_TTF_FontDescentFunc, "SDL_TTF_FontDescentFunc", es_ttf_fontDescent },
{ SDL_TTF_FontLineSkipFunc, "SDL_TTF_FontLineSkipFunc", es_ttf_fontLineSkip },
{ SDL_TTF_FontFacesFunc, "SDL_TTF_FontFacesFunc", es_ttf_fontFaces },
{ SDL_TTF_FontFaceIsFixedWidthFunc, "SDL_TTF_FontFaceIsFixedWidthFunc", es_ttf_fontFaceIsFixedWidth },
{ SDL_TTF_FontFaceFamilyNameFunc, "SDL_TTF_FontFaceFamilyNameFunc", es_ttf_fontFaceFamilyName },
{ SDL_TTF_FontFaceStyleNameFunc, "SDL_TTF_FontFaceStyleNameFunc", es_ttf_fontFaceStyleName },
{ SDL_TTF_GlyphMetricsFunc, "SDL_TTF_GlyphMetricsFunc", es_ttf_glyphMetrics },
{ SDL_TTF_SizeTextFunc, "SDL_TTF_SizeTextFunc", es_ttf_sizeText },
{ SDL_TTF_SizeUTF8Func, "SDL_TTF_SizeUTF8Func", es_ttf_sizeUTF8 },
{ SDL_TTF_SizeUNICODEFunc, "SDL_TTF_SizeUNICODEFunc", es_ttf_sizeUNICODE },
{ SDL_TTF_RenderText_SolidFunc, "SDL_TTF_RenderText_SolidFunc", es_ttf_renderTextSolid },
{ SDL_TTF_RenderUTF8_SolidFunc, "SDL_TTF_RenderUTF8_SolidFunc", es_ttf_renderUTF8Solid },
{ SDL_TTF_RenderUNICODE_SolidFunc, "SDL_TTF_RenderUNICODE_SolidFunc", es_ttf_renderUNICODESolid },
{ SDL_TTF_RenderGlyph_SolidFunc, "SDL_TTF_RenderGlyph_SolidFunc", es_ttf_renderGlyphSolid },
{ SDL_TTF_RenderText_ShadedFunc, "SDL_TTF_RenderText_ShadedFunc", es_ttf_renderTextShaded },
{ SDL_TTF_RenderUTF8_ShadedFunc, "SDL_TTF_RenderUTF8_ShadedFunc", es_ttf_renderUTF8Shaded },
{ SDL_TTF_RenderUNICODE_ShadedFunc, "SDL_TTF_RenderUNICODE_ShadedFunc", es_ttf_renderUNICODEShaded },
{ SDL_TTF_RenderGlyph_ShadedFunc, "SDL_TTF_RenderGlyph_ShadedFunc", es_ttf_renderGlyphShaded },
{ SDL_TTF_RenderText_BlendedFunc, "SDL_TTF_RenderText_BlendedFunc", es_ttf_renderTextBlended },
{ SDL_TTF_RenderUTF8_BlendedFunc, "SDL_TTF_RenderUTF8_BlendedFunc", es_ttf_renderUTF8Blended },
{ SDL_TTF_RenderUNICODE_BlendedFunc, "SDL_TTF_RenderUNICODE_BlendedFunc", es_ttf_renderUNICODEBlended },
{ SDL_TTF_RenderGlyph_BlendedFunc, "SDL_TTF_RenderGlyph_BlendedFunc", es_ttf_renderGlyphBlended },
{ SDL_TTF_CloseFontFunc, "SDL_TTF_CloseFontFunc", es_ttf_closeFont },
{ SDL_TTF_QuitFunc, "SDL_TTF_QuitFunc", es_ttf_quit },
{ SDL_TTF_WasInitFunc, "SDL_TTF_WasInitFunc", es_ttf_wasInit },
{ SDL_TTF_SetErrorFunc, "SDL_TTF_SetErrorFunc", es_ttf_setError },
{ SDL_TTF_GetErrorFunc, "SDL_TTF_GetErrorFunc", es_ttf_getError },
#endif /*_USE_SDL_TTF */

/* SDL image functions */
#ifdef _USE_SDL_IMAGE
{ SDL_IMG_LinkedVersionFunc, "SDL_IMG_LinkedVersionFunc", es_img_linkedVersion },
{ SDL_IMG_LoadTypedRWFunc, "SDL_IMG_LoadTypedRWFunc", es_img_loadTypedRW },
{ SDL_IMG_LoadFunc, "SDL_IMG_LoadFunc", es_img_load },
{ SDL_IMG_LoadRWFunc, "SDL_IMG_LoadRWFunc", es_img_loadRW },
{ SDL_IMG_InvertAlphaFunc, "SDL_IMG_InvertAlphaFunc", es_img_invertAlpha },
{ SDL_IMG_isBMPFunc, "SDL_IMG_isBMPFunc", es_img_isBMP },
{ SDL_IMG_isPNMFunc, "SDL_IMG_isPNMFunc", es_img_isPNM },
{ SDL_IMG_isXPMFunc, "SDL_IMG_isXPMFunc", es_img_isXPM },
{ SDL_IMG_isXCFFunc, "SDL_IMG_isXCFFunc", es_img_isXCF },
{ SDL_IMG_isPCXFunc, "SDL_IMG_isPCXFunc", es_img_isPCX },
{ SDL_IMG_isGIFFunc, "SDL_IMG_isGIFFunc", es_img_isGIF },
{ SDL_IMG_isJPGFunc, "SDL_IMG_isJPGFunc", es_img_isJPG },
{ SDL_IMG_isTIFFunc, "SDL_IMG_isTIFFunc", es_img_isTIF },
{ SDL_IMG_isPNGFunc, "SDL_IMG_isPNGFunc", es_img_isPNG },
{ SDL_IMG_isLBMFunc, "SDL_IMG_isLBMFunc", es_img_isLBM },
{ SDL_IMG_LoadBMPRWFunc, "SDL_IMG_LoadBMPRWFunc", es_img_loadBMPRW },
{ SDL_IMG_LoadPNMRWFunc, "SDL_IMG_LoadPNMRWFunc", es_img_loadPNMRW },
{ SDL_IMG_LoadXPMRWFunc, "SDL_IMG_LoadXPMRWFunc", es_img_loadXPMRW },
{ SDL_IMG_LoadXCFRWFunc, "SDL_IMG_LoadXCFRWFunc", es_img_loadXCFRW },
{ SDL_IMG_LoadPCXRWFunc, "SDL_IMG_LoadPCXRWFunc", es_img_loadPCXRW },
{ SDL_IMG_LoadGIFRWFunc, "SDL_IMG_LoadGIFRWFunc", es_img_loadGIFRW },
{ SDL_IMG_LoadJPGRWFunc, "SDL_IMG_LoadJPGRWFunc", es_img_loadJPGRW },
{ SDL_IMG_LoadTIFRWFunc, "SDL_IMG_LoadTIFRWFunc", es_img_loadTIFRW },
{ SDL_IMG_LoadPNGRWFunc, "SDL_IMG_LoadPNGRWFunc", es_img_loadPNGRW },
{ SDL_IMG_LoadTGARWFunc, "SDL_IMG_LoadTGARWFunc", es_img_loadTGARW },
{ SDL_IMG_LoadLBMRWFunc, "SDL_IMG_LoadLBMRWFunc", es_img_loadLBMRW },
{ SDL_IMG_ReadXPMFromArrayFunc, "SDL_IMG_ReadXPMFromArrayFunc", es_img_readXPMFromArray },
{ SDL_IMG_SetErrorFunc, "SDL_IMG_SetErrorFunc", es_img_setError },
{ SDL_IMG_GetErrorFunc, "SDL_IMG_GetErrorFunc", es_img_getError },
#endif /* _USE_SDL_IMAGE */
