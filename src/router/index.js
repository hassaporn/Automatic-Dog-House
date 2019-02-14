import Vue from 'vue'
import Router from 'vue-router'

const routerOptions = [
  { path: '/', component: 'HelloWorld' },
  { path: '/Camera', component: 'camera' },
  { path: '/Feed', component: 'feed' },
  { path: '/Temperature', component: 'temperature' },
  { path: '/Light', component: 'light' }
]

const routes = routerOptions.map(route => {
  return {
    ...route,
    component: () => import(`@/components/${route.component}.vue`)
  }
})

Vue.use(Router)

export default new Router({
  mode: 'history',
  routes
})