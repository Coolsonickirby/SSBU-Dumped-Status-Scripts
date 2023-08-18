
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRyu::status::Final2_init(L2CFighterRyu *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  void *pvVar8;
  FighterKineticEnergyGravity *pFVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  ppBVar10 = &this->moduleAccessor;
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack136,iVar3);
  lib::L2CValue::L2CValue(aLStack296,FIGHTER_STATUS_KIND_FINAL);
  uVar5 = lib::L2CValue::operator__(aLStack136,aLStack296);
  lib::L2CValue::_L2CValue(aLStack296);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack296,_FIGHTER_RYU_STATUS_KIND_FINAL_HIT);
    uVar5 = lib::L2CValue::operator__(aLStack136,aLStack296);
    lib::L2CValue::_L2CValue(aLStack296);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack296,_FIGHTER_RYU_STATUS_KIND_FINAL_JUMP);
      uVar5 = lib::L2CValue::operator__(aLStack136,aLStack296);
      lib::L2CValue::_L2CValue(aLStack296);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack296,_FIGHTER_RYU_STATUS_KIND_FINAL_FALL);
        uVar5 = lib::L2CValue::operator__(aLStack136,aLStack296);
        lib::L2CValue::_L2CValue(aLStack296);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack296,_FIGHTER_RYU_STATUS_KIND_FINAL2);
          uVar5 = lib::L2CValue::operator__(aLStack136,aLStack296);
          lib::L2CValue::_L2CValue(aLStack296);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack488,false);
            FUN_710000f9e0(this,aLStack488);
            lib::L2CValue::_L2CValue(aLStack488);
            app::lua_bind::ModelModule__disable_gold_eye_impl(*ppBVar10);
          }
          goto LAB_710000f028;
        }
        lib::L2CValue::L2CValue(aLStack168,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_HIT);
        iVar3 = lib::L2CValue::as_integer(aLStack168);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
        lib::L2CValue::operator_(aLStack152);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack296);
        lib::L2CValue::_L2CValue(aLStack296);
        lib::L2CValue::_L2CValue(aLStack152);
        lib::L2CValue::_L2CValue(aLStack168);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack152,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack168,0x1477b31f57);
          uVar5 = lib::L2CValue::as_integer(aLStack152);
          uVar6 = lib::L2CValue::as_integer(aLStack168);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack296,iVar3);
          lib::L2CValue::L2CValue(aLStack312,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_INT_COUNTER);
          iVar3 = lib::L2CValue::as_integer(aLStack296);
          iVar4 = lib::L2CValue::as_integer(aLStack312);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
        }
        else {
          lib::L2CValue::L2CValue(aLStack152,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack168,0x1032ab2fe4);
          uVar5 = lib::L2CValue::as_integer(aLStack152);
          uVar6 = lib::L2CValue::as_integer(aLStack168);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack296,iVar3);
          lib::L2CValue::L2CValue(aLStack312,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_INT_COUNTER);
          iVar3 = lib::L2CValue::as_integer(aLStack296);
          iVar4 = lib::L2CValue::as_integer(aLStack312);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
        }
        lib::L2CValue::_L2CValue(aLStack312);
        lib::L2CValue::_L2CValue(aLStack296);
        lib::L2CValue::_L2CValue(aLStack168);
        lib::L2CValue::_L2CValue(aLStack152);
        lib::L2CValue::L2CValue(aLStack296,_FIGHTER_KINETIC_TYPE_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack296);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack296);
        lib::L2CValue::L2CValue(aLStack152,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        iVar3 = lib::L2CValue::as_integer(aLStack152);
        pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack296,pvVar8);
        lib::L2CValue::_L2CValue(aLStack152);
        lib::L2CValue::L2CValue(aLStack312,0xbcd2c83a6);
        lib::L2CValue::L2CValue(aLStack392,0);
        uVar5 = lib::L2CValue::as_integer(aLStack312);
        uVar6 = lib::L2CValue::as_integer(aLStack392);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack168,fVar11);
        lib::L2CValue::L2CValue(aLStack424,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack440,0x1678824ac6);
        uVar5 = lib::L2CValue::as_integer(aLStack424);
        uVar6 = lib::L2CValue::as_integer(aLStack440);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack408,fVar11);
        lib::L2CValue::operator_(aLStack168,aLStack408);
        fVar11 = (float)lib::L2CValue::as_number(aLStack152);
        pFVar9 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack296);
        app::lua_bind::FighterKineticEnergyGravity__set_brake_impl(pFVar9,fVar11);
        lib::L2CValue::_L2CValue(aLStack152);
        lib::L2CValue::_L2CValue(aLStack408);
        lib::L2CValue::_L2CValue(aLStack440);
        lib::L2CValue::_L2CValue(aLStack424);
        lib::L2CValue::_L2CValue(aLStack168);
        lib::L2CValue::_L2CValue(aLStack392);
        lib::L2CValue::_L2CValue(aLStack312);
        lib::L2CValue::L2CValue(aLStack312,0x12ec5626fe);
        lib::L2CValue::L2CValue(aLStack392,0);
        uVar5 = lib::L2CValue::as_integer(aLStack312);
        uVar6 = lib::L2CValue::as_integer(aLStack392);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack168,fVar11);
        lib::L2CValue::L2CValue(aLStack424,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack440,0x1ca1e5aba1);
        uVar5 = lib::L2CValue::as_integer(aLStack424);
        uVar6 = lib::L2CValue::as_integer(aLStack440);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack408,fVar11);
        lib::L2CValue::operator_(aLStack168,aLStack408);
        lib::L2CValue::_L2CValue(aLStack408);
        lib::L2CValue::_L2CValue(aLStack440);
        lib::L2CValue::_L2CValue(aLStack424);
        lib::L2CValue::_L2CValue(aLStack168);
        lib::L2CValue::_L2CValue(aLStack392);
        lib::L2CValue::_L2CValue(aLStack312);
        lib::L2CValue::L2CValue(aLStack392,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack408,0x1183ff9f6a);
        uVar5 = lib::L2CValue::as_integer(aLStack392);
        uVar6 = lib::L2CValue::as_integer(aLStack408);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack312,fVar11);
        lib::L2CValue::L2CValue(aLStack440,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack456,0x1ca1e5aba1);
        uVar5 = lib::L2CValue::as_integer(aLStack440);
        uVar6 = lib::L2CValue::as_integer(aLStack456);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack424,fVar11);
        lib::L2CValue::operator_(aLStack312,aLStack424);
        lib::L2CValue::_L2CValue(aLStack424);
        lib::L2CValue::_L2CValue(aLStack456);
        lib::L2CValue::_L2CValue(aLStack440);
        lib::L2CValue::_L2CValue(aLStack312);
        lib::L2CValue::_L2CValue(aLStack408);
        lib::L2CValue::_L2CValue(aLStack392);
        fVar11 = (float)lib::L2CValue::as_number(aLStack152);
        pFVar9 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack296);
        app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar9,fVar11);
        fVar11 = (float)lib::L2CValue::as_number(aLStack168);
        pFVar9 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack296);
        app::lua_bind::FighterKineticEnergyGravity__set_limit_speed_impl(pFVar9,fVar11);
        lib::L2CValue::_L2CValue(aLStack168);
        lib::L2CValue::_L2CValue(aLStack152);
        lib::L2CValue::_L2CValue(aLStack296);
        lib::L2CValue::L2CValue(aLStack472,true);
        FUN_710000f9e0(this,aLStack472);
        pLVar7 = aLStack472;
      }
      else {
        lib::L2CValue::L2CValue(aLStack296,1.0);
        fVar11 = (float)lib::L2CValue::as_number(aLStack296);
        app::lua_bind::AttackModule__set_damage_shake_scale_impl(*ppBVar10,fVar11);
        lib::L2CValue::_L2CValue(aLStack296);
        lib::L2CValue::L2CValue(aLStack376,false);
        FUN_710000f9e0(this,aLStack376);
        pLVar7 = aLStack376;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack344,_FIGHTER_RYU_FINAL_CAMERA_OFFSET_1);
      FUN_710000fad0(this,aLStack344);
      lib::L2CValue::_L2CValue(aLStack344);
      lib::L2CValue::L2CValue(aLStack152,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack168,0x12a3430c51);
      uVar5 = lib::L2CValue::as_integer(aLStack152);
      uVar6 = lib::L2CValue::as_integer(aLStack168);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack296,fVar11);
      fVar11 = (float)lib::L2CValue::as_number(aLStack296);
      app::lua_bind::AttackModule__set_damage_shake_scale_impl(*ppBVar10,fVar11);
      lib::L2CValue::_L2CValue(aLStack296);
      lib::L2CValue::_L2CValue(aLStack168);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::L2CValue(aLStack296,false);
      bVar1 = lib::L2CValue::as_bool(aLStack296);
      app::lua_bind::MotionModule__set_trans_move_speed_no_scale_impl(*ppBVar10,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack296);
      lib::L2CValue::L2CValue(aLStack360,false);
      FUN_710000f9e0(this,aLStack360);
      pLVar7 = aLStack360;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack296,0x50000000);
    lib::L2CValue::L2CValue
              (aLStack152,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_INT_TARGET_BATTLE_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack296);
    iVar4 = lib::L2CValue::as_integer(aLStack152);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::L2CValue(aLStack296,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_DIST_MIN);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    iVar3 = lib::L2CValue::as_integer(aLStack296);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack296);
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack152,iVar3);
    lib::L2CValue::L2CValue(aLStack296,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(aLStack152,aLStack296);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack152);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack296,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack296);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack296,FIGHTER_KINETIC_TYPE_MOTION);
      iVar3 = lib::L2CValue::as_integer(aLStack296);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
    }
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::L2CValue(aLStack152,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack168,0x11f0665576);
    uVar5 = lib::L2CValue::as_integer(aLStack152);
    uVar6 = lib::L2CValue::as_integer(aLStack168);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack296,fVar11);
    fVar11 = (float)lib::L2CValue::as_number(aLStack296);
    app::lua_bind::AttackModule__set_damage_shake_scale_impl(*ppBVar10,fVar11);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack184,0.0);
    lib::L2CValue::L2CValue(aLStack200,0.0);
    lib::L2CValue::L2CValue(aLStack216,0.0);
    uVar13 = 0;
    lib::L2CValue::L2CValue(aLStack232,0.0);
    lua2cpp::L2CFighterBase::Vector4__create
              (this,(L2CValue)0x48,(L2CValue)0x38,(L2CValue)0x28,(L2CValue)0x18);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x162d277af);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x11c630b12);
    uVar12 = app::FighterUtil::renderer_get_clear_color();
    lib::L2CValue::L2CValue(aLStack296,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack280,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue(aLStack264,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack248,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::operator_(pLVar7,aLStack296);
    lib::L2CValue::operator_(this_00,aLStack280);
    lib::L2CValue::operator_(this_01,aLStack264);
    lib::L2CValue::operator_(this_02,aLStack248);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack296);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack296,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_ORIGINAL_BG_COLOR_R);
    fVar11 = (float)lib::L2CValue::as_number(pLVar7);
    iVar3 = lib::L2CValue::as_integer(aLStack296);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack296);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack296,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_ORIGINAL_BG_COLOR_G);
    fVar11 = (float)lib::L2CValue::as_number(pLVar7);
    iVar3 = lib::L2CValue::as_integer(aLStack296);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack296);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x162d277af);
    lib::L2CValue::L2CValue(aLStack296,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_ORIGINAL_BG_COLOR_B);
    fVar11 = (float)lib::L2CValue::as_number(pLVar7);
    iVar3 = lib::L2CValue::as_integer(aLStack296);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack296);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x11c630b12);
    lib::L2CValue::L2CValue(aLStack296,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_ORIGINAL_BG_COLOR_A);
    fVar11 = (float)lib::L2CValue::as_number(pLVar7);
    iVar3 = lib::L2CValue::as_integer(aLStack296);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack296);
    fVar11 = (float)app::FighterUtil::renderer_get_color_rate();
    lib::L2CValue::L2CValue(aLStack296,fVar11);
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_ORIGINAL_COLOR_RATE);
    fVar11 = (float)lib::L2CValue::as_number(aLStack296);
    iVar3 = lib::L2CValue::as_integer(aLStack168);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::L2CValue(aLStack168,0);
    lib::L2CValue::L2CValue(aLStack312,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_INT_INVISIBLE_STAGE_TIME);
    iVar3 = lib::L2CValue::as_integer(aLStack168);
    iVar4 = lib::L2CValue::as_integer(aLStack312);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::L2CValue(aLStack168,false);
    lib::L2CValue::L2CValue(aLStack312,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_INVISIBLE_STAGE);
    bVar1 = lib::L2CValue::as_bool(aLStack168);
    iVar3 = lib::L2CValue::as_integer(aLStack312);
    app::lua_bind::WorkModule__set_flag_impl(*ppBVar10,(bool)(bVar1 & 1),iVar3);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::L2CValue(aLStack328,false);
    FUN_710000f9e0(this,aLStack328);
    lib::L2CValue::_L2CValue(aLStack328);
    app::lua_bind::ModelModule__disable_gold_eye_impl(*ppBVar10);
    lib::L2CValue::_L2CValue(aLStack296);
    pLVar7 = aLStack152;
  }
  lib::L2CValue::_L2CValue(pLVar7);
LAB_710000f028:
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

