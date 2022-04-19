var exec = require('cordova/exec')

exports.getLoginStatus = function getLoginStatus (s, f) {
  exec(s, f, 'FacebookConnectPlugin', 'getLoginStatus', [])
}

exports.login = function login (permissions, s, f) {
  exec(s, f, 'FacebookConnectPlugin', 'login', permissions)
}

exports.getAccessToken = function getAccessToken (s, f) {
  exec(s, f, 'FacebookConnectPlugin', 'getAccessToken', [])
}

exports.logout = function logout (s, f) {
  exec(s, f, 'FacebookConnectPlugin', 'logout', [])
}

exports.api = function api (graphPath, permissions, s, f) {
  permissions = permissions || []
  exec(s, f, 'FacebookConnectPlugin', 'graphApi', [graphPath, permissions])
}

exports.activateApp = function (s, f) {
  exec(s, f, 'FacebookConnectPlugin', 'activateApp', [])
}

exports.getDeferredApplink = function (s, f) {
	  exec(s, f, 'FacebookConnectPlugin', 'getDeferredApplink', [])
}
