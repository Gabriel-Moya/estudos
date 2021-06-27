const form = document.querySelector('#formulario');

form.addEventListener('submit', function(e){
    e.preventDefault();
    const inPeso = e.target.querySelector('#peso');
    const inAltura = e.target.querySelector('#altura');

    const peso = Number(inPeso.value);
    const altura = Number(inAltura.value);

    if (!peso) {
        setResultado('Peso inválido', false);
        return;
    }

    if (!altura) {
        setResultado('Altura inválida', false);
        return;
    }

    const imc = getImc(peso, altura);
    const nivelImc = getNivelImc(imc)

    const msg = `Seu IMC é ${imc} (${nivelImc})`

    setResultado(msg, true, nivelImc);
});

function getNivelImc (imc) {
    const nivel = ['Abaixo do peso', 'Peso normal', 'Sobrepeso', 'Obesidade grau 1', 'Obesidade grau 2', 'Obesidade grau 3'];

    if (imc >= 39.9) return nivel[5];
    if (imc >= 34.9) return nivel[4];
    if (imc >= 29.9) return nivel[3];
    if (imc >= 24.9) return nivel[2];
    if (imc >= 18.5) return nivel[1];
    if (imc < 18.5) return nivel[0];
}

function getImc(peso, altura) {
    const imc = (peso / (altura * altura))
    return imc.toFixed(2);
}

function criaP () {
    const p = document.createElement('p');
    return p;
}

function setResultado (msg, isValid, nivelAlerta) {
    const resultado = document.querySelector('#resultado');
    resultado.innerHTML = '';
    
    const p = criaP();

    if (!isValid) {
        p.classList.add('bad');
    }

    if (isValid && nivelAlerta == 'Abaixo do peso') {
        p.classList.add('baixo');
    } else if (isValid && nivelAlerta == 'Peso normal') {
        p.classList.add('paragrafo-resultado')
    } else if (isValid && nivelAlerta == 'Sobrepeso') {
        p.classList.add('sobrepeso')
    } else if (isValid && nivelAlerta == 'Obesidade grau 1') {
        p.classList.add('ob1')
    } else if (isValid && nivelAlerta == 'Obesidade grau 2') {
        p.classList.add('ob2')
    } else if (isValid && nivelAlerta == 'Obesidade grau 3') {
        p.classList.add('ob3')
    }

    p.innerHTML = msg;
    resultado.appendChild(p);
}