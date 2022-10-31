{       
        const tim = new Date();
        var hours =tim.getHours();
        var minute =tim.getMinutes();
        var seconds =tim.getSeconds();
        var div=document.getElementById("time");
        var day_night_or_sunny;
        var lop = function doooo() {
        if(hours<12){
                day_night_or_sunny = "AM";
        }
        else if(hours>12){
                day_night_or_sunny = "PM";
        }
        else {
                day_night_or_sunny = "PM";
        }
        div.innerHTML = " " + hours + ":" + minute + ":" + seconds + " " + day_night_or_sunny;
        }
        function  show_angle() {
                const allTime = document.querySelector("#tmo").value;
                let hour = parseInt(allTime[0]+allTime[1]);
                let minutes = parseInt(allTime[3]+allTime[4]);
                let anotherSide;
                if(allTime === ""){
                        hour=07;
                        minutes=30;
                }
                if(hour>12){
                        hour = (hour-12);
                }
                let anglehour = (hour*30) + ((minutes*6)/12)
                let hoursD = minutes*6;
                const hr=document.querySelector("#hr");
                const mn=document.querySelector("#mn");
                hr.style.transform = `rotateZ(${anglehour}deg)`;
                mn.style.transform = `rotateZ(${hoursD}deg)`;
                anglehour=parseInt(anglehour);
                let angle = hoursD-anglehour;
                if(angle<0){ angle=0-angle }
                document.querySelector('.angledeg').innerHTML = ` ${(angle)}° deg`;
        }
        function countries() {
                fetch("./countries.json").then
                (result =>  
                        result.json()
                
                ).then(resultjs => 
                {
                        var country = document.querySelector(".ontario");
                        let  count = ["Zambia","Venezuela","Algeria","Zimbabwe","Angola","Afghanistan",'Canada','UnitedStates','Germany','Russia','Turkey','Egypt'];
                        // this object names.cities from json locl-file  api get local. 
                        for(let c=0; c < count.length ; c++){
                                let value = count[c];
                                for(let i=1;i<8;i++){
                                        country.innerHTML +=  `<option value=${ resultjs[`${value}`][i] } > ${ resultjs[`${value}`][i] } </option>`; 
                                }
                        }
                        country.onclick = null;        
                }
                );
        }
        function whether() {
                var get_data;
                var input_city = document.querySelector(".design").value; 
                let  country = document.querySelector(".ontario").value;
                if(input_city.length > 12){
                        input_city ='canada';
                }
                if(input_city !== "" && country !="") {
                        country = "";
                }
                else if(input_city === "" && country === ""){
                        country ="Canada";
                }
                 //get api whether....
                function api(input_city,country){
                        if(input_city !== "" && country == "" ){
                                document.querySelector(".country").textContent = input_city;
                                get_data =  fetch(`https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/${input_city}?unitGroup=metric&key=9HD89P9L6T4LJNBX2SCT7MS34&contentType=json`);
                                return get_data;
                        }
                        else if(country != "" && input_city ===  ""){
                                document.querySelector(".country").textContent = country;
                                get_data =  fetch(`https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/${country}?unitGroup=metric&key=9HD89P9L6T4LJNBX2SCT7MS34&contentType=json`);
                                return get_data;
                        }
                }
                api(input_city,country);
                // ---------------------------------------------
                get_data.then(response =>{return response.json()})
                .then(data =>   
                {
                                let  wind = document.querySelector(".wind-speed");
                                let cloud = document.querySelector(".cloudcover");
                                let img = document.querySelector("#emoji");
                                wind.textContent = `${data.currentConditions.windspeed}km/h`;
                                cloud.textContent = `${data.currentConditions.cloudcover}%`;
                                if((data.currentConditions.icon ==  "rain" ||"cloudy" || "partly-cloudy-night"||"partly-cloudy-day")&&(data.currentConditions.cloudcover > 60)){
                                                img.src = "image/poop.png";
                                }
                                else if((data.currentConditions.icon == "snow" || "clear-day" || "clear-night" ||"partly-cloudy-day")&&(data.currentConditions.cloudcover < 60)){
                                        img.src = "image/goodday.png";
                                }
                                else{
                                        img.src = "image/mah.png";
                                }
                //-----------today----------- --------today--------------------
                                today(data);
                                function  today(){
                                        let x=0;
                                        for(let i=2;i<24;i+=4){
                                                let clouds = data.days[x].hours[i].cloudcover;
                                                let iconess = data.days[x].hours[i].icon;
                                                let  imgs_footer = document.getElementById(`${i}`);
                                                if((iconess ==  "rain" ||"cloudy" || "partly-cloudy-night"||"partly-cloudy-day")&&(clouds > 60)){
                                                        imgs_footer.src = "image/poop.png"; 
                                                }
                                                else if((iconess  == "snow" || "clear-day" || "clear-night" ||"partly-cloudy-day")&&(clouds < 60)){
                                                        imgs_footer.src = "image/goodday.png";
                                                }
                                                else{
                                                        imgs_footer.src = "image/mah.png";
                                                }
                                        }
                                }
                // -------------------------------------------------------
                }
                ).catch(err => {
                        console.error(err);}
                );
        }
        setInterval(lop,1);
}
