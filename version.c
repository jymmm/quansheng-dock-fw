
#ifdef ENABLE_DOCK
	#define VER		"0_32_8x"
#else
	#ifdef VERSION_STRING
		#define VER     " "VERSION_STRING
	#else
		#define VER     ""
	#endif
#endif

const char Version[]      = AUTHOR_STRING VER;
const char UART_Version[] = "UV-K5 Firmware, Open Edition, " AUTHOR_STRING VER "\r\n";

