import { $ } from "bun";

const args = {
  fileName:
    process.argv
      .find((arg) => arg.startsWith("--file=") || arg.startsWith("-f="))
      ?.split("=")[1] || "100",
};

if (args.fileName.length === 0) {
    console.error("No file selected");
    process.exit(1);
}

process.stdout.write("Buidling...\n")
    try {
        process.stdout.write((await $`/usr/bin/clang -fcolor-diagnostics -fansi-escape-codes -g /Users/howard/code_base/sch_c/code/${args.fileName}.c -o /Users/howard/code_base/sch_c/code/dist/${args.fileName}`).stdout)
    } catch (e) {
        console.error(e);
        process.exit(1);
    }

process.stdout.write("Running!")
try {
    process.stdout.write((await $`dist/${args.fileName}`).stdout)
} catch (e) {
            console.error(e);
        process.exit(1);
}