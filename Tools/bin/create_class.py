#!/usr/bin/env python

import os
import os.path as path
import argparse


def create(class_name, hpp_file, cpp_file):
    hpp_content = ""
    hpp_content += f"#ifndef {class_name.upper()}_HPP\n"
    hpp_content += f"#define {class_name.upper()}_HPP\n"
    hpp_content += f"\n"
    hpp_content += f"class {class_name}\n"
    hpp_content += "{\n"
    hpp_content += f"public:\n"
    hpp_content += f"    {class_name}();\n"
    hpp_content += "};\n"
    hpp_content += f"#endif\n"
    hpp_content += f"\n"

    cpp_content = ""
    cpp_content += f'#include "{class_name}.hpp"\n'
    cpp_content += f"\n"
    cpp_content += f"{class_name}::{class_name}()\n"
    cpp_content += "{\n"
    cpp_content += "\n"
    cpp_content += "}\n"
    cpp_content += "\n"

    with open(hpp_file, "w+") as inc_file:
        inc_file.write(hpp_content)

    with open(cpp_file, "w+") as src_file:
        src_file.write(cpp_content)


def main(args):
    for name in args.names:
        class_name = name.strip().replace(" ", "_").replace("-", "_")
        abs_path = path.abspath(args.path)

        hpp_file = path.join(abs_path, "include", f"{class_name}.hpp")
        cpp_file = path.join(abs_path, "src", f"{class_name}.cpp")

        if args.rm:
            os.remove(hpp_file)
            os.remove(cpp_file)
        else:
            os.makedirs(path.join(abs_path, "include"), exist_ok=True)
            os.makedirs(path.join(abs_path, "src"), exist_ok=True)
            os.makedirs(path.join(abs_path, "test"), exist_ok=True)
            with open(path.join(abs_path, "test", "main.cpp"), "w+") as f:
                f.write("\n#include <memory>\n\nint main()\n{\n\n    return 0;\n}\n")
            with open(path.join(abs_path, "CMakeLists.txt"), "w+") as f:
                f.write(
                    f"include(../../cmake/BuildAndTest.cmake)\n"
                    f"build_and_test({path.basename(abs_path)})\n"
                )
            create(class_name, hpp_file, cpp_file)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("-rm", action="store_true", help="remove the source files")
    parser.add_argument("path", type=str, help="path above include/ and src/")
    parser.add_argument("names", type=str, nargs="*", help="names of the class")
    args = parser.parse_args()
    main(args)
