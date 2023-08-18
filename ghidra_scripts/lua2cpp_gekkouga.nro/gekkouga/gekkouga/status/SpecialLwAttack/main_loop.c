
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialLwAttack_main_loop
          (L2CFighterGekkouga *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  long lVar15;
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  ulong local_2c0;
  ulong uStack696;
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  ulong auStack592 [2];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  undefined auStack544 [32];
  undefined auStack512 [32];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  ulong auStack448 [2];
  L2CValue aLStack432 [16];
  undefined auStack416 [32];
  L2CValue aLStack384 [16];
  undefined auStack368 [32];
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
  undefined8 local_80;
  lua_State *plStack120;
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,false);
  lib::L2CValue::L2CValue((L2CValue *)(auStack368 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,0);
  lib::L2CValue::L2CValue(aLStack384,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack416 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack416,0);
  lib::L2CValue::L2CValue(aLStack432,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack448,0);
  lib::L2CValue::L2CValue(aLStack464,0);
  lib::L2CValue::L2CValue(aLStack480,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack512 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack512,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack544 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack544,0);
  lib::L2CValue::L2CValue(aLStack560,0);
  ppBVar11 = &this->moduleAccessor;
  HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack576,HVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_TO_END);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_2c0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2c0);
  if ((bVar2 & 1U) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack608,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack608);
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack592);
    lib::L2CValue::_L2CValue((L2CValue *)auStack592);
    lib::L2CValue::_L2CValue(aLStack608);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((bVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack624,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_LW_END);
    lib::L2CValue::L2CValue(aLStack640,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack640);
    lib::L2CValue::_L2CValue(aLStack624);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100024eb4;
  }
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_2c0,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_2c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
  if ((uVar7 & 1) == 0) {
LAB_71000229b0:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_2c0,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_2c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
    if ((uVar7 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_2c0,GROUND_CORRECT_KIND_GROUND);
        GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2c0);
        app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
        bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
        uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
        if ((uVar7 & 1) == 0) goto LAB_7100022bac;
        lib::L2CValue::L2CValue((L2CValue *)&local_2c0,0x11b7bf50dd);
        uVar7 = lib::L2CValue::operator__(aLStack576,(L2CValue *)&local_2c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        if ((uVar7 & 1) == 0) {
          fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
          lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,0x11b7bf50dd);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
          lib::L2CValue::L2CValue((L2CValue *)auStack592,1.0);
          lib::L2CValue::L2CValue(aLStack608,false);
          HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_2c0);
          fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
          fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack592);
          bVar1 = lib::L2CValue::as_bool(aLStack608);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar11,HVar5,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack608);
          lib::L2CValue::_L2CValue((L2CValue *)auStack592);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          fVar12 = (float)lib::L2CValue::as_number((L2CValue *)(auStack368 + 0x10));
          app::lua_bind::MotionModule__set_frame_sync_anim_cmd_impl
                    (*ppBVar11,fVar12,true,false,false);
        }
      }
    }
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_2c0,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_2c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
    if ((uVar7 & 1) == 0) goto LAB_71000229b0;
    lib::L2CValue::L2CValue((L2CValue *)&local_2c0,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2c0);
    app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
    uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
    if ((uVar7 & 1) == 0) {
LAB_7100022bac:
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,0x15c1e2a4c2);
      uVar7 = lib::L2CValue::operator__(aLStack576,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar7 & 1) == 0) {
        fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
        lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),(L2CValue *)&local_2c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
        lib::L2CValue::L2CValue((L2CValue *)&local_2c0,0x15c1e2a4c2);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack592,1.0);
        lib::L2CValue::L2CValue(aLStack608,false);
        HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_2c0);
        fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
        fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack592);
        bVar1 = lib::L2CValue::as_bool(aLStack608);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar11,HVar5,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::_L2CValue((L2CValue *)auStack592);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
        fVar12 = (float)lib::L2CValue::as_number((L2CValue *)(auStack368 + 0x10));
        app::lua_bind::MotionModule__set_frame_sync_anim_cmd_impl(*ppBVar11,fVar12,true,false,false)
        ;
      }
    }
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_2c0,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_2c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
  lib::L2CValue::operator_(aLStack336);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack592,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_INIT_MOVE_DONE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack592);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)&local_80);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack592);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,true);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      fVar12 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      fVar12 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
      lib::L2CValue::operator_((L2CValue *)auStack448,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      fVar12 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
      lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACKER_POS_X
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACKER_POS_Y
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
      lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
      lib::L2CValue::operator_((L2CValue *)auStack512,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
      lib::L2CValue::operator_((L2CValue *)auStack416,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack592,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_WAIT_ATTACK);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack592);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
      uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack592);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::operator_(aLStack160,(L2CValue *)auStack512);
        uVar7 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_2c0);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
        }
        else {
          lib::L2CValue::operator_(aLStack480,(L2CValue *)auStack416);
          uVar7 = lib::L2CValue::operator__((L2CValue *)auStack448,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          if ((uVar7 & 1) != 0) goto LAB_71000236f4;
        }
        lib::L2CValue::L2CValue((L2CValue *)auStack592,_GROUND_TOUCH_FLAG_ALL);
        uVar14 = lib::L2CValue::as_integer((L2CValue *)auStack592);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar14);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_2c0,true);
        uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack592);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_2c0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_WAIT_ATTACK);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2c0);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,0.0);
          lib::L2CValue::operator_((L2CValue *)auStack512,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_2c0,
                     _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_SPEED_X);
          fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2c0);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,0.0);
          lib::L2CValue::operator_((L2CValue *)auStack416,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_2c0,
                     _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_SPEED_Y);
          fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2c0);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
          lib::L2CValue::L2CValue((L2CValue *)auStack592,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_2c0);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack592);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue((L2CValue *)auStack592);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_2c0);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)auStack592,_GROUND_TOUCH_FLAG_UP);
          uVar14 = lib::L2CValue::as_integer((L2CValue *)auStack592);
          bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar14);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,true);
          puVar9 = &local_2c0;
          uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)puVar9);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack656,GROUND_TOUCH_FLAG_DOWN);
            uVar14 = lib::L2CValue::as_integer(aLStack656);
            bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar14);
            lib::L2CValue::L2CValue(aLStack608,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,true);
            puVar9 = &local_2c0;
            uVar7 = lib::L2CValue::operator__(aLStack608,(L2CValue *)puVar9);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue(aLStack608);
            lib::L2CValue::_L2CValue(aLStack656);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)auStack592,_GROUND_TOUCH_FLAG_LEFT);
              uVar14 = lib::L2CValue::as_integer((L2CValue *)auStack592);
              bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar14);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,true);
              puVar9 = &local_2c0;
              uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)puVar9);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              if ((uVar7 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack656,GROUND_TOUCH_FLAG_RIGHT);
                uVar14 = lib::L2CValue::as_integer(aLStack656);
                bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar14);
                lib::L2CValue::L2CValue(aLStack608,(bool)(bVar1 & 1));
                lib::L2CValue::L2CValue((L2CValue *)&local_2c0,true);
                puVar9 = &local_2c0;
                uVar7 = lib::L2CValue::operator__(aLStack608,(L2CValue *)puVar9);
                lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
                lib::L2CValue::_L2CValue(aLStack608);
                lib::L2CValue::_L2CValue(aLStack656);
                lib::L2CValue::_L2CValue((L2CValue *)&local_80);
                lib::L2CValue::_L2CValue((L2CValue *)auStack592);
                if ((uVar7 & 1) == 0) goto LAB_71000236f4;
              }
              else {
                lib::L2CValue::_L2CValue((L2CValue *)&local_80);
                lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              }
              lib::L2CAgent::math_abs((L2CAgent *)auStack512,(L2CValue *)puVar9);
              puVar9 = &local_2c0;
              lib::L2CValue::operator_(aLStack560,(L2CValue *)puVar9);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CAgent::math_abs((L2CAgent *)auStack416,(L2CValue *)puVar9);
              lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::operator_(aLStack560,aLStack256);
              lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_80);
              lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::operator_((L2CValue *)auStack416,aLStack144);
              lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_80);
              lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              uVar7 = lib::L2CValue::operator_((L2CValue *)auStack448,aLStack464);
              if ((uVar7 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)auStack592,GROUND_TOUCH_FLAG_DOWN);
                uVar14 = lib::L2CValue::as_integer((L2CValue *)auStack592);
                bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar14);
                lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
                lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
                uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_80);
                lib::L2CValue::_L2CValue((L2CValue *)auStack592);
                if ((uVar7 & 1) != 0) {
                  uVar7 = lib::L2CValue::as_number(aLStack192);
                  lVar15 = lib::L2CValue::as_number(aLStack464);
                  uVar14 = lib::L2CValue::as_number(aLStack224);
                  local_2c0 = uVar7 & 0xffffffff | lVar15 << 0x20;
                  uStack696 = (ulong)uVar14;
                  app::lua_bind::PostureModule__set_pos_impl(*ppBVar11,(Vector3f *)&local_2c0);
                }
              }
              else {
                lib::L2CValue::L2CValue((L2CValue *)auStack592,_GROUND_TOUCH_FLAG_UP);
                uVar14 = lib::L2CValue::as_integer((L2CValue *)auStack592);
                bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar14);
                lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
                lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
                uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_80);
                lib::L2CValue::_L2CValue((L2CValue *)auStack592);
                if ((uVar7 & 1) != 0) {
                  uVar7 = lib::L2CValue::as_number(aLStack192);
                  lVar15 = lib::L2CValue::as_number(aLStack464);
                  uVar14 = lib::L2CValue::as_number(aLStack224);
                  local_2c0 = uVar7 & 0xffffffff | lVar15 << 0x20;
                  uStack696 = (ulong)uVar14;
                  app::lua_bind::PostureModule__set_pos_impl(*ppBVar11,(Vector3f *)&local_2c0);
                }
              }
              goto LAB_71000236f4;
            }
          }
          else {
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
          }
          lib::L2CAgent::math_abs((L2CAgent *)auStack512,(L2CValue *)puVar9);
          puVar9 = &local_2c0;
          lib::L2CValue::operator_(aLStack560,(L2CValue *)puVar9);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CAgent::math_abs((L2CAgent *)auStack416,(L2CValue *)puVar9);
          lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::operator_(aLStack560,aLStack256);
          lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_80);
          lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::operator_((L2CValue *)auStack512,aLStack384);
          lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_80);
          lib::L2CValue::operator_((L2CValue *)(auStack416 + 0x10),(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          uVar7 = lib::L2CValue::operator_(aLStack192,(L2CValue *)(auStack416 + 0x10));
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)auStack592,_GROUND_TOUCH_FLAG_LEFT);
            uVar14 = lib::L2CValue::as_integer((L2CValue *)auStack592);
            bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar14);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
            uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
            if ((uVar7 & 1) != 0) {
              uVar7 = lib::L2CValue::as_number((L2CValue *)(auStack416 + 0x10));
              lVar15 = lib::L2CValue::as_number((L2CValue *)auStack448);
              uVar14 = lib::L2CValue::as_number(aLStack224);
              local_2c0 = uVar7 & 0xffffffff | lVar15 << 0x20;
              uStack696 = (ulong)uVar14;
              app::lua_bind::PostureModule__set_pos_impl(*ppBVar11,(Vector3f *)&local_2c0);
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)auStack592,GROUND_TOUCH_FLAG_RIGHT);
            uVar14 = lib::L2CValue::as_integer((L2CValue *)auStack592);
            bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar14);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
            uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
            if ((uVar7 & 1) != 0) {
              uVar7 = lib::L2CValue::as_number((L2CValue *)(auStack416 + 0x10));
              lVar15 = lib::L2CValue::as_number((L2CValue *)auStack448);
              uVar14 = lib::L2CValue::as_number(aLStack224);
              local_2c0 = uVar7 & 0xffffffff | lVar15 << 0x20;
              uStack696 = (ulong)uVar14;
              app::lua_bind::PostureModule__set_pos_impl(*ppBVar11,(Vector3f *)&local_2c0);
            }
          }
        }
      }
