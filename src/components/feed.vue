<template>

  <v-container fluid>
    <v-layout row wrap>
      <v-flex xs12 class="text-xs-center" mt-5>
      <h1>Feed</h1>
      </v-flex>
      <v-flex xs12 class="text-xs-center" mt-5>
        <v-select
          :items="items"
          label="Time 1"
          outline
        ></v-select>
      </v-flex>
      <v-flex xs12 class="text-xs-center" mt-5>
        <v-select
          :items="items"
          label="Time 2"
          outline
        ></v-select>
      </v-flex>
      <v-flex xs12 class="text-xs-center" mt-5>
        <v-select
          :items="items"
          label="Time 3"
          outline
        ></v-select>
        <v-flex xs12 class="text-xs-center" mt-5>
        <v-select
          :volume="volume"
          label="Volume"
          outline
        ></v-select>
      </v-flex>
      </v-flex>
      <v-flex xs12 class="text-xs-center" mt-5>
        <v-btn color="orange lighten-1">Save</v-btn>
        <v-btn to="/" color="lime lighten-2">Back</v-btn>
      </v-flex>
    </v-layout>
  </v-container>
    
</template>

<script>
export default {
    data: () => ({
      items: ['08:00', '09:00', '10:00', '11:00', '12:00', '13:00', '14:00', '15:00', '16:00', '17:00', '18:00', '19:00'],
      volume: ['300g', '350g', '400g', '450g', '500g', '550g', '600g']
    })
  }
</script>