function main() {
    var n = parseInt(prompt("Escribe el # de niveles"));
    for(var i = 0; i < n; i++) {
        var p = document.createElement('p');
        // <p> hola </p>
        for (var j = 0; j <= i; j++) {
            p.innerHTML += calcularCombinatoria(i, j) + " ";
        }
        document.body.append(p);
    }
}

function calcularCombinatoria(n, r) {
    var res = factorial(n) / (factorial(r) * factorial(n-r));
    return res;
}

function factorial(num) {
    var resultado = 1;
    for (var i = 2; i <= num; i++) {
        resultado = resultado * i;
    }
    return resultado;
}
