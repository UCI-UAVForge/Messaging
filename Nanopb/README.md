Protobuf implementation compiled using [Nanopb](http://koti.kapsi.fi/~jpa/nanopb/).

The included source files in this directory should be fully functional.

Steps to compile on Windows:
 - If not already installed, install Python 2.x
 - Download the latest stable Windows release of Nanopb
 - Run `<Nanopb>/generator-bin/protoc --version` and note the version of Protobuf used
 - Download the matching Protobuf release from [GitHub](https://github.com/google/protobuf/releases)
 - Copy the entire `<protobuf>/python` folder to `<Nanopb>/generator`
 - From the `<Nanopb>/generator-bin` folder, run `protoc -oPacket.pb Packet.proto`
 - From the `<Nanopb>/generator-bin` folder, run `../generator/nanopb_generator.py Packet.pb`
 - Copy the resulting `Packet.pb.h` and `Packet.pb.c` files, along with the `pb*.[hc]` files in the root Nanopb directory into the destination folder.

