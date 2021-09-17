var tratamento = [["febre", "corisa", "tosse", "dor_perna", "espirro"], ["espirro", "corisa", "tosse", "dor_perna", "febre"], ["febre", "dor_perna", "tosse", "corisa", "espirro"]]
var sintoma = ["febre", "espirro", "tosse", "dor_perna", "corisa"]
var score = 0
const resultado = []

for (j = 0; j < tratamento.length; j++) {

    for (i = 0; i < sintoma.length; i++) {
        if (tratamento[j].indexOf(sintoma[i]) == 0) {
            score += 6
            if (sintoma.indexOf(sintoma[i]) > 0) {
                score -= 5
                console.log("Debuffado -5")
            }
            console.log(score)
        } else if (tratamento[j].indexOf(sintoma[i]) == 1) {
            score += 5
            if (sintoma.indexOf(sintoma[i]) > 1) {
                score -= 4
                console.log("Debuffado -4")
            }
            console.log(score)
        } else if (tratamento[j].indexOf(sintoma[i]) == 2) {
            score += 4
            if (sintoma.indexOf(sintoma[i]) > 2) {
                score -= 3
                console.log("Debuffado -3")
            }
            console.log(score)
        } else if (tratamento[j].indexOf(sintoma[i]) == 3) {
            score += 3
            if (sintoma.indexOf(sintoma[i]) > 3) {
                score -= 2
                console.log("Debuffado -2")
            }
            console.log(score)
        } else if (tratamento[j].indexOf(sintoma[i]) == 4) {
            score += 2
            if (sintoma.indexOf(sintoma[i]) > 4) {
                score -= 1
                console.log("Debuffado -1")
            }
            console.log(score)
        }
    }
    resultado.push(score)
    score = 0
    console.log(resultado)
}

