<template>
  <v-layout row>
    <v-flex xs12 sm6 offset-sm3>
      <v-card>
        <v-img
          src="https://www.img.in.th/images/22adb60050d90fd3dd0724ee1e5d7f41.jpg"
          height="500px"
        >
        </v-img>

        <v-card-title primary-title>
          <div>
            <div class="headline">Light</div>
          </div>
        </v-card-title>
        <v-btn color="light-blue lighten-2">ON</v-btn>
        <v-btn color="yellow accent-4">OFF</v-btn>
        <v-btn to="/" color="lime lighten-2">Back</v-btn>
      </v-card>
    </v-flex>
  </v-layout>
</template>

<script>
export default {}
</script>