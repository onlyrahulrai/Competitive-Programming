const numToGuess = Math.floor(Math.random() * 100);
let userInput = parseInt(prompt("Enter a number: "))
let chance = 1;

while (true) {
  if (userInput === numToGuess) {
    console.log(`You've taken ${chance} chances to gussed this number ${chance}`)
    break;
  }

  else if (userInput > numToGuess) {
    chance += 1;
    console.log("Too High ")
    userInput = parseInt(prompt("Try again: "))
  }

  else if (userInput < numToGuess) {
    chance += 1;
    console.log("Too Low ")
    userInput = parseInt(prompt("Try again: "))
  }
}