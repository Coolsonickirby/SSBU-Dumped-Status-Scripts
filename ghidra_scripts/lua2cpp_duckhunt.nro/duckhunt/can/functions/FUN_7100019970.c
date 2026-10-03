
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019970(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack240,_GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer(aLStack240);
  ppBVar9 = &param_2->moduleAccessor;
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar3);
  lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack240);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack304);
  iVar4 = SITUATION_KIND_AIR;
  if ((bVar2 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x17);
    lib::L2CValue::L2CValue(aLStack240,iVar4);
    uVar6 = lib::L2CValue::operator==(aLStack240,pLVar5);
    lib::L2CValue::~L2CValue(aLStack240);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_IS_REFLECTED);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack240);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack144,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_IS_TAKENOUT);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) goto LAB_7100019b1c;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack320,_WEAPON_DUCKHUNT_CAN_STATUS_KIND_EXPLODE);
      lib::L2CValue::L2CValue(aLStack336,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_710001a6ac;
    }
  }
LAB_7100019b1c:
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_MAX_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::L2CValue(aLStack240,0);
  uVar6 = lib::L2CValue::operator<(aLStack240,aLStack112);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_UP);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack384,_GROUND_TOUCH_FLAG_UP);
      lib::L2CValue::L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128);
      uVar3 = lib::L2CValue::as_integer(aLStack384);
      uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar9,uVar3);
      lib::L2CValue::L2CValue(aLStack240,(float)uVar12);
      lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar12 >> 0x20));
      lib::L2CValue::operator=(aLStack112,aLStack240);
      lib::L2CValue::operator=(aLStack128,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack160,fVar10);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::operator*(aLStack144,aLStack112);
      lib::L2CValue::operator*(aLStack160,aLStack128);
      lib::L2CValue::operator+(aLStack272,aLStack288);
      lib::L2CValue::L2CValue(aLStack240,2.0);
      lib::L2CValue::operator*(aLStack256,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::operator*(aLStack208,aLStack176);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::operator*(aLStack192,aLStack112);
      lib::L2CValue::operator-(aLStack144,aLStack208);
      lib::L2CValue::operator=(aLStack144,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::operator*(aLStack192,aLStack128);
      lib::L2CValue::operator-(aLStack160,aLStack208);
      lib::L2CValue::operator=(aLStack160,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack240,_WEAPON_KINETIC_TYPE_NORMAL);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack240);
      lib::L2CAgent::push_lua_stack(param_2,aLStack144);
      lib::L2CAgent::push_lua_stack(param_2,aLStack160);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::L2CValue(param_1,0);
      goto LAB_710001a6ac;
    }
    lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_LEFT);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack240);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_RIGHT);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) goto LAB_7100019ff0;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack112);
LAB_7100019ff0:
      lib::L2CValue::L2CValue
                (aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_INVALID_HOP_FRAMES);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::L2CValue(aLStack240,0);
      uVar6 = lib::L2CValue::operator<=(aLStack112,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack240,0);
        lib::L2CValue::L2CValue(aLStack112,0);
        app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar9);
        app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack160,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack144,fVar10);
        lib::L2CValue::L2CValue(aLStack192,0x9dc05a56b);
        lib::L2CValue::L2CValue(aLStack208,0x12f99006f0);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        uVar8 = lib::L2CValue::as_integer(aLStack208);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack176,fVar10);
        lib::L2CValue::operator*(aLStack144,aLStack176);
        lib::L2CValue::operator=(aLStack240,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar9,iVar4);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator=(aLStack112,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_TYPE_NORMAL);
        lib::L2CValue::operator-(aLStack240);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack128);
        lib::L2CAgent::push_lua_stack(param_2,aLStack144);
        lib::L2CAgent::push_lua_stack(param_2,aLStack112);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack240);
      }
    }
    lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack240,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      uVar6 = lib::L2CValue::operator<(aLStack240,aLStack112);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(param_1,0);
        lib::L2CValue::~L2CValue(aLStack112);
        goto LAB_710001a6ac;
      }
      lib::L2CValue::L2CValue(aLStack240,0x564b918b6);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(aLStack240);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      fVar11 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,0x17f15e35ca);
      HVar7 = lib::L2CValue::as_hash(aLStack240);
      app::lua_bind::SoundModule__stop_se_impl(*ppBVar9,HVar7,0);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,0x176f3aa069);
      HVar7 = lib::L2CValue::as_hash(aLStack240);
      iVar4 = app::lua_bind::SoundModule__play_se_impl(*ppBVar9,HVar7,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack400,iVar4);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,_MA_MSC_CMD_SLOPE_SLOPE);
      lib::L2CValue::L2CValue(aLStack128,_MA_MSC_CMD_SLOEP_SLOPE_KIND_TOP);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack240);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      app::sv_module_access::slope(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack160,0x9dc05a56b);
      lib::L2CValue::L2CValue(aLStack176,0xf8eb556c4);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      uVar8 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::operator+(aLStack144,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue
                (aLStack240,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_BASE_HOP_SPEED_X);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,0x9dc05a56b);
      lib::L2CValue::L2CValue(aLStack176,0xff9b26652);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      uVar8 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::operator+(aLStack144,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue
                (aLStack240,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_PRE_HOP_INIT_SPEED_Y);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack240,_WEAPON_KINETIC_TYPE_NORMAL);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack240);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      lib::L2CAgent::push_lua_stack(param_2,aLStack144);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack240);
      FUN_7100017f90(param_2);
      lib::L2CValue::L2CValue(aLStack432,0.0);
      FUN_7100014010(param_2,aLStack432);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  else {
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack304);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack240,0x17f15e35ca);
      HVar7 = lib::L2CValue::as_hash(aLStack240);
      app::lua_bind::SoundModule__stop_se_impl(*ppBVar9,HVar7,0);
      lib::L2CValue::~L2CValue(aLStack240);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x17);
      lib::L2CValue::L2CValue(aLStack240,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((uVar6 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
        lib::L2CValue::L2CValue(aLStack240,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==(pLVar5,aLStack240);
        lib::L2CValue::~L2CValue(aLStack240);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack352,_WEAPON_DUCKHUNT_CAN_STATUS_KIND_EXPLODE);
          lib::L2CValue::L2CValue(aLStack368,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::L2CValue(param_1,1);
          goto LAB_710001a6ac;
        }
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
LAB_710001a6ac:
  lib::L2CValue::~L2CValue(aLStack304);
  return;
}

