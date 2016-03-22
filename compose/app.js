const redis = require('redis');
const http = require('http');
let client;

setTimeout(() => {
  client = redis.createClient('//redis-server');
}, 5000);

http.createServer((req, res) => {
  client.incr('count', (err, count) => {
    if (err) {
      return res.end(`Error: ${err.message}`);
    }
    return res.end(`You are visitor #${count}`);
  });
}).listen(3000);
