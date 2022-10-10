// Global selections and variables
const colorDivs = document.querySelectorAll('.color');
const generateBtn = document.querySelector('.generate');
const sliders = document.querySelectorAll('input[type = "range"]');
const currentHexes = document.querySelectorAll(".color h2");
let initialColors;

// Functions

function generateHex(){
    // generating COMPLETELY random color
    const a = chroma.random();
    return a;
}

function randomColor(){
    colorDivs.forEach((div,index)=>{
        const hexText = div.children[0];   //getting h2 to maake it bit inverted color
        const randomColor = generateHex();

        //add color to bg
        div.style.backgroundColor = randomColor;
        hexText.innerText = randomColor;    //value... displaying that color
        //check for contrast
        checkTextContrast(randomColor,hexText);

        // Initial Color sliders
        const color = chroma(randomColor);
            //getting sliders
        const sliders = div.querySelectorAll(".sliders input");
        // console.log(sliders); use this

        const hue =  sliders[0];
        const brightness = sliders[1];
        const saturation = sliders[2];

        colorizeSliders(color,hue,brightness,saturation);
    });
}

function checkTextContrast(color,text){
    // it will tell how bright a collor is ranging from 0 to 10
    const luminance = chroma(color).luminance();
    if(luminance >0.5){
        text.style.color="black";
    } else {
        text.style.color = "white";
    }
}

function colorizeSliders(color,hue,brightness,saturation){
    // scale saturation
    const noSat = color.set('hsl.s',0);
    const fullSat = color.set('hsl.s',1);
    const scaleSat = chroma.scale([noSat,color,fullSat]);
    //Update Input Colors
    saturation.style.backgroundImage = `linear-gradient(to right, ${scaleSat(0)}, ${scaleSat(1)})`;
    
    // Scale brightness
    const midBright = color.set('hsl.l',0.5);
    const scaleBright = chroma.scale(["black",midBright,'white']);
    //Update Input Colors
    brightness.style.backgroundImage = `linear-gradient(to right, ${scaleBright(0)},${scaleBright(0.5)}, ${scaleBright(1)})`;
    
    // HUE slider updating 
    hue.style.backgroundImage = `linear-gradient(to right, rgb(204,75,75), rgb(204,204,75), rgb(75,204,75),rgb(75,304,204),rgb(75,75,204), rgb(204,75,204),rgb(204,75,75))`
}

randomColor();