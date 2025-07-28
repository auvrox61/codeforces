function solve(input) {
    var digits = input.match(/\d/g);
    digits.sort(function(a, b) {
        return a - b;
    });
    print(digits.join('+'));
}

(function() {
    var input = readline(); 
    solve(input);
})();

