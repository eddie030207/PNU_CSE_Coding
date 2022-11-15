const express = require('express');
const app = express();
const port = 5500;
app.use(express.static('public'));
app.listen(port, () => console.log(`listening at http://localhost:${port}/main/main.html`));


app.get('/seoulapi', function(req, res){
  var request = require('request');
  var search = req.query.word;
  search = encodeURI(search);
  console.log(search);
  var options = {
    'method': 'GET',
    'url': 'http://openapi.seoul.go.kr:8088/664a666f70656464373041656e6e70/json/busStopLocationXyInfo/1/1/' + search,
    'headers': {
    }
  };
  request(options, function (error, response) {
  if (error) { /* 에러 처리 구현 */
  res.end("error");
  } else{
  res.send(response.body);
  }
  });
});


app.get('/subwayapi', function(req, res){
  var request = require('request');
  var select = req.query.word;
  select = encodeURI(select);
  var options = {
    'method': 'GET',
    'url': 'http://openapi.seoul.go.kr:8088/664a666f70656464373041656e6e70/json/StationAdresTelno/1/100/' + select,
    'headers': {
    }
  };
  request(options, function (error, response) {
    if (error) { /* 에러 처리 구현 */
      res.end("error");
      } else{
      res.send(response.body);
      }
    });
});


app.get('/weather', function(req, res){
var request = require('request');
var day = req.query.word;
day = encodeURI(day);
var options = {
  'method': 'GET',
  'url': 'http://apis.data.go.kr/1360000/AsosDalyInfoService/getWthrDataList?serviceKey=6nmiW5%2FYx1bpIKGm1%2F43Ux7GftXHb6XByQhyvuRTRvQhYxW0kW%2BpbFDuTyRANhWCTh1ZvcF1xBUbqcgL8KBZ9A%3D%3D&numOfRows=10&pageNo=1&dataCd=ASOS&dateCd=DAY&stnIds=108&startDt=' + day +'&endDt=' + day, /* 검색하고 싶은 시작 날짜와 끝 날짜를 동일하게 하여 하루에 대한 response만 받도록 함 */
  'headers': {
    'Cookie': 'JSESSIONID=dsGfPfqGUWsh3uRmFK0TjUu1r9MfvkgMgta2GsVeo6RmDjCc7SKK1M9Lt7zwNekr.amV1c19kb21haW4vbmV3c2t5Mw=='
  }
};
request(options, function (error, response) {
  if (error) { /* 에러 처리 구현 */
    res.end("error");
    } 
    else{
    res.send(response.body);
    }
});
});

