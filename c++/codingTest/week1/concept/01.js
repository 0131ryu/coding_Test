console.time("test");
let sum = 0;
for (let i = 0; i < 1000000; i++) {
  sum += 1;
}
console.timeEnd("test"); //node 01.js
