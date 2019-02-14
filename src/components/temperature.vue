<template>
  <v-hover>
    <v-card
      slot-scope="{ hover }"
      class="mx-auto"
      color="grey lighten-4"
      max-width="600"
    >
      <v-img
        :aspect-ratio="9/9"
        src="https://www.img.in.th/images/29377fc9cdc49a2e7a530f6db281fedd.jpg"
      >
        <v-expand-transition>
          <div
            v-if="hover"
            class="d-flex transition-fast-in-fast-out cyan darken-2 v-card--reveal display-3 white--text"
            style="height: 100%;"
          >
            25 Celcius
          </div>
        </v-expand-transition>
      </v-img>
      <v-card-text
        class="pt-4"
        style="position: relative;"
      >
        <v-btn
          absolute
          color="orange"
          class="white--text"
          fab
          large
          right
          top
        >
          FAN
        </v-btn>
        <h3 class="display-1 font-weight-light orange--text mb-2">Temperature</h3>
        <v-btn to="/" color="lime lighten-2">Back</v-btn>
      </v-card-text>
    </v-card>
  </v-hover>
</template>

<script>
export default {}
</script>

<style>
.v-card--reveal {
  align-items: center;
  bottom: 0;
  justify-content: center;
  opacity: .5;
  position: absolute;
  width: 100%;
}
</style>