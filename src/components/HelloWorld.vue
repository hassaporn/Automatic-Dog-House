<template>
  <v-layout row>
    <v-flex xs12 sm6 offset-sm3>
      <v-card>
        <v-img
          src="http://www.gmurrayphoto.com/wp-content/uploads/2016/10/14-8491-post/1P8A2228-2000x1333.jpg"
          height="400px"
        >
        </v-img>

        <v-card-title primary-title>
          <div>
            <div class="headline">Dog</div>
          </div>
        </v-card-title>
  
        <v-card-actions>
          <v-btn to="/camera" color="teal accent-1">Camera</v-btn>
          <v-btn to="/feed" color="yellow lighten-2">Feed</v-btn>
          <v-btn to="/temperature" color="deep-orange lighten-4">Temperature</v-btn>
          <v-btn to="/light" color="red lighten-2">Light</v-btn>
          <v-spacer></v-spacer>
          <v-btn icon @click="show = !show">
            <v-icon>{{ show ? 'keyboard_arrow_down' : 'keyboard_arrow_up' }}</v-icon>
          </v-btn>
        </v-card-actions>

        <v-slide-y-transition>
          <v-card-text v-show="show">
            <div id="app">
  <v-app id="inspire">
  <template>
  <v-container fluid>
    <v-card>
      <v-container
        fluid
        grid-list-lg
      >
        <v-layout row wrap>
          

          <v-flex xs12>
            <v-card color="deep-orange lighten-4" class="black--text">
              <v-layout>
                <v-flex xs5>
                  <v-img
                    src="https://www.img.in.th/images/20aea98c6eba5f516ed5a96d525f82cc.png"
                    height="60px"
                    contain
                  ></v-img>
                </v-flex>
                <v-flex xs7>
                  <v-card-title primary-title>
                    <div>
                      <div>ปุ่มนี้สามารถเปิดไปยังหน้าต่างที่ทำการสตรีมวิดีโอภายในบ้านสุนัขอัตโนมัติ</div>
                    </div>
                  </v-card-title>
                </v-flex>
              </v-layout>
            </v-card>
          </v-flex>

          <v-flex xs12>
            <v-card color="red lighten-2" class="black--text">
              <v-layout>
                <v-flex xs5>
                  <v-img
                    src="https://www.img.in.th/images/311c01a6a3f426bdb23f4b8138eb7359.png"
                    height="60px"
                    contain
                  ></v-img>
                </v-flex>
                <v-flex xs7>
                  <v-card-title primary-title>
                    <div>
                      <div>ปุ่มนี้สามารถเปิดไปยังหน้าต่างที่สามารถกำหนดการให้อาหารสุนัขของท่านได้โดยตรงหรือตั้งเวลาให้ล่วงหน้า</div>
                    </div>
                  </v-card-title>
                </v-flex>
              </v-layout>
            </v-card>
          </v-flex>

          <v-flex xs12>
            <v-card color="teal accent-1" class="black--text">
              <v-layout>
                <v-flex xs5>
                  <v-img
                    src="https://www.img.in.th/images/5e51ce244967a507078696603db9b1d4.png"
                    height="60px"
                    contain
                  ></v-img>
                </v-flex>
                <v-flex xs7>
                  <v-card-title primary-title>
                    <div>
                      <div>ปุ่มนี้สามารถเปิดไปยังหน้าต่างที่ทำการแสดงอุณหภูมิภายในบ้านสุนัขอัตโนมัติและสั่งการเปิด/ปิดพัดลม</div>
                    </div>
                  </v-card-title>
                </v-flex>
              </v-layout>
            </v-card>
          </v-flex>

          <v-flex xs12>
            <v-card color="yellow lighten-2" class="black--text">
              <v-layout>
                <v-flex xs5>
                  <v-img
                    src="https://www.img.in.th/images/ad59462f2de0f38c81e9db2756885fca.png"
                    height="60px"
                    contain
                  ></v-img>
                </v-flex>
                <v-flex xs7>
                  <v-card-title primary-title>
                    <div>
                      <div>ปุ่มนี้สามารถเปิดไปยังหน้าต่างที่ทำการสั่งการเปิด/ปิดไฟภายในบ้านสุนัขอัตโนมัติได้</div>
                    </div>
                  </v-card-title>
                </v-flex>
              </v-layout>
            </v-card>
          </v-flex>
        </v-layout>
      </v-container>
    </v-card>
  </v-container>
</template>
  </v-app>
</div>
          </v-card-text>
        </v-slide-y-transition>
      </v-card>
    </v-flex>
  </v-layout>
</template>

<script>
  export default {
    data: () => ({
      show: false
    })
  }
</script>
