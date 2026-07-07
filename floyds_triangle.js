/*
 * Floyd's Triangle
 * ------------------
 * Logic: We keep a single running counter starting at 1.
 * For row i (1 to numRows), we print i numbers, incrementing
 * the counter after every number printed. This naturally produces
 * consecutive natural numbers arranged in a right-angled triangle.
 */

const readline = require("readline");

function printFloydsTriangle(numRows) {
    let counter = 1;

    for (let i = 1; i <= numRows; i++) {
        let rowStr = "";
        for (let j = 1; j <= i; j++) {
            rowStr += counter.toString().padStart(4, " ");
            counter++;
        }
        console.log(rowStr);
    }
}

function main() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question("Enter number of rows: ", (answer) => {
        const numRows = parseInt(answer, 10);

        if (isNaN(numRows) || numRows <= 0) {
            console.log("Number of rows must be positive.");
        } else {
            printFloydsTriangle(numRows);
        }

        rl.close();
    });
}

main();
