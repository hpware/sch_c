let loopStatus: boolean = true;
let level = 1;
let resource = 100;

runMenu();
while (loopStatus) {
  process.stdin.on("data", (key) => {
    const keyStr = key.toString();
    switch (keyStr) {
      case "1":
        console.log("You chose option 1");
        setTimeout(runMenu, 1000);
        break;
      case "\u001b":
        loopStatus = false;
        process.exit();
        break;
    }
  });
}
function runMenu() {
  process.stdout.write(`Level= ${level}, Resource = ${resource}\n`);
  process.stdout.write(
    "1. Collect Resource.\n2. Enhance. \n3. Fight.\nEsc. Exit.\n",
  );
}