LAB_71000236f4:
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack592,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_WAIT_ATTACK);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack592);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,true);
      uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack592);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack592,0);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack592);
        bVar1 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar11,iVar3,false);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
        uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack592);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_2c0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_WAIT_ATTACK);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2c0);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,
                     _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_SPEED_X);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
          lib::L2CValue::operator_((L2CValue *)auStack512,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,
                     _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_SPEED_Y);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
          lib::L2CValue::operator_((L2CValue *)auStack416,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_2c0);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack512);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_2c0);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack416);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_2c0);
        }
        lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_2c0,true);
      uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_2c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
      if ((uVar7 & 1) != 0) {
        bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
        uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
        if ((uVar7 & 1) == 0) {
          puVar9 = &local_80;
        }
        else {
          bVar1 = app::lua_bind::SlowModule__is_skip_impl(*ppBVar11);
          lib::L2CValue::L2CValue((L2CValue *)auStack592,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
          uVar7 = lib::L2CValue::operator__((L2CValue *)auStack592,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)auStack592);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((uVar7 & 1) == 0) goto LAB_7100024e4c;
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_2c0,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_INIT_MOVE_DONE)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_2c0);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,true);
          bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_2c0);
          app::lua_bind::VisibilityModule__set_whole_impl(*ppBVar11,(bool)(bVar1 & 1));
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1.0);
          lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1.0);
          lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1.0);
          lib::L2CValue::operator_((L2CValue *)(auStack544 + 0x10),(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_UP);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_80,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_UP_SIDE
                      );
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1018dfb2f4);
              lib::L2CValue::L2CValue((L2CValue *)auStack592,0x193ad740a3);
              uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
              uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack592);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
              lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1018dfb2f4);
              lib::L2CValue::L2CValue((L2CValue *)auStack592,0x1826d746ca);
              uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
              uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack592);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
              lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::L2CValue(aLStack608,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack656,0x12ce296d70);
              uVar7 = lib::L2CValue::as_integer(aLStack608);
              uVar8 = lib::L2CValue::as_integer(aLStack656);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar12);
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,10.0);
              lib::L2CValue::operator_((L2CValue *)auStack592,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::operator_((L2CValue *)(auStack544 + 0x10),(L2CValue *)&local_80);
              goto LAB_7100024388;
            }
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_80,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_SIDE);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1018dfb2f4);
              lib::L2CValue::L2CValue((L2CValue *)auStack592,0x16de87e9e9);
              uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
              uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack592);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
              lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1018dfb2f4);
              lib::L2CValue::L2CValue((L2CValue *)auStack592,0x152bc46e37);
              uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
              uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack592);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
              lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::L2CValue(aLStack608,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack656,0xf15524f7d);
              uVar7 = lib::L2CValue::as_integer(aLStack608);
              uVar8 = lib::L2CValue::as_integer(aLStack656);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar12);
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,10.0);
              lib::L2CValue::operator_((L2CValue *)auStack592,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::operator_((L2CValue *)(auStack544 + 0x10),(L2CValue *)&local_80);
              goto LAB_7100024388;
            }
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_80,
                       _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_DOWN_SIDE);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1018dfb2f4);
              lib::L2CValue::L2CValue((L2CValue *)auStack592,0x1b39e97589);
              uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
              uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack592);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
              lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1018dfb2f4);
              lib::L2CValue::L2CValue((L2CValue *)auStack592,0x1a64b51c52);
              uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
              uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack592);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
              lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::L2CValue(aLStack608,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack656,0x14d6234bde);
              uVar7 = lib::L2CValue::as_integer(aLStack608);
              uVar8 = lib::L2CValue::as_integer(aLStack656);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar12);
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,10.0);
              lib::L2CValue::operator_((L2CValue *)auStack592,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::operator_((L2CValue *)(auStack544 + 0x10),(L2CValue *)&local_80);
              goto LAB_7100024388;
            }
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_80,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_ATTACK_DOWN);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1018dfb2f4);
              lib::L2CValue::L2CValue((L2CValue *)auStack592,0x16e1f96267);
              uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
              uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack592);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
              lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1018dfb2f4);
              lib::L2CValue::L2CValue((L2CValue *)auStack592,0x1514bae5b9);
              uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
              uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack592);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
              lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              lib::L2CValue::L2CValue(aLStack608,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack656,0xf2a2cc4f3);
              uVar7 = lib::L2CValue::as_integer(aLStack608);
              uVar8 = lib::L2CValue::as_integer(aLStack656);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8)
              ;
              lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar12);
              lib::L2CValue::L2CValue((L2CValue *)&local_2c0,10.0);
              lib::L2CValue::operator_((L2CValue *)auStack592,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::operator_((L2CValue *)(auStack544 + 0x10),(L2CValue *)&local_80);
              goto LAB_7100024388;
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1018dfb2f4);
            lib::L2CValue::L2CValue((L2CValue *)auStack592,0x14231a3469);
            uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack592);
            fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8);
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
            lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1018dfb2f4);
            lib::L2CValue::L2CValue((L2CValue *)auStack592,0x1309833d48);
            uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack592);
            fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8);
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
            lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue(aLStack608,0x1018dfb2f4);
            lib::L2CValue::L2CValue(aLStack656,0xd3dbcb395);
            uVar7 = lib::L2CValue::as_integer(aLStack608);
            uVar8 = lib::L2CValue::as_integer(aLStack656);
            fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8);
            lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar12);
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,10.0);
            lib::L2CValue::operator_((L2CValue *)auStack592,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::operator_((L2CValue *)(auStack544 + 0x10),(L2CValue *)&local_80);
LAB_7100024388:
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
            lib::L2CValue::_L2CValue(aLStack656);
            lib::L2CValue::_L2CValue(aLStack608);
          }
          fVar12 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar11);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
          lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,
                     _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACKER_POS_X);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
          lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          pLVar6 = aLStack160;
          lib::L2CValue::operator_(aLStack192,pLVar6);
          lib::L2CAgent::math_abs((L2CAgent *)&local_80,pLVar6);
          lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::operator_(aLStack304,aLStack240);
          lib::L2CValue::operator_((L2CValue *)auStack544,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue(aLStack608,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
          iVar3 = lib::L2CValue::as_integer(aLStack608);
          fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar12);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,-1.0);
          lib::L2CValue::operator_((L2CValue *)auStack592,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          puVar10 = &local_80;
          lib::L2CValue::operator_((L2CValue *)auStack512,(L2CValue *)puVar10);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)auStack592);
          lib::L2CValue::_L2CValue(aLStack608);
          lib::L2CAgent::math_abs((L2CAgent *)auStack512,(L2CValue *)puVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1e-05);
          uVar7 = lib::L2CValue::operator_((L2CValue *)&local_2c0,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          if ((uVar7 & 1) == 0) {
            puVar9 = &local_80;
LAB_7100024574:
            lib::L2CValue::_L2CValue((L2CValue *)puVar9);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1e-05);
            uVar7 = lib::L2CValue::operator_((L2CValue *)auStack544,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::operator_((L2CValue *)auStack512,(L2CValue *)(auStack544 + 0x10));
              lib::L2CValue::operator_((L2CValue *)auStack544,(L2CValue *)&local_2c0);
              puVar9 = &local_2c0;
              goto LAB_7100024574;
            }
          }
          fVar12 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar11);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
          lib::L2CValue::operator_((L2CValue *)auStack448,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack592,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_SET_ROT_N);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack592);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,true);
          uVar7 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)auStack592);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)auStack592);
            lib::L2CValue::L2CValue(aLStack608);
            lib::L2CValue::L2CValue(aLStack656);
            lib::L2CValue::L2CValue(aLStack720,0x31d39a761);
            lib::L2CValue::L2CValue(aLStack736,0.0);
            lib::L2CValue::L2CValue(aLStack752,0.0);
            lib::L2CValue::L2CValue(aLStack768,0.0);
            HVar5 = lib::L2CValue::as_hash(aLStack720);
            uVar7 = lib::L2CValue::as_number(aLStack736);
            lVar15 = lib::L2CValue::as_number(aLStack752);
            uVar14 = lib::L2CValue::as_number(aLStack768);
            local_80 = (void **)(uVar7 & 0xffffffff | lVar15 << 0x20);
            plStack120 = (lua_State *)(ulong)uVar14;
            app::lua_bind::ModelModule__joint_global_position_impl
                      (*ppBVar11,HVar5,(Vector3f *)&local_80,true);
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,(float)local_80);
            lib::L2CValue::L2CValue(aLStack688,local_80._4_4_);
            lib::L2CValue::L2CValue(aLStack672,plStack120._0_4_);
            lib::L2CValue::operator_((L2CValue *)auStack592,(L2CValue *)&local_2c0);
            lib::L2CValue::operator_(aLStack608,aLStack688);
            lib::L2CValue::operator_(aLStack656,aLStack672);
            lib::L2CValue::_L2CValue(aLStack672);
            lib::L2CValue::_L2CValue(aLStack688);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue(aLStack768);
            lib::L2CValue::_L2CValue(aLStack752);
            lib::L2CValue::_L2CValue(aLStack736);
            lib::L2CValue::_L2CValue(aLStack720);
            lib::L2CValue::_L2CValue(aLStack656);
            lib::L2CValue::_L2CValue(aLStack608);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,
                     _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACKER_POS_Y);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,fVar12);
          lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          pLVar6 = aLStack480;
          lib::L2CValue::operator_((L2CValue *)auStack448,pLVar6);
          lib::L2CAgent::math_abs((L2CAgent *)&local_80,pLVar6);
          lib::L2CValue::operator_(aLStack432,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::operator_(aLStack432,aLStack240);
          lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue(aLStack608,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
          iVar3 = lib::L2CValue::as_integer(aLStack608);
          fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar12);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,-1.0);
          lib::L2CValue::operator_((L2CValue *)auStack592,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          puVar10 = &local_80;
          lib::L2CValue::operator_((L2CValue *)auStack416,(L2CValue *)puVar10);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)auStack592);
          lib::L2CValue::_L2CValue(aLStack608);
          lib::L2CAgent::math_abs((L2CAgent *)auStack416,(L2CValue *)puVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1e-05);
          uVar7 = lib::L2CValue::operator_((L2CValue *)&local_2c0,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          if ((uVar7 & 1) == 0) {
            puVar9 = &local_80;
LAB_7100024900:
            lib::L2CValue::_L2CValue((L2CValue *)puVar9);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1e-05);
            uVar7 = lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::operator_((L2CValue *)auStack416,(L2CValue *)(auStack544 + 0x10));
              lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_2c0);
              puVar9 = &local_2c0;
              goto LAB_7100024900;
            }
          }
          lib::L2CValue::operator_((L2CValue *)auStack544,(L2CValue *)auStack544);
          lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)auStack368);
          pLVar6 = aLStack608;
          lib::L2CValue::operator_((L2CValue *)auStack592,pLVar6);
          lib::L2CAgent::math_sqrt((L2CAgent *)&local_80,pLVar6);
          lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue(aLStack608);
          lib::L2CValue::_L2CValue((L2CValue *)auStack592);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1.0);
          lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1.0);
          lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_2c0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          pLVar6 = aLStack320;
          uVar7 = lib::L2CValue::operator_(aLStack288,pLVar6);
          if ((uVar7 & 1) != 0) {
            lib::L2CAgent::math_abs((L2CAgent *)auStack544,pLVar6);
            lib::L2CAgent::math_abs((L2CAgent *)auStack368,pLVar6);
            lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)auStack592);
            puVar9 = &local_2c0;
            lib::L2CValue::operator_((L2CValue *)(auStack512 + 0x10),(L2CValue *)puVar9);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CAgent::math_abs((L2CAgent *)auStack544,(L2CValue *)puVar9);
            lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)(auStack512 + 0x10));
            puVar9 = &local_2c0;
            lib::L2CValue::operator_(aLStack208,(L2CValue *)puVar9);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CAgent::math_abs((L2CAgent *)auStack368,(L2CValue *)puVar9);
            lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)(auStack512 + 0x10));
            lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::operator_(aLStack320,aLStack208);
            lib::L2CValue::operator_((L2CValue *)auStack544,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::operator_(aLStack320,aLStack272);
            lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          }
          uVar7 = lib::L2CValue::operator_(aLStack160,aLStack192);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::operator_((L2CValue *)auStack544);
            lib::L2CValue::operator_((L2CValue *)auStack544,(L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          }
          puVar9 = auStack448;
          uVar7 = lib::L2CValue::operator_(aLStack480,(L2CValue *)puVar9);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::operator_((L2CValue *)auStack368);
            puVar9 = &local_2c0;
            lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)puVar9);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          }
          lib::L2CAgent::math_abs((L2CAgent *)auStack512,(L2CValue *)puVar9);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1e-05);
          puVar9 = &local_80;
          uVar7 = lib::L2CValue::operator_((L2CValue *)&local_2c0,(L2CValue *)puVar9);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          if ((uVar7 & 1) == 0) {
LAB_7100024c28:
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack784,(L2CValue *)auStack544);
            lua2cpp::L2CFighterBase::sign(this,(L2CValue)0xf0);
            lib::L2CValue::L2CValue(aLStack800,(L2CValue *)auStack512);
            lua2cpp::L2CFighterBase::sign(this,(L2CValue)0xe0);
            puVar9 = auStack592;
            uVar7 = lib::L2CValue::operator__((L2CValue *)&local_2c0,(L2CValue *)puVar9);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
            lib::L2CValue::_L2CValue(aLStack800);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue(aLStack784);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::operator_(aLStack320,aLStack208);
              lib::L2CValue::L2CValue(aLStack816,(L2CValue *)auStack512);
              lua2cpp::L2CFighterBase::sign(this,(L2CValue)0xd0);
              lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)auStack592);
              puVar9 = &local_2c0;
              lib::L2CValue::operator_((L2CValue *)auStack544,(L2CValue *)puVar9);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              lib::L2CValue::_L2CValue(aLStack816);
              goto LAB_7100024c28;
            }
          }
          lib::L2CAgent::math_abs((L2CAgent *)auStack416,(L2CValue *)puVar9);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,1e-05);
          uVar7 = lib::L2CValue::operator_((L2CValue *)&local_2c0,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          if ((uVar7 & 1) == 0) {
LAB_7100024d38:
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack832,(L2CValue *)auStack368);
            lua2cpp::L2CFighterBase::sign(this,(L2CValue)0xc0);
            lib::L2CValue::L2CValue(aLStack848,(L2CValue *)auStack416);
            lua2cpp::L2CFighterBase::sign(this,(L2CValue)0xb0);
            uVar7 = lib::L2CValue::operator__((L2CValue *)&local_2c0,(L2CValue *)auStack592);
            lib::L2CValue::_L2CValue((L2CValue *)auStack592);
            lib::L2CValue::_L2CValue(aLStack848);
            lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
            lib::L2CValue::_L2CValue(aLStack832);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::operator_(aLStack320,aLStack272);
              lib::L2CValue::L2CValue(aLStack864,(L2CValue *)auStack416);
              lua2cpp::L2CFighterBase::sign(this,(L2CValue)0xa0);
              lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)auStack592);
              lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
              lib::L2CValue::_L2CValue((L2CValue *)auStack592);
              lib::L2CValue::_L2CValue(aLStack864);
              goto LAB_7100024d38;
            }
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,0.0);
          uVar7 = lib::L2CValue::operator_((L2CValue *)&local_2c0,(L2CValue *)auStack416);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,GROUND_CORRECT_KIND_GROUND);
            GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2c0);
            app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar4);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_2c0,GROUND_CORRECT_KIND_AIR);
            GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2c0);
            app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar4);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_2c0);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack544);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
          lib::L2CValue::L2CValue((L2CValue *)&local_2c0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_2c0);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack368);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          puVar9 = &local_2c0;
        }
        lib::L2CValue::_L2CValue((L2CValue *)puVar9);
      }
    }
  }
LAB_7100024e4c:
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
  lib::L2CValue::L2CValue((L2CValue *)&local_2c0,false);
  uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_2c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2c0);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack880,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack880,1);
  }
  lib::L2CValue::_L2CValue(aLStack880);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100024eb4:
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue((L2CValue *)auStack544);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack544 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack512);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack512 + 0x10));
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue((L2CValue *)auStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)auStack416);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack416 + 0x10));
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

