function main() {
    var n = parseInt(prompt("Escribe el orden del triángulo: "));
    var p;
    for (var i = 0; i <= n; i++) {
        p = document.createElement('p');
        for (var j = 0; j <= i; j++) {
		console.log(n + ", " + j);
            p.innerHTML += calcularCombinatoria(i, j) + " ";
        }
        document.body.appendChild(p);
    }
}

function calcularCombinatoria(n, r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

function factorial(num) {
    var rval = 1;
    for (var i = 2; i <= num; i++)
        rval = rval * i;
    return rval;
}
