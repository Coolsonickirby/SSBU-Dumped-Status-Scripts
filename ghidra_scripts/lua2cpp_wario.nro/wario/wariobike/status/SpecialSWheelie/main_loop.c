
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponWarioWariobike::status::SpecialSWheelie_main_loop
          (L2CWeaponWarioWariobike *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  undefined auStack320 [32];
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
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,GROUND_TOUCH_FLAG_RIGHT);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  ppBVar10 = &this->moduleAccessor;
  bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar10,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)(auStack320 + 0x10),aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack352,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLOAT_LR);
    iVar5 = lib::L2CValue::as_integer(aLStack352);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar5);
    lib::L2CValue::L2CValue(aLStack336,fVar11);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack112,aLStack336);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_WARIO_WARIOBIKE_STATUS_KIND_SPECIAL_S_BUMP);
      lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000251dc;
    }
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack320,_GROUND_TOUCH_FLAG_LEFT);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar10,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)(auStack320 + 0x10),aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack352,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLOAT_LR);
    iVar5 = lib::L2CValue::as_integer(aLStack352);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar5);
    lib::L2CValue::L2CValue(aLStack336,fVar11);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack336,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_WARIO_WARIOBIKE_STATUS_KIND_SPECIAL_S_BUMP);
      lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000251dc;
    }
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  }
  HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,HVar7);
  lib::L2CValue::operator_(aLStack160,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  fVar11 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::operator_(aLStack224,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x15fa9bf116);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,19.5);
    uVar6 = lib::L2CValue::operator_(aLStack112,aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,20.5);
      uVar6 = lib::L2CValue::operator_(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0x113c47a17f);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        iVar5 = app::lua_bind::SoundModule__play_se_impl(*ppBVar10,HVar7,true,false,false,false,0);
        lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),iVar5);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x1403adfb62);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::SoundModule__stop_se_impl(*ppBVar10,HVar7,0);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0x170b55265a);
    uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x15fa9bf116);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_WARIO_WARIOBIKE_STATUS_KIND_SPECIAL_S_DRIVE);
        lib::L2CValue::L2CValue((L2CValue *)auStack320,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0xc0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack320);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_71000251dc;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x1195a25abb);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,1.0);
      lib::L2CValue::L2CValue(aLStack352,false);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack320);
      fVar12 = (float)lib::L2CValue::as_number(aLStack336);
      bVar2 = lib::L2CValue::as_bool(aLStack352);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar7,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,0x258bebd730);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)auStack320);
      app::lua_bind::LinkModule__send_event_parents_impl(*ppBVar10,iVar5,HVar7);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack320,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::operator_(aLStack256,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack320,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_INT_WHEELIE_KEEP_FRAME);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar5);
  lib::L2CValue::operator_(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,0xfd048c1ef);
  lib::L2CValue::L2CValue(aLStack336,0x11c17102cb);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  uVar8 = lib::L2CValue::as_integer(aLStack336);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::operator_(aLStack176,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,0xfd048c1ef);
  lib::L2CValue::L2CValue(aLStack336,0x11169ab08a);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  uVar8 = lib::L2CValue::as_integer(aLStack336);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::operator_(aLStack192,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::operator_(aLStack288,aLStack176);
  lib::L2CValue::operator_(aLStack272,aLStack192);
  lib::L2CValue::L2CValue(aLStack336,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  pLVar9 = (L2CValue *)lib::L2CValue::as_integer(aLStack336);
  fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,(int)pLVar9);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,fVar11);
  lib::L2CAgent::math_abs((L2CAgent *)auStack320,pLVar9);
  lib::L2CValue::operator_(aLStack256,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,0xfd048c1ef);
  lib::L2CValue::L2CValue(aLStack336,0x117bafc0f0);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  uVar8 = lib::L2CValue::as_integer(aLStack336);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::operator_(aLStack240,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack320,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_INT_COMMAND_FLAG_CAT_1);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar5);
  lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  uVar6 = lib::L2CValue::operator_(aLStack256,aLStack240);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack320);
    if ((bVar3 & 1U) == 0) {
      fVar11 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack336,fVar11);
      lib::L2CValue::L2CValue(aLStack112,-0.5);
      bVar2 = lib::L2CValue::operator_(aLStack336,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar1 = true;
      bVar3 = true;
    }
    else {
      bVar3 = false;
      bVar1 = true;
      bVar2 = 1;
    }
  }
  else {
    bVar1 = false;
    bVar3 = false;
    bVar2 = 1;
  }
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack208,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if (bVar3) {
    lib::L2CValue::_L2CValue(aLStack336);
  }
  if (bVar1) {
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  }
  uVar6 = lib::L2CValue::operator_(aLStack288,aLStack144);
  if (((uVar6 & 1) == 0) ||
     (bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack208), (bVar3 & 1U) == 0)) {
    lib::L2CValue::operator_(aLStack272,aLStack144);
  }
  uVar6 = lib::L2CValue::operator_(aLStack288,aLStack144);
  if ((((uVar6 & 1) != 0) &&
      (bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack208), (bVar3 & 1U) != 0)) ||
     (uVar6 = lib::L2CValue::operator_(aLStack272,aLStack144), (uVar6 & 1) != 0)) {
    lib::L2CValue::L2CValue(aLStack112,0x15fa9bf116);
    uVar6 = lib::L2CValue::operator__(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x15fa9bf116);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,1.0);
      lib::L2CValue::L2CValue(aLStack384,false);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      fVar11 = (float)lib::L2CValue::as_number(aLStack352);
      fVar12 = (float)lib::L2CValue::as_number(aLStack368);
      bVar2 = lib::L2CValue::as_bool(aLStack384);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar7,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue(aLStack352,0x29b671f59b);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      HVar7 = lib::L2CValue::as_hash(aLStack352);
      app::lua_bind::LinkModule__send_event_parents_impl(*ppBVar10,iVar5,HVar7);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack352,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack352);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack352);
  if ((bVar3 & 1U) != 0) {
    this_00 = &this->globalTable;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar9,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar9,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        FUN_7100025630(this);
      }
    }
    else {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar9,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        FUN_7100025630(this);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000251dc:
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
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

