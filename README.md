# teensy36_guard_error

Demo code to demonstrate an error when compiling with ArduinoIDE / Teensyduino 1.58 (gcc11) for Teensy3.6.

The error (see meassage below) can be worked around by adding "-fno-threadsafe-statics" as compiler option or adding explicit includes of "Arduino.h" to separate compilation units.

Original error message:
```
Using board 'teensy36' from platform in folder: ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1
Using core 'teensy3' from platform in folder: ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1

Detecting libraries used...
...\AppData\Local\Arduino15\packages\teensy\tools\teensy-compile\11.3.1/arm/bin/arm-none-eabi-g++ -E -CC -x c++ -w -g -Wall -ffunction-sections -fdata-sections -nostdlib -mno-unaligned-access -fno-exceptions -fpermissive -felide-constructors -std=gnu++14 -Wno-error=narrowing -fno-rtti -mthumb -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fsingle-precision-constant -D__MK66FX1M0__ -DTEENSYDUINO=158 -DARDUINO=10607 -DARDUINO_TEENSY36 -DF_CPU=180000000 -DUSB_SERIAL -DLAYOUT_US_ENGLISH -I...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3 ...\AppData\Local\Temp\arduino\sketches\B0F4333B3C77AA5E098263312712FC39\sketch\teensy36_guard_error.ino.cpp -o nul
Alternatives for SPI.h: [SPI@1.0]
ResolveLibrary(SPI.h)
  -> candidates: [SPI@1.0]
...\AppData\Local\Arduino15\packages\teensy\tools\teensy-compile\11.3.1/arm/bin/arm-none-eabi-g++ -E -CC -x c++ -w -g -Wall -ffunction-sections -fdata-sections -nostdlib -mno-unaligned-access -fno-exceptions -fpermissive -felide-constructors -std=gnu++14 -Wno-error=narrowing -fno-rtti -mthumb -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fsingle-precision-constant -D__MK66FX1M0__ -DTEENSYDUINO=158 -DARDUINO=10607 -DARDUINO_TEENSY36 -DF_CPU=180000000 -DUSB_SERIAL -DLAYOUT_US_ENGLISH -I...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3 -I...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\libraries\SPI ...\AppData\Local\Temp\arduino\sketches\B0F4333B3C77AA5E098263312712FC39\sketch\teensy36_guard_error.ino.cpp -o nul
...\AppData\Local\Arduino15\packages\teensy\tools\teensy-compile\11.3.1/arm/bin/arm-none-eabi-g++ -E -CC -x c++ -w -g -Wall -ffunction-sections -fdata-sections -nostdlib -mno-unaligned-access -fno-exceptions -fpermissive -felide-constructors -std=gnu++14 -Wno-error=narrowing -fno-rtti -mthumb -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fsingle-precision-constant -D__MK66FX1M0__ -DTEENSYDUINO=158 -DARDUINO=10607 -DARDUINO_TEENSY36 -DF_CPU=180000000 -DUSB_SERIAL -DLAYOUT_US_ENGLISH -I...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3 -I...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\libraries\SPI ...\AppData\Local\Temp\arduino\sketches\B0F4333B3C77AA5E098263312712FC39\sketch\Foo.cpp -o nul
Using cached library dependencies for file: ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\libraries\SPI\SPI.cpp
Generating function prototypes...
...\AppData\Local\Arduino15\packages\teensy\tools\teensy-compile\11.3.1/arm/bin/arm-none-eabi-g++ -E -CC -x c++ -w -g -Wall -ffunction-sections -fdata-sections -nostdlib -mno-unaligned-access -fno-exceptions -fpermissive -felide-constructors -std=gnu++14 -Wno-error=narrowing -fno-rtti -mthumb -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fsingle-precision-constant -D__MK66FX1M0__ -DTEENSYDUINO=158 -DARDUINO=10607 -DARDUINO_TEENSY36 -DF_CPU=180000000 -DUSB_SERIAL -DLAYOUT_US_ENGLISH -I...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3 -I...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\libraries\SPI ...\AppData\Local\Temp\arduino\sketches\B0F4333B3C77AA5E098263312712FC39\sketch\teensy36_guard_error.ino.cpp -o ...\AppData\Local\Temp\1437863926\sketch_merged.cpp
...\AppData\Local\Arduino15\packages\builtin\tools\ctags\5.8-arduino11/ctags -u --language-force=c++ -f - --c++-kinds=svpf --fields=KSTtzns --line-directives ...\AppData\Local\Temp\1437863926\sketch_merged.cpp
Compiling sketch...
"...\\AppData\\Local\\Arduino15\\packages\\teensy\\tools\\teensy-tools\\1.58.0/precompile_helper" "...\\AppData\\Local\\Arduino15\\packages\\teensy\\hardware\\avr\\1.58.1/cores/teensy3" "...\\AppData\\Local\\Temp\\arduino\\sketches\\B0F4333B3C77AA5E098263312712FC39" "...\\AppData\\Local\\Arduino15\\packages\\teensy\\tools\\teensy-compile\\11.3.1/arm/bin/arm-none-eabi-g++" -x c++-header -O2 -g -Wall -ffunction-sections -fdata-sections -nostdlib -mno-unaligned-access -MMD -fno-exceptions -fpermissive -felide-constructors -std=gnu++14 -Wno-error=narrowing -fno-rtti -mthumb -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fsingle-precision-constant -D__MK66FX1M0__ -DTEENSYDUINO=158 -DARDUINO=10607 -DARDUINO_TEENSY36 -DF_CPU=180000000 -DUSB_SERIAL -DLAYOUT_US_ENGLISH "-I...\\AppData\\Local\\Arduino15\\packages\\teensy\\hardware\\avr\\1.58.1/cores/teensy3" "...\\AppData\\Local\\Temp\\arduino\\sketches\\B0F4333B3C77AA5E098263312712FC39/pch/Arduino.h" -o "...\\AppData\\Local\\Temp\\arduino\\sketches\\B0F4333B3C77AA5E098263312712FC39/pch/Arduino.h.gch"
Using previously compiled file: ...\AppData\Local\Temp\arduino\sketches\B0F4333B3C77AA5E098263312712FC39\pch\Arduino.h.gch
"...\\AppData\\Local\\Arduino15\\packages\\teensy\\tools\\teensy-compile\\11.3.1/arm/bin/arm-none-eabi-g++" -c -O2 -g -Wall -ffunction-sections -fdata-sections -nostdlib -mno-unaligned-access -MMD -fno-exceptions -fpermissive -felide-constructors -std=gnu++14 -Wno-error=narrowing -fno-rtti -mthumb -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fsingle-precision-constant -D__MK66FX1M0__ -DTEENSYDUINO=158 -DARDUINO=10607 -DARDUINO_TEENSY36 -DF_CPU=180000000 -DUSB_SERIAL -DLAYOUT_US_ENGLISH "-I...\\AppData\\Local\\Temp\\arduino\\sketches\\B0F4333B3C77AA5E098263312712FC39/pch" "-I...\\AppData\\Local\\Arduino15\\packages\\teensy\\hardware\\avr\\1.58.1\\cores\\teensy3" "-I...\\AppData\\Local\\Arduino15\\packages\\teensy\\hardware\\avr\\1.58.1\\libraries\\SPI" "...\\AppData\\Local\\Temp\\arduino\\sketches\\B0F4333B3C77AA5E098263312712FC39\\sketch\\teensy36_guard_error.ino.cpp" -o "...\\AppData\\Local\\Temp\\arduino\\sketches\\B0F4333B3C77AA5E098263312712FC39\\sketch\\teensy36_guard_error.ino.cpp.o"
"...\\AppData\\Local\\Arduino15\\packages\\teensy\\tools\\teensy-compile\\11.3.1/arm/bin/arm-none-eabi-g++" -c -O2 -g -Wall -ffunction-sections -fdata-sections -nostdlib -mno-unaligned-access -MMD -fno-exceptions -fpermissive -felide-constructors -std=gnu++14 -Wno-error=narrowing -fno-rtti -mthumb -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fsingle-precision-constant -D__MK66FX1M0__ -DTEENSYDUINO=158 -DARDUINO=10607 -DARDUINO_TEENSY36 -DF_CPU=180000000 -DUSB_SERIAL -DLAYOUT_US_ENGLISH "-I...\\AppData\\Local\\Temp\\arduino\\sketches\\B0F4333B3C77AA5E098263312712FC39/pch" "-I...\\AppData\\Local\\Arduino15\\packages\\teensy\\hardware\\avr\\1.58.1\\cores\\teensy3" "-I...\\AppData\\Local\\Arduino15\\packages\\teensy\\hardware\\avr\\1.58.1\\libraries\\SPI" "...\\AppData\\Local\\Temp\\arduino\\sketches\\B0F4333B3C77AA5E098263312712FC39\\sketch\\Foo.cpp" -o "...\\AppData\\Local\\Temp\\arduino\\sketches\\B0F4333B3C77AA5E098263312712FC39\\sketch\\Foo.cpp.o"
In file included from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/Printable.h:25,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/Print.h:39,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/Stream.h:24,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/HardwareSerial.h:274,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/WProgram.h:47,
                 from ...\AppData\Local\Temp\arduino\sketches\B0F4333B3C77AA5E098263312712FC39/pch/Arduino.h:6,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\libraries\SPI/SPI.h:16,
                 from ...\Documents\Arduino\teensy36_guard_error\Foo.hpp:5,
                 from ...\Documents\Arduino\teensy36_guard_error\Foo.cpp:1:
...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/new.h:46:16: error: conflicting declaration of C function 'int __cxa_guard_acquire(__guard*)'
   46 | extern "C" int __cxa_guard_acquire(__guard *);
      |                ^~~~~~~~~~~~~~~~~~~
In file included from ...\Documents\Arduino\teensy36_guard_error\Foo.hpp:4,
                 from ...\Documents\Arduino\teensy36_guard_error\Foo.cpp:1:
...\Documents\Arduino\teensy36_guard_error\FooError.hpp:36:46: note: previous declaration 'int __cxa_guard_acquire(int*)'
   36 |     static detail::FooErrorCategory instance{};
      |                                              ^
In file included from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/Printable.h:25,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/Print.h:39,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/Stream.h:24,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/HardwareSerial.h:274,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/WProgram.h:47,
                 from ...\AppData\Local\Temp\arduino\sketches\B0F4333B3C77AA5E098263312712FC39/pch/Arduino.h:6,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\libraries\SPI/SPI.h:16,
                 from ...\Documents\Arduino\teensy36_guard_error\Foo.hpp:5,
                 from ...\Documents\Arduino\teensy36_guard_error\Foo.cpp:1:
...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/new.h:47:17: error: conflicting declaration of C function 'void __cxa_guard_release(__guard*)'
   47 | extern "C" void __cxa_guard_release (__guard *);
      |                 ^~~~~~~~~~~~~~~~~~~
In file included from ...\Documents\Arduino\teensy36_guard_error\Foo.hpp:4,
                 from ...\Documents\Arduino\teensy36_guard_error\Foo.cpp:1:
...\Documents\Arduino\teensy36_guard_error\FooError.hpp:36:46: note: previous declaration 'void __cxa_guard_release(int*)'
   36 |     static detail::FooErrorCategory instance{};
      |                                              ^
In file included from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/Printable.h:25,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/Print.h:39,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/Stream.h:24,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/HardwareSerial.h:274,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/WProgram.h:47,
                 from ...\AppData\Local\Temp\arduino\sketches\B0F4333B3C77AA5E098263312712FC39/pch/Arduino.h:6,
                 from ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\libraries\SPI/SPI.h:16,
                 from ...\Documents\Arduino\teensy36_guard_error\Foo.hpp:5,
                 from ...\Documents\Arduino\teensy36_guard_error\Foo.cpp:1:
...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\cores\teensy3/new.h:48:17: error: conflicting declaration of C function 'void __cxa_guard_abort(__guard*)'
   48 | extern "C" void __cxa_guard_abort (__guard *);
      |                 ^~~~~~~~~~~~~~~~~
In file included from ...\Documents\Arduino\teensy36_guard_error\Foo.hpp:4,
                 from ...\Documents\Arduino\teensy36_guard_error\Foo.cpp:1:
...\Documents\Arduino\teensy36_guard_error\FooError.hpp:36:46: note: previous declaration 'void __cxa_guard_abort(int*)'
   36 |     static detail::FooErrorCategory instance{};
      |                                              ^

Using library SPI at version 1.0 in folder: ...\AppData\Local\Arduino15\packages\teensy\hardware\avr\1.58.1\libraries\SPI 
exit status 1

Compilation error: exit status 1
```
