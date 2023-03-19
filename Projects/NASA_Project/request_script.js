let searchButton = document.querySelector("#search")

//Add an event listener to the button that runs the function sendApiRequest when it is clicked
searchButton.addEventListener("click", ()=>{
  console.log("button pressed")
  sendApiRequest()
})


//An asynchronous function to fetch data from the API.
async function sendApiRequest(){
    let API_KEY = "T5C5hXDEdr4kTggZ96z7nrZ5SATnpNdH3vcLreZP"
    let response = await fetch(`https://api.nasa.gov/planetary/apod?api_key=${API_KEY}`);
    console.log(response)
    let data = await response.json()
    console.log(data)
    useApiData(data)
}


//function that does something with the data received from the API. The name of the function should be customized to whatever you are doing with the data
function useApiData(data){
    let img = new Image();
    img.src = data.url;
    document.getElementById("content").appendChild(img);
    document.querySelector("#text").innerHTML += data.explanation
    //document.querySelector("#picture").innerHTML += '<img src="${data.url}">'
    console.log(data.url)
}
