# OOSMOS

## The Object-Oriented State Machine Operating System

1. Draw a hierarchical state machine.

2. Run the OOSMOS code generator to generate C code into an OOSMOS object.

3. Compile

4. Run

## Key Features

- Accepts hierarchical state machines drawn using the open source UML drawing package [UMLet](https://www.umlet.com/).

- Generates object-oriented C code from UMLet drawings.  Generated code is concise and easy to read.

- Powerful `state thread` feature gives you an instant thread of execution within each state.

- Dual Licenses
  - Open Source -- GPLv2
  - Commercial open source license without the GPLv2 restrictions. *Note: Code generator source code available to commercial licensees only.*

- Superior event management:
  - Event codes are managed locally within each object's class.
  - Events support argument passing.
  - Events are delivered in a Publish/Subscribe fashion.
  - Each object has its own event queue (if the object uses events).

- Supports orthogonal regions (also known as "and" states).

- OOSMOS's simple object structure promotes superior object-oriented encapsulation and information hiding.

- Very small footprint. Core code is comprised of only `oosmos.h` and `oosmos.c` which, together, are under `1700` `cloc`.

- Portable `c99` code runs on Windows, Linux, ST Micro, Arduino, ESP32, PIC32, and more.

- A core set of OOSMOS classes, such as `pin` (GPIO), `sw` (switch), `btn` (button) and `toggle` provided.

- Many time management capabilities and APIs.

- Extremely fast, constant-time memory allocation scheme, ideal for DO-178B/C.

- Code fully LINT'd using [PC-LINT](https://www.gimpel.com/).   An `oosmos-user.lnt` file is provided to allow you to cleanly lint your code that uses OOSMOS.

## Initial Set Up

Once you've cloned OOSMOS, some of the example directories for embedded devices may be incomplete.  In order to fully populate the `Examples` directories, you
must first run the Python script `populate.py` while in the top-level directory.

## Support

- Report bugs and feature requests here on GitHub.