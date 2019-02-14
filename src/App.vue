<template>
  <v-app>
    <v-navigation-drawer v-model="sidebar" app>
      <v-list>
        <v-list-tile
          v-for="item in menuItems"
          :key="item.title"
          :to="item.path">
          <v-list-tile-action>
            <v-icon>{{ item.icon }}</v-icon>
          </v-list-tile-action>
          <v-list-tile-content>{{ item.title }}</v-list-tile-content>
        </v-list-tile>
      </v-list>
    </v-navigation-drawer>

    <v-toolbar  
    absolute
      color="amber lighten-2"
      dark
      scroll-off-screen
      scroll-target="#scrolling-techniques"
    >
      <span class="hidden-sm-and-up">
        <v-toolbar-side-icon @click="sidebar = !sidebar">
        </v-toolbar-side-icon>
      </span>
      <v-toolbar-title class="black--text"> 
        <router-link to="/" tag="span" style="cursor: pointer" >
          {{ appTitle }}
        </router-link>
      </v-toolbar-title>
      <v-spacer></v-spacer>
      <v-toolbar-items class="hidden-xs-only">
        <v-btn
          flat
          v-for="item in menuItems"
          :key="item.title"
          :to="item.path"
          color="teal darken-4">
          <v-icon large color="teal darken-3">{{ item.icon }}</v-icon>
          {{ item.title }}
        </v-btn>
      </v-toolbar-items>
    </v-toolbar>
    
    <v-content>
      <router-view></router-view>
    </v-content>
    
  </v-app>
</template>

<script>
  export default {
    data () {
      return {
        appTitle: 'Automatic Dog\'s House',
        sidebar: false,
        menuItems: [
          { title: 'Camera', path: '/camera'},
          { title: 'Feed', path: '/feed'},
          { title: 'Temperature', path: '/temperature'},
          { title: 'Light', path: '/light'}
        ]
      }
    }
  }
</script>