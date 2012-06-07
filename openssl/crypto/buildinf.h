#ifndef MK1MF_BUILD
  /* auto-generated by Configure for crypto/cversion.c:
   * for Unix builds, crypto/Makefile.ssl generates functional definitions;
   * Windows builds (and other mk1mf builds) compile cversion.c with
   * -DMK1MF_BUILD and use definitions added to this file by util/mk1mf.pl. */
  #error "Windows builds (PLATFORM=BC-32) use mk1mf.pl-created Makefiles"
#endif
#ifdef MK1MF_PLATFORM_VC_WIN32
  /* auto-generated/updated by util/mk1mf.pl for crypto/cversion.c */
  #define CFLAGS "cl  /MD /Ox /O2 /Ob2 -DOPENSSL_THREADS  -DDSO_WIN32  -DOPENSSL_USE_APPLINK -I. -DOPENSSL_NO_RC5 -DOPENSSL_NO_MD2 -DOPENSSL_NO_KRB5 -DOPENSSL_NO_JPAKE -DOPENSSL_NO_STATIC_ENGINE    "
  #define PLATFORM "VC-WIN32"
  #define DATE "Sat May 12 19:49:46 2012"
#endif
#ifdef MK1MF_PLATFORM_BC_NT
  /* auto-generated/updated by util/mk1mf.pl for crypto/cversion.c */
  #define CFLAGS "bcc32 -DWIN32_LEAN_AND_MEAN -q -w-ccc -w-rch -w-pia -w-aus -w-par -w-inl  -c -tWC -tWM -DOPENSSL_SYSNAME_WIN32 -DL_ENDIAN -DDSO_WIN32 -D_stricmp=stricmp -D_strnicmp=strnicmp -O2 -ff -fp -DBN_ASM -DMD5_ASM -DSHA1_ASM -DRMD160_ASM -DOPENSSL_NO_RC5 -DOPENSSL_NO_MD2 -DOPENSSL_NO_KRB5 -DOPENSSL_NO_JPAKE -DOPENSSL_NO_DYNAMIC_ENGINE    "
  #define PLATFORM "BC-NT"
  #define DATE "Sat May 12 19:49:46 2012"
#endif
